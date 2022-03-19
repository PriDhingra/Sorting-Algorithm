#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}

bool rotatedSortedArray(vector<int> &vect) {
    int count = 0;

    if(vect[vect.size() - 1] > vect[0]) 
        return false;

    for(int i = 1; i < vect.size();i++) {
        if(vect[i] < vect[i - 1]) 
            count++;
    }

    if(count == 1) 
        return true; 
    else    
        return false;
}

int main() {
    vector<int> vect;

    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(1);
    vect.push_back(2);

    string result = rotatedSortedArray(vect) == 1 ? "Array is rotated Sorted" : "Array is not rotated sorted";
    cout<<result;

    return 0;
}
