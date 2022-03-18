#include<iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int> &vect) {
    int start = 0;
    int end = vect.size() - 1;
    while(start < end) {
        int temp = vect[start];
        vect[start] = vect[end];
        vect[end] = temp;

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
    reverseArray(vect);
    cout<<"Reverse Array : ";
    printArray(vect);

    return 0;
}
