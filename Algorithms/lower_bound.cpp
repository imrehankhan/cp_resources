#include <bits/stdc++.h>
using namespace std;

//Lower bound returns target value if the value is present in that array or else it returns an element which is just greater than target element which is present in the array
// Upper bound returns only element which is just greater than the target element

//Manual lower bound (Binary search on answer technique)
int lowerBound(vector<int> v, int n, int x) {
	int low=0,high=n-1,ans=n;
	while(low <= high) {
		int mid = low + (high-low)/2;

		if(v[mid] >= x) {
			ans = mid;
			high = mid-1;
		}
		else low = mid+1;
	}
	return ans;
}
//Lower bound using builtin function
int lb = *lower_bound(v.begin(),v.end(),x);
return lb; // returns element

//Using lower_bound function (lower bound finds the next greater element if the given target is not present in the array, else it will return the same number as the target)
int lb = lower_bound(v.begin(),v.end(),x) - v.begin();
return lb; // returns index

// If you want one element less than the given target if target is not present in array, and want to return same element if the target is present in the array
auto it = lower_bound(v.begin(),v.end(),x);
    if(*it == x) cout<<x<<endl;
    else cout<<*(--it)<<endl;

// to implement upper bound only replace "lower" with "upper"
