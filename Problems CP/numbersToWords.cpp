#include <iostream>
#include <string>

using namespace std;

string convertToWords(int num) {
    string words;
    if (num < 0 || num > 99) {
        return "Number out of range";
    }

    string units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num == 0) {
        words = "zero";
    } else if (num < 10) {
        words = units[num];
    } else if (num < 20) {
        words = teens[num - 10];
    } else {
        words = tens[num / 10];
        if (num % 10 != 0) {
            words = words + " " + units[num % 10];
        }
    }

    return words;
}

int main() {
    int num;
    cout << "Enter a number (0-99): ";
    cin >> num;

    string result = convertToWords(num);
    cout << "In words: " << result << endl;

    return 0;
}
