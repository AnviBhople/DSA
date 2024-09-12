// Bubble Sort

#include <iostream>
using namespace std;

char comma(int iter, int n){
    if(iter == (n-1)){
        return ']';
    } else {
        return ',';
    }
}

void printArr(int *arr, int n){
    cout<<"[";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<comma(i, n);
    }
}

void bubbleSort(int *arr, int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArr(arr, n);
}

int main() {
  int arr[] = {4,7,1,3,9,8,5,6,10,2};
  int n = sizeof(arr)/sizeof(int);
  bubbleSort(arr, n);         
  return 0;
}