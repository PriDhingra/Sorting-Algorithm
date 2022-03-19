#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}

void moveZeros(vector<int> &vect) {
    int temp = 0;
    for(int i = 0; i < vect.size();i++) {
        if(vect[i] != 0) {
            swap(vect[i], vect[temp]);
            temp++;
        }
    }
}

int main() {
    vector<int> vect;

    vect.push_back(0);
    vect.push_back(17);
    vect.push_back(0);
    vect.push_back(3);
    vect.push_back(12);
    vect.push_back(0);

    moveZeros(vect);
    cout<<"Array after moving zero's : ";
    printArray(vect);

    return 0;
}
