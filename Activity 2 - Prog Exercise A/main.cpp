#include <iostream>

using namespace std;

void MyFunction(string s);

int main() {
    string myString = "this array";

    cout << "The string is: this array" << endl;

    cout << "The addresses of the first five elements are: ";
    MyFunction(myString);

    cout << "\nThe adress of the 5th element is: ";
    cout << (void *)&myString[4];

    return 0;
}

void MyFunction(string s) {
    string str = s;

    for (int x = 0; x < 5; x++) {
        cout << (void *)&str[x] << " ";
    }
}

/*
Activity 2 - Programming Exercise A.
Write the main() code that will pass this array to MyFunction().
Also write theMyFunction() that will print the addresses of the first
five elements of the array and return the address of the fifth element.
main() will receive that address into a pointer called q and it will print it.
*/