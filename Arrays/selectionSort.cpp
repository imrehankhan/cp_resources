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
    for(int i=1; i<=n-1; i++) {
        for(int j=i+1; j<=n; j++) {
            if(arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"The sorted array is: ";
    for(int i=1; i<=n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}