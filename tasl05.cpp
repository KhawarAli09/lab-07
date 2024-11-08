#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0, zeroCount = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter 10 integers:" ;
        cin >> numbers[i];
        if (numbers[i] == 0) {
            zeroCount++;
        }
        else if (numbers[i] > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of zeros: " << zeroCount << endl;

    return 0;
}