#include<iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int> &vect, int k) {
    int start = k + 1;
    int end = vect.size() - 1;
    while(start < end) {
        swap(vect[start], vect[end]);
        start++;
        end--;
    }
}

void printArray(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> vect;

    vect.push_back(11);
    vect.push_back(7);
    vect.push_back(3);
    vect.push_back(12);
    vect.push_back(4);

    cout<<"Array : ";
    printArray(vect);
    reverseArray(vect, 4);
    cout<<"Reverse Array : ";
    printArray(vect);

    return 0;
}
