//In-built Sort

#include <iostream>
#include <algorithm>
using namespace std;

char comma(int iter, int n){
    if(iter == (n-1)){
        return ']';
    } else {
        return ',';
    }
}

void inbuiltSort(int *arr, int n){
    sort(arr, arr+n);
    cout<<"[";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<comma(i, n);
    }
}

int main() {
  int arr[] = {9,5,7,6,8,10,3,4,2,1};
  int n = sizeof(arr)/sizeof(int);
  inbuiltSort(arr, n);          
  return 0;
}