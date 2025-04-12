//Time complexity O(n)
#include <iostream>
using namespace std;
int linearSearch(int n, int arr[],int key) {
    for(int i = 0; i < n; i++){
        if(arr[i]==key) {
            cout<<"Key found at position: ";
            return i+1;
        }
    }
    return -1;
}
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: \n";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    cout<<linearSearch(n,arr,key);
    return 0;
}