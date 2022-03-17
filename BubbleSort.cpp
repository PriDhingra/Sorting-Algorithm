#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) {
        for(int j = 0;j < vect.size() - i - 1;j++) {
            if(vect[j + 1] < vect[j]) {
                int temp = vect[j];
                vect[j] = vect[j + 1];
                vect[j + 1] = temp;
            }
        }
    }
}

void printVector(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) 
        cout<<vect[i]<<" ";

    cout<<endl;
}

int main() {

    vector<int> vect;
    vect.push_back(10);
    vect.push_back(1);
    vect.push_back(7);
    vect.push_back(6);
    vect.push_back(14);
    vect.push_back(9);

    cout<<"Before Sorting : ";
    printVector(vect);
    bubbleSort(vect);
    cout<<"After Sorting : ";
    printVector(vect);

    return 0;
}
