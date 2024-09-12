//Linear Search
#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i=0 ; i<=(n-1) ; i++){
        if(arr[i] == key){
            return i;
            break;
        }
    }
   
}

int main() {
    int arr[] = {8,4,1,3,2,7,5,6,10};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the elemnet to search : ";
    cin>>key;
    int result = linearSearch(arr, n, key);
    cout<<"Found at index : "<<result;
    return 0;
}