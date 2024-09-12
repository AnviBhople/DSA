//Binary Search
#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int start=0, end=n-1;
    while(start<end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        } else if(key < arr[mid]) {
            
             //1st half
            end = mid-1;
            //start = 0
        } else {
           //2nd half
            start = mid+1;
            //end = n-1;
        }
        start++;
        end--;
    }
    return -1;
}

int main() {
    int arr[] = {7,3,4,1,2,9,6,5,10,8};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element to search : ";
    cin>>key;
    int result = binarySearch(arr, n, key);
    if(result) {
        cout<<"Found at index : "<<result<<endl;
        if(result == 0){
            cout<<"Best Case.\n";
        } else {
            cout<<"Worst Case.\n";
        }
    } else {
        cout<<"Element not found.\n";
    }
    return 0;
}