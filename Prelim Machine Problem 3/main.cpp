#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string number;
    
    cout << "Input a number: ";
    cin >> number;
    
    //duplicate the value of number into reversedNumber and reverse it
    string reversedNumber = number;
    reverse(reversedNumber.begin(), reversedNumber.end());
    
    //compare number to reversedNumber, output if palindrome or not
    if (number == reversedNumber){
        cout << "The number is a palindrome.";
    } else cout << "The number is not a palindrome.";

    return 0;
}