#include <iostream>

using namespace std; 

void selectionSort(int *arrayToSort) {
    
    for(int i = 0;i < 10;i++) {
        int min_index = i;
        for(int j = i + 1; j < 10;j++) {
            if(arrayToSort[j] < arrayToSort[min_index]) {
                min_index = j;
            }
        }
        int temp = arrayToSort[i];
        arrayToSort[i] = arrayToSort[min_index];
        arrayToSort[min_index] = temp;
    }
    
}

void printArray(int *arrayToPrint) {

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
    
    selectionSort(a);
  
    cout<<"Array After Sorting : ";
  
    printArray(a);
   
    return 0;
}
