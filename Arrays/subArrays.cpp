//Print subarrays of an array
// Number of subarrays = n * ((n+1) / 2)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Subarrays are: "<<endl;
    int curr = 0;
    for(int i=0; i<n; i++) {
        curr = 0;
        for(int j=i; j<n; j++) {
            curr = curr + arr[j];
            cout<<arr[j]<<endl;
        }
    }
    return 0;
}