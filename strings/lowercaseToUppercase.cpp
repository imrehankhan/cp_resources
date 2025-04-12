#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str = "rehan";

    //To convert a lowercase string to uppercase
    for(int i=0; i<str.size(); i++) {
        if(str[i]>='a' && str[i]<='z') {
            str[i] = str[i]-32;  //Because 'a'-'A' = 32  (32 is the difference between the ASCII values of 'a' and 'A')
        }
    }
    cout<<str<<endl;

    //To convert an uppercase string to lowercase

    for(int i=0; i<str.size(); i++) {
        if(str[i]>='A' && str[i]<='Z') {
            str[i] = str[i]+32;
        }
    }
    cout<<str<<endl;

    //Method 2 - Using the inbuilt function transform()

    string s = "khan";

    // Convert s to uppercase
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s<<endl;

    // Convert s to lowercase
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<s<<endl;

    return 0;
}