//Basic operations of Vectors
//A vector is a dynamic array that can resize itself automatically when elements are inserted or removed.
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool ispositive(int x) {
    return x>0;
}
 
int main() {

    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    //Pushed 7,6,5,4 in vector "v"

    //Printing the vector, METHOD 1
    cout<<"Method 1: \n";
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<endl;
    }// OUTPUT: 7 6 5 4

    //Printing the vector, METHOD 2
    cout<<"Method 2: \n";
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++) {
        cout<<*it<<endl;
    }// OUTPUT: 7 6 5 4

    //Printing the vector, METHOD 3
    cout<<"Method 3: \n";
    for(auto element:v) {
        cout<<element<<endl;
    }// OUTPUT: 7 6 5 4

    v.pop_back(); // OUTPUT: 7 6 5
    cout<<"Popped: \n";
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<endl;
    }

    vector<int> v2 (3,50);
    // OUTPUT: 50 50 50

    swap(v,v2);
    cout<<"Swapping: \n"; //Swaps values of vector v with vector v2
    for(auto element:v) {
        cout<<element<<endl;
    }
    for(auto element:v2) {
        cout<<element<<endl;
    }//v: 50 50 50
     //v2: 7 6 5

    sort(v2.begin(),v2.end());
    cout<<"Sorting: \n"; //Sorting a vector, we can also add custom operators to the sorting functions.
    for(auto element:v2) {
        cout<<element<<endl;
    }

    cout<<"Sum of vector: \n";
    int sum = accumulate(v.begin(),v.end(),0); //To get the sum of the vector
    cout<<sum<<endl;

    cout<<"Product of vector: \n";
    int product = accumulate(v.begin(),v.end(),1,multiplies<int>());//To get product of vector
    cout<<product<<endl;

    cout<<"Max element of vector: \n";
    int mx = *max_element(v2.begin(),v2.end());//To get max element of vector
    cout<<mx<<endl;

    cout<<"Min element of vector: \n";
    int mn = *min_element(v2.begin(),v2.end());//To get min element of vector
    cout<<mn<<endl;

    cout<<"Prefix sum vector: \n";
    partial_sum(v2.begin(),v2.end(),v2.begin()); //Example: v = {1,2,3}
                                              //Prefix_sum v = {1,3,6}
    for(int i=0; i<v2.size(); i++) {
        cout<<v2[i]<<endl;
    }

    cout<<"counting frequency of particular element 5: \n";
    int ct = count(v2.begin(),v2.end(),5);
    cout<<ct<<endl;

    int element = *find(v.begin(),v.end(),5);
    if(element==5) cout<<"el found"<<endl;
    else cout<<"not found"<<endl;

    reverse(v.begin(),v.end());

    cout<<all_of(v.begin(),v.end(),ispositive)<<endl;//all_of -> agar sare elements function se match kar jayenge toh true(1) return karega
                        //or
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;//int this line "ispositive" function is replaced by a lambda function which checks element is positive or not

    cout<<all_of(v.begin(),v.end(),ispositive)<<endl;//any_of -> agar koi ek bhi element function se match kar jayega toh true(1) return karega  

    cout<<none_of(v.begin(),v.end(),ispositive)<<endl;//any_of -> agar koi bhi ek element function se match nahi karega toh hi ye true(1) return karega        

    int *lowerB = lower_bound(v.begin(),v.end(),5);//lower_bound -> Jo element pass kiya hai, agar vo element present hai vector me to ussi ko return karega, varna uske thik next bade(big) vale element ko return karega
    if(lowerB==v.end()) {
        cout<<"Not found"<<endl;
        return 0;
    }
    cout<<*lowerB<<endl;

    int *upperB = upper_bound(v.begin(),v.end(),5);//upper_bound -> Jo element pass kiya hai, agar vo element present hai vector me to uske thik next bade vale element ko return karega
    if(upperB==v.end()) {
        cout<<"Not found"<<endl;
        return 0;
    }
    cout<<*upperB<<endl;

    return 0;
}