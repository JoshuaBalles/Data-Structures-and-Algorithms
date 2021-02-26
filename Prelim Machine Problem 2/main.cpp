#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main() {

    string input;

    // input
    cout << "Enter byte-stream: ";
    getline(cin, input);

    // group the input by two using deque
    deque<string> thisDeque;
    for (int i = 0; i < input.length(); i += 2) {
        thisDeque.push_back(input.substr(i, 2));
    }

    if (thisDeque.size() > 5) {
        cout << "Entered too many bytes." << endl;
        return 0;
    }

    int arrayedInput[thisDeque.size()];
    for (int i = 0; i < thisDeque.size(); i++) {
        arrayedInput[i] = stoi(thisDeque.at(i), 0, 16);
    }

    if (arrayedInput[0] == 4) {
        if (arrayedInput[1] == 1) {
            if (thisDeque.size() == 3) {
                cout << "Must enter 2 or 3 hexadecimal bytes to operate on.";
            } else if (thisDeque.size() == 4) {
                arrayedInput[2] = arrayedInput[2] + arrayedInput[3];
            } else if (thisDeque.size() == 5) {
                arrayedInput[2] =
                    arrayedInput[2] + arrayedInput[3] + arrayedInput[4];
            }
            cout << "Sum is: " << arrayedInput[2] << endl;
        }
        if (arrayedInput[1] == 2) {
            if (thisDeque.size() == 4) {
                arrayedInput[2] = arrayedInput[2] - arrayedInput[3];
            } else if (thisDeque.size() == 5) {
                arrayedInput[2] =
                    arrayedInput[2] - arrayedInput[3] - arrayedInput[4];
            }
            cout << "Difference is: " << arrayedInput[2] << endl;
        }
        if (arrayedInput[1] == 3) {
            if (thisDeque.size() == 4) {
                arrayedInput[2] = arrayedInput[2] * arrayedInput[3];
            } else if (thisDeque.size() == 5) {
                arrayedInput[2] =
                    arrayedInput[2] * arrayedInput[3] * arrayedInput[4];
            }
            cout << "Product is: " << arrayedInput[2] << endl;
        }
        if (arrayedInput[1] == 4 && arrayedInput[2] == 0 &&
            thisDeque.size() == 3) {
            cout << "Username is: " << endl
                 << "Jugemu Jugemu Go-Ko-no-Surikire Kaijari-suigyo no " << endl
                 << "Suigyo-matsu Unrai-matsu Furai-matsu Ku-Neru Tokoro ni "
                 << endl
                 << "Sumu Tokoro Yaburakoji no Burakoji Paipo Paipo Paipo no "
                 << endl
                 << "Shuringan Shuringan no Gurindai Gurindai no Ponpokopii no "
                 << endl
                 << "Ponpokonaa no Chokyumei no Chosuke" << endl;
        }
        if (arrayedInput[1] == 15 && arrayedInput[2] == 0 &&
            thisDeque.size() == 3) {
            cout << "Command List: " << endl
                 << "0x01 = ADDITION OF ALL BYTES (maximum of 3 bytes to be "
                    "added) "
                 << endl
                 << "0x02 = SUBTRACTION (max of 2 bytes) " << endl
                 << "0x03 = MULTILICATION " << endl
                 << "0x04 = Display user's name " << endl
                 << "0x0F = Display Command List " << endl
                 << "0xFF = Exit" << endl;
        }
        if (arrayedInput[1] == 255 && arrayedInput[2] == 0 &&
            thisDeque.size() == 3) {
            cout << "Program terminated." << endl;
            return 0;
        }
    } else

        return 0;
}