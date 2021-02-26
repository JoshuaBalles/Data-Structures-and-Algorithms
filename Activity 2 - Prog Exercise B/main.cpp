#include <iostream>

using namespace std;

void output_1(string s, char c);
void output_2(string s, char c);
void output_3(string s, char c);

int main() {

    string str;
    char c;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character (case sensitive): ";
    cin >> c;

    cout << "[1] the number of times the character appears: ";
    output_1(str, c);
    cout << endl;

    cout << "[2] indices of the character in the string: ";
    output_2(str, c);
    cout << endl;

    cout << "[3] address of each character in the string: ";
    output_3(str, c);
    cout << endl;

    return 0;
}

void output_1(string s, char c) {
    int count = 0;

    for (int x = 0; x < s.length(); x++) {
        if (s[x] == c) {
            count++;
        }
    }
    if (count == 0) {
        cout << "Character is not found in the string.";
    }
}

void output_2(string s, char c) {
    int count = 0;

    for (int x = 0; x < s.length(); x++) {
        if (c == s[x]) {
            cout << x << " ";
            count++;
        }
    }
    if (count == 0) {
        cout << "Character is not found in the string.";
    }
}

void output_3(string s, char c) {
    string str = s;

    for (int x = 0; x < s.length(); x++) {
        cout << (void *)&str[x] << " ";
    }
}

/*
Activity 2 - Programming Exercise B.
Create a program that accepts a string and a character.
The output of the program shall be:
[1] the number of times the character appears,
[2] indices of the character in the string,
[3] address of each character in the string.
*/