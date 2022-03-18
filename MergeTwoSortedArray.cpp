#include<iostream>
#include<vector>

using namespace std;

vector<int> mergeTwoSortedArray(vector<int> &vect1, vector<int> &vect2) {
    int start1 = 0;
    int start2 = 0;

    vector<int> resultVector;

    while(start1 <= vect1.size() - 1 && start2 <= vect2.size() - 1) {
        if(vect1[start1] <= vect2[start2]) {
            resultVector.push_back(vect1[start1]);
            start1++;
        } else {
            resultVector.push_back(vect2[start2]);
            start2++;
        }
    }

    while(start1 <= vect1.size() - 1) {
        resultVector.push_back(vect1[start1]);
        start1++;
    }

    while(start2 <= vect2.size() - 1) {
        resultVector.push_back(vect2[start2]);
        start2++;
    }

    return resultVector;
}

void printArray(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) {
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> vect1;
    vector<int> vect2;

    vect1.push_back(1);
    vect1.push_back(3);
    vect1.push_back(5);
    vect1.push_back(7);
    vect1.push_back(9);

    vect2.push_back(2);
    vect2.push_back(4);
    vect2.push_back(6);

    vector<int> resultVector = mergeTwoSortedArray(vect1, vect2);
    cout<<"After merging two sorted array : ";
    printArray(resultVector);

    return 0;
}
