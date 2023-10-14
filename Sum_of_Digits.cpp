// 5. Write a function to sum the digits of a given integer.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    int temp = n;
    int sum = 0;
    while (temp != 0) {
        int r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    cout << endl;
    cout << "Sum of the degits: " << sum << endl;
}
