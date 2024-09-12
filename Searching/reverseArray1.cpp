// Reverse Array with using an extra space

#include <iostream>
using namespace std;

char comma(int iter, int n){
    if(iter == (0)){
        return ']';
    } else {
        return ',';
    }
}

void printArr(int *arr, int n){
    cout<<"[";
    for(int i=n-1 ; i>=0 ; i--){
        cout<<arr[i]<<comma(i, n);
    }
}

void reverseArray(int *arr, int n){
    int copyArr[n];
    for(int i=n-1 ; i>=0 ; i--){
        copyArr[i] = arr[i];
    }
    printArr(copyArr, n);
}

int main() {
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   int n = sizeof(arr)/sizeof(int);
   reverseArray(arr, n);    
  return 0;
}