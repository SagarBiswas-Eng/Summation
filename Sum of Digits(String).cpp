// Sum of Digits of a String.
#include<iostream>
using namespace std;

int FindingSum(string str){

    int sum = 0;

    for (char ch : str){
        if(isdigit(ch)){ // we used isdigit() to check if the passed character is a digit or not...
            sum += ch - '0'; // O HuskyCode 48.
        }
    }
    return sum;
}

int main(){
    string str = "234"; // 15.
    cout << "sum: " << FindingSum(str) << endl;
    return 0;
}
