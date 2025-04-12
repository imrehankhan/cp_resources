#include <iostream>
#include <string>  //Include this header file to use strings
using namespace std;

int main() {
    string str;
    cout<<"Enter a sentence with spaces: ";
    getline(cin,str);
    cout<<str<<endl;

    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);  //OR you can also use s1 = s1 + s2;
    cout<<s1<<endl;

    //To acces a particular letter in a string
    cout<<s1[1]<<endl;

    //To compare two strings you can use s1.compare(s2)

    //To check if a string is empty or not use s1.empty()

    //To erase a part of a string use s1.erase(startingIndex,numberOfCharactersToErase)

    //To find a substring in a string use s1.find("substring")

    //To insert a string in another string use s1.insert(startingIndex,"stringToInsert")

    //To get the length of a string use s1.length() or s1.size()

    //To clear the string use s1.clear()

    //To replace a part of a string use s1.replace(startingIndex,numberOfCharactersToReplace,"stringToReplace")

    //To get a substring use s1.substr(startingIndex,numberOfCharacters)

    //To swap two strings use s1.swap(s2)

    //To convert a string to an integer use stoi(s1)

    //To convert an integer to a string use to_string(123)

    //To convert a string to a character array use strcpy(charArray,s1.c_str())

    //To sort a string use sort(s1.begin(),s1.end())

    //convert string to integer using stoi(starting_point, length_upto_which_you_want_to_take_substring)

    return 0;
}