#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> vect) {
    for(int i = 0;i < vect.size();i++) {
        cout<<vect[i]<<" ";
    } 
    cout<<"\n";
}

void insertionSort(vector<int> &vect) {
    int j = 0;
    for(int i = 1;i < vect.size();i++) {
        int k = i;
        while(k >= j && k-1 >= 0) {
            // cout<<k<<" "<<k-1<<" "<<j<<endl;
            if(vect[k] < vect[k - 1]) {
                int temp = vect[k];
                vect[k] = vect[k - 1];
                vect[k - 1] = temp;
            }
            k--;
        }
    }

    
}

int main() {
    vector<int> vect;

    vect.push_back(4);
    vect.push_back(3);
    vect.push_back(7);
    vect.push_back(1);
    vect.push_back(9);
    vect.push_back(2);

    cout<<"Before Sorting : ";
    printVector(vect);
    insertionSort(vect);
    cout<<"After Sorting : ";
    printVector(vect);

    return 0;
}
