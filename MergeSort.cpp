#include <iostream>

using namespace std;

void merge(int *arrayToSort, int start, int mid, int end) {
    
    int temp[end-start+1];
    int i = start;
    int j = mid + 1;
    int k = 0;
    
    while(i <= mid && j <= end) {
        if(arrayToSort[i] < arrayToSort[j]) {
            temp[k] = arrayToSort[i];
            i++;
            k++;
        } else {
            temp[k] = arrayToSort[j];
            j++;
            k++;
        }
    }
    
    while(i <= mid) {
        temp[k] = arrayToSort[i];
        i++;
        k++;
    }
    
    while(j <= end) {
        temp[k] = arrayToSort[j];
        j++;
        k++;
    }
    
    for(int i = start;i <= end;i++) {
        arrayToSort[i] = temp[i-start];
    }
    
}

void mergeSort(int *arrayToSort, int start, int end) {
    
    if(start < end) {
        int mid = (start + end) / 2;
        mergeSort(arrayToSort, start, mid);
        mergeSort(arrayToSort, mid + 1, end);
        merge(arrayToSort, start, mid, end);
    }
    
}

void printArray(int arrayToPrint[]) {

    for(int i = 0;i < 10;i++) {
        cout<<arrayToPrint[i]<<" ";
    }
    
}

int main()
{
    int a[10];
   
    for(int i = 0;i < 10;i++) {
        cin>>a[i];
    }
    
    cout<<"Array Before Sorting : ";
  
    printArray(a);
  
    cout<<"\n\n";
    
    mergeSort(a, 0, 9);
  
    cout<<"Array After Sorting : ";
  
    printArray(a);
   
    return 0;
}
