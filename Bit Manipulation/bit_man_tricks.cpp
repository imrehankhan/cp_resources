//Swap 2 numbers without using 3rd variable
int a = 5, b = 7;
a = a^b;
b = a^b;
a = a^b;

int n = 13, i=2; //'n' is the number and 'i' is the bit number (i starts from 0)

//checking if ith bit is set or not
if((n & (1<<i)) != 0) cout<<"Yes";
else cout<<"No";

//setting ith bit
cout<<(n | (1<<i));

//unsetting ith bit
cout<<(n & ~(1<<i));

//toggling ith bit
cout<<(n ^ (1<<i));

//remove last set bit
cout<<(n & (n-1));

//check if number is power of 2
if((n&(n-1))==0) cout<<"Yes";
else cout<<"No";

//check if a number is even or odd
if((n&1)==0) cout<<"Even";
else cout<<"Odd"; //For Odd you can also check like this: if(n&1) cout<<"Odd";

//multiply by 2
cout<<(n<<1);

//divide by 2
cout<<(n>>1);

//multiply by 2^n
cout<<(n<<2);

//count number of set bits
cout<<__builtin_popcount(n);
//for long long numbers
cout<<__builtin_popcountll(n)<<endl;
//Manual  Method
int count=0;
while(n>0) {
    n = n & n-1;
    count++;
}
cout<<count<<endl;

//find the rightmost set bit
cout<<(n & -n);

//find the only non-repeating number in an array where every number repeats twice
int arr[] = {1,2,3,4,1,2,3};
int res = 0;
    for(int i=0;i<7;i++) {
    res = res^arr[i];
}
cout<<res<<endl;



