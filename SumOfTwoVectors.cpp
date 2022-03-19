#include<iostream>
#include<vector>

using namespace std;

void reverseVector(vector<int> &vect) {
    for(int i = 0;i < vect.size() / 2;i++) 
        swap(vect[i], vect[vect.size() - i - 1]);
}

void printVector(vector<int> &vect) {
    for(int i = 0;i < vect.size();i++) 
        cout<<vect[i];
}

vector<int> addTwoArrays(vector<int> &v1, vector<int> &v2) {
    vector<int> result;
    int size1 = v1.size() - 1;
    int size2 = v2.size() - 1;
    int carry = 0;

    while(size1 >= 0 && size2 >= 0) {
        int sum = v1[size1] + v2[size2] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.push_back(sum);
        size1--;
        size2--;
    }

    while(size1 >= 0) {
        int sum = v1[size1] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.push_back(sum);
        size1--;
    }

    while(size2 >= 0) {
        int sum = v2[size2] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.push_back(sum);
        size2--;
    }

    while(carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10; 
        result.push_back(sum);
    }

    reverseVector(result);

    return result;
}

int main() {
    vector<int> v1;
    vector<int> v2;

    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(1);
    v2.push_back(9);
    v2.push_back(8);
    v2.push_back(9);

    vector<int> result = addTwoArrays(v1, v2);
    printVector(result);

    return 0;
}
