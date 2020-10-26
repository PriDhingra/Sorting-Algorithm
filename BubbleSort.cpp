#include <iostream>

using namespace std; 

void bubbleSort(int *arrayToSort) {
    
    for(int i = 0;i < 10;i++) {
        for(int j = 0;j < 10 - i- 1;j++) {
            if(arrayToSort[j] > arrayToSort[j + 1]) {
                int temp = arrayToSort[j];
                arrayToSort[j] = arrayToSort[j + 1];
                arrayToSort[j + 1] = temp;
            }
        }
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
    
    bubbleSort(a);
  
    cout<<"Array After Sorting : ";
  
    printArray(a);
   
    return 0;
}
