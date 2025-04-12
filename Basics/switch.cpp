#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a character: ";
    cin>>n;
    switch (n)
    {
    case 'a':
        cout<<"Apple";
        break;
    case 'b':
        cout<<"Black";
        break;
    case 'c':
        cout<<"Cat";
        break;         
    
    default:
    cout<<"I'm still learning!";
        break;
    }
    return 0;
}