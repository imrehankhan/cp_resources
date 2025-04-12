
#include <iostream>
using namespace std;
 
int main() {
	int n;
	int arr[5] = {1,2,3,4,5};
	int maxi = 0;
	int mini = 10000;
	for(int i = 0; i < 5; i++)
	{	int sum = 0;
		for(int j = 0; j < 5; j++)
		{
			if(j != i){
				sum += arr[j];
			}
		}
		if(sum > maxi) maxi = sum;
		else if(sum < mini) mini = sum;
	}
	cout<<maxi<<" "<<mini<<endl;
	return 0;
}

//Method 2

// #include <iostream>

// using namespace std;

// int main() {
//     int arr[5],brr[5];
//     int maxi = INT_MIN;
//     int mini = INT_MAX;
//     for(int i=0; i<5; i++) {
//         cin>>arr[i];
//     }
//     for(int i=0; i<5; i++) {
//         int sum = 0;
//         for(int j=0; j<5; j++) {
//             if(j!=i) {
//                 sum = sum + arr[j];
//             }
//         }
//         brr[i] = sum;
//     }
//     for(int i=0; i<5; i++) {
//         if(brr[i]>maxi) maxi = brr[i];
//     }
//     for(int i=0; i<5; i++) {
//         if(brr[i]<mini) mini = brr[i];
//     }
//     cout<<mini<<" "<<maxi;
//     return 0;
// }
