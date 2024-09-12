// Counting Sort

#include <iostream>
#include <climits>
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

void countSort(int *arr, int n){
    int freq[100000]; //We need indices equal to range
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i=0 ; i<n ; i++){
       minVal = min(minVal, arr[i]);
       maxVal = max(maxVal, arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        freq[arr[i]]++;
    }
    for(int i=minVal, j=0 ; i<maxVal ; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArr(arr, n);
}

int main() {
   int arr[] = {1,4,1,9,2,4,9};
   int n = sizeof(arr)/sizeof(int);
   countSort(arr, n);        
  return 0;
}