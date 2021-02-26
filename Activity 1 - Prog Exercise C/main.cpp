#include <iostream>

using namespace std;

int Vowel(char c);
int Consonant(char c);
int Whitespace(char c);

int main() {

    char Word[100];

    int v = 0, c = 0, w = 0, x;

    cout << "Enter a string: ";

    fgets(Word, 100, stdin);

    for (x = 0; Word[x] != '\0'; x++) {
        if (Vowel(Word[x])) {
            v++;
        } else if (Consonant(Word[x])) {
            c++;
        } else if (Whitespace(Word[x])) {
            w++;
        }
    }

    cout << "There are " + to_string(v) + " Vowels." << endl;
    cout << "There are " + to_string(c) + " Consonants" << endl;
    cout << "There are " + to_string(w) + " Spaces" << endl;

    return 0;
}

int Vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    } else
        return 0;
}

int Consonant(char c) {
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) && !Vowel(c)) {
        return 1;
    } else
        return 0;
}

int Whitespace(char c) {
    if (c == ' ') {
        return 1;

    } else
        return 0;
}

/*
Activity 1 - Programming Exercise C.
Create a program that reads a sentence and
displays the number of consonants, vowels, and spaces.
*/