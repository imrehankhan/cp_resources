//Binary search Time complexity O(log^nbase2)
#include <iostream>
using namespace std;
int binarySearch(int n, int array[],int key) {
    int s=0;
    int e=n;
    while(s<=e) {
        int mid = (s+e)/2;
        if(array[mid]==key) {
            return mid;
        }
        else if(array[mid]>key) {
            e=mid-1;
        }
        else {
            s=mid+1;
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
    cout<<binarySearch(n,arr,key);
    return 0;
}