#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int hour = stoi(str.substr(0, 2));
    string meridian = str.substr(8, 1);

    if (meridian == "A" && hour != 12)
    {
        cout << str.substr(0, 8);
    }
    else if (meridian == "P" && hour != 12)
    {
        hour += 12;
        cout << hour << str.substr(2, 6);
    }
    else if (meridian == "P" && hour == 12)
    {
        cout << str.substr(0, 8);
    }
    else
    {
        cout << "00"<< str.substr(2, 6);
    }
    return 0;
}
