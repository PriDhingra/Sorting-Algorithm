#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}

void mergeTwoSortedArray(vector<int> &vect1, int m, vector<int> &vect2, int n) {
    int end1 = vect1.size() - (vect1.size() - m) - 1;
    int end2 = vect2.size() - 1;

    int maxVectorSize = vect1.size() - 1;

    while(end1 >= 0 && end2 >= 0) {
        if(vect1[end1] <= vect2[end2]) {
            vect1[maxVectorSize] = vect2[end2];
            maxVectorSize--;
            end2--;
        } else {
            vect1[maxVectorSize] = vect1[end1];
            maxVectorSize--;
            end1--;
        }
    }

    while(end2 >= 0) {
        vect1[end2] = vect2[end2];
        end2--;
    }
}

int main() {
    vector<int> vect1;
    vector<int> vect2;

    vect1.push_back(1);
    vect1.push_back(2);
    vect1.push_back(3);
    vect1.push_back(4);
    vect1.push_back(0);
    vect1.push_back(0);
    vect1.push_back(0);

    vect2.push_back(1);
    vect2.push_back(5);
    vect2.push_back(6);

    mergeTwoSortedArray(vect1, 4, vect2, 3);
    cout<<"After merging two sorted array in first array without using extra space : ";
    printArray(vect1);

    return 0;
}
