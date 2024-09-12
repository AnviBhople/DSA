// Selection Sort

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

void selectionSort(int *arr, int n){
    for(int i=0 ; i<n ; i++){
        int minIdx = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[minIdx]>arr[j]){
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
    printArr(arr, n);
}

int main() {
  int arr[] = {9,5,7,6,8,10,3,4,2,1};
  int n = sizeof(arr)/sizeof(int);
  selectionSort(arr, n);         
  return 0;
}