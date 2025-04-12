#include <iostream>
using namespace std;
#include <climits>
int main() {
    int minNo, maxNo,n;
    cout<<"Enter array size: ";
    cin>>n;
    minNo = INT_MAX;
    maxNo = INT_MIN;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        if(arr[i]>maxNo) {
            maxNo = arr[i];
        }
    }
    for(int i=0; i<n; i++) {
        if(arr[i]<minNo) {
            minNo = arr[i];
        }
    }
    cout<<"Minimum number is: "<<minNo<<"\n";
    cout<<"Maximum number is: "<<maxNo;
    return 0;
}