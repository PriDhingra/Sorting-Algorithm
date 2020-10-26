#include <iostream>

using namespace std;

void insertionSort(int arrayToSort[]) {
    for(int i = 1;i < 10;i++) {
        int key = arrayToSort[i];
        int j = i - 1;
        
        while(j >= 0 && arrayToSort[j] > key) {
            arrayToSort[j+1] = arrayToSort[j];
            j--;
        }
        arrayToSort[j+1] = key;
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
    
    insertionSort(a);
  
    cout<<"Array After Sorting : ";
  
    printArray(a);
   
    return 0;
}
