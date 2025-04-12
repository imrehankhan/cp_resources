#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> numbers(n);
    for(int i=0; i<n; i++) {
        cin>>numbers[i];
    }

    const int maxNumber = 1000; // Assuming numbers are less than 1000
    int frequency[maxNumber] = {0};

    for (int i=0; i<numbers.size(); i++) {
        frequency[numbers[i]]++;
    }

    int mostFrequentNumber = INT_MIN;
    int maxFrequency = 0;

    for (int i = 0; i < maxNumber; ++i) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostFrequentNumber = i;
        }
    }

    if (mostFrequentNumber != -1) {
        std::cout << "The most frequent number is: " << mostFrequentNumber << " with frequency " << maxFrequency << std::endl;
    } else {
        std::cout << "Vector is empty." << std::endl;
    }

    return 0;
}
