//Program to find max frequent letter in a string and also to show its frequency
#include <iostream>
using namespace std;

int main() {
    string str = "adddaadd";

    int freq[26];

    for(int i=0; i<26; i++)
    freq[i] = 0;

    for(int i=0; i<26; i++)
    freq[str[i] - 'a']++;

    int maxF = 0;
    char ans = 'a';

    for(int i=0; i<26; i++)
    {
        if(freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout<<maxF<<" "<<ans<<endl; 
    return 0;
}