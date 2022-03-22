#include<iostream>

using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i <= n;i++) 
        cout<<arr[i]<<" ";
}

void merge(int *arr, int start, int end, int mid) {

    int leftArrayLength = mid - start + 1;
    int rightArrayLength = end - mid;
    int leftArray[leftArrayLength];
    int rightArray[rightArrayLength];

    for(int i = 0;i < leftArrayLength;i++)
        leftArray[i] = arr[start + i];

    for(int i = 0; i < rightArrayLength ;i++) 
        rightArray[i] = arr[mid + i + 1];
    
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = start;

    while(temp1 < leftArrayLength && temp2 < rightArrayLength) {
        if(leftArray[temp1] < rightArray[temp2]) {
            arr[temp3] = leftArray[temp1];
            temp1++;
        } else {
            arr[temp3] = rightArray[temp2];
            temp2++;
        }
        temp3++;
    }

    while(temp1 < leftArrayLength) {
        arr[temp3] = leftArray[temp1];
        temp1++;
        temp3++;
    }

    while(temp2 < rightArrayLength) {
        arr[temp3] = rightArray[temp2];
        temp2++;
        temp3++;
    }

}

void mergeSort(int *arr, int start, int end) {
    if(start >= end)
        return;

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end, mid); 
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr, 0, 6);
    printArray(arr, 6);

    return 0;
}
