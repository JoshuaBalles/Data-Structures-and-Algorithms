#include <cstring>
#include <deque>
#include <iostream>

using namespace std;

void prtWords(int number[], int position, char output[], int n);

// initialize the keypad with letters
static const char keypad[10][5] = {"   ",    "   ",    "abc",  "def", "ghi",
                                   "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main() {
    int input, size = 0;
    
    //use deque to input integers of dynamic size
    deque<int> theDeque;

    cout << "Input single integer(s), "
         << "input a character to run the program:" << endl;
    
    //accept input only if it is an integer
    while (cin >> input) {
        theDeque.push_back(input);
        size++;
    }
    
    if (size != 0){
        //transfer elements of deque into an array
        int theArray[size];
        int n = sizeof(theArray) / sizeof(theArray[0]);
        for (int index = 0; index < size; index++) {
            theArray[index] = theDeque.front();
            theDeque.pop_front();
        }

        cout << endl
             << "In alphabetical order, all the possible "
             << "words which can be formed are: " << endl;

        char result[n + 1];
        result[n] = '\0';

        //runs the function to print all possible words
        prtWords(theArray, 0, result, n);
    } else cout << "No integers inputted.";
    
    return 0;
}

void prtWords(int number[], int position, char output[], int n) {
    int i;

    if (position == n) {
        cout << output << " ";
        return;
    }
    for (i = 0; i < strlen(keypad[number[position]]); i++) {
        output[position] = keypad[number[position]][i];
        prtWords(number, position + 1, output, n);
        if (number[position] == 0 || number[position] == 1) {
            return;
        }
    }
}