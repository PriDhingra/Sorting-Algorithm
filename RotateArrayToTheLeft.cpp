#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}

void rotateArray(vector<int> &vect, int k) {
    vector<int> temp(vect.size());

    for(int i = 0; i < vect.size();i++) {
        temp[(vect.size() - (-1 * (i - k))) % vect.size()] = vect[i];
    }

    vect = temp;
}

int main() {
    vector<int> vect;

    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(6);

    rotateArray(vect, 2);
    cout<<"Rotated Array : ";
    printArray(vect);

    return 0;
}
