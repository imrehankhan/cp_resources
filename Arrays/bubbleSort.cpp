#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array: ";
    for(int i=1; i<=n; i++) {
        cin>>arr[i];
    }
    int counter=0;
    while(counter<n-1) {
        for(int i=0; i<n-counter; i++) {
            if(arr[i]>arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }    
    cout<<"The sorted array is: ";
    for(int i=1; i<=n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}