#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int age;
    bool gender;

    void printinfo() {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};
 
int main() {
    student arr[3];
    for(int i=0; i<3; i++) {
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }
    for(int i=0; i<3; i++) {
        arr[i].printinfo();
    }
    return 0;
}