//Question link: https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbk9TMjFwUFFOWVFfd1hPQkZFYi1tMzJxZjIzQXxBQ3Jtc0tucjdMelgwc0tjNXBIajFVUFVhVEc4bi0xQ3Q5eGYyVkZNc2RYOU1rUE4yS1NfRFhscGJRcVR3eFNIUEFkcjRadWFIOTJOeUtIdXoxWFJoYi1jRXpiZmE0V3VnaldVaVA2V18zRE95YUVMSUhUbTFtdw&q=https%3A%2F%2Fwww.hackerearth.com%2Fpractice%2Fdata-structures%2Ftrees%2Fheapspriority-queues%2Fpractice-problems%2Falgorithm%2Fmonk-and-the-magical-candy-bags%2F%3Ffbclid%3DIwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4&v=hoT_D60UzAU

#include <bits/stdc++.h>
using namespace std;

int main() 
{
   set<long long> s;
   int t;
   cin>>t;
   while(t--) {
     int n,k; //n=bags, k=time in minutes
     cin>>n>>k;
     long long bags;
     for(int i=0; i<n; i++) {
       cin>>bags;
       s.insert(bags); //inserting bags of candies in set
     }
     int candies_eaten = 0; //Total candies eaten
     for(int i=0; i<k; i++) {
       auto last_it = --s.end(); //Iterating to last element of set
       int last_element = *last_it; //Accessing last element of set
       candies_eaten = candies_eaten + last_element; //Addding total candies eaten
       s.erase(last_it); //agar erase ke andar "last_element" daloge to sare duplicates bhi erase hojaenge set ke andar se, isiliye last_it dalo
       s.insert(last_element/2); //Inserting "/2" of last element of set
     }
     cout<<candies_eaten<<endl; //printing last element of set
   }
    return 0;
}