// Reverse an array without using an extra space 

#include <iostream>
using namespace std;

char comma(int iter, int n){
     if(iter == (n-1)) {
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

void reverseArray(int *arr, int n){
    int start = 0, end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printArr(arr, n);
}

int main() {
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   int n = sizeof(arr)/sizeof(int);
   reverseArray(arr, n);        
  return 0;
}