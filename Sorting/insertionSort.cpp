//Insertion Sort

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

void insertionSort(int *arr, int n){
    for(int i=0 ; i<n ; i++){
        int temp = arr[i];
        int prev = i-1;
        while(prev>=0 && temp<arr[prev]){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = temp;
    }
    printArr(arr, n);
}

int main() {
  int arr[] = {9,5,7,6,8,10,3,4,2,1};
  int n = sizeof(arr)/sizeof(int);
  insertionSort(arr, n);              
  return 0;
}