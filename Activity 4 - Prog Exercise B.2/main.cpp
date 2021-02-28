#include <iostream>

using namespace std;

int theQueue[12345], n = 12345, front = -1, back = -1;

void queuePush(int input);
void queuePop();
void queuePeep();
void printQueue();

int main() {
    int input, number;

    cout << "1: Push to queue." << endl
         << "2: Pop queue." << endl
         << "3: Display queue elements." << endl
         << "4: Peek queue." << endl
         << "Input an option. Input a character to end program: ";

    while (cin >> input) {
        if (input == 1) {
            cout << "Input a number to push to stack: ";
            cin >> number;
            queuePush(number);
            cout << "Input an option. Input a character to end program: ";
        } else if (input == 2) {
            queuePop();
            cout << "Input an option. Input a character to end program: ";
        } else if (input == 3) {
            printQueue();
            cout << "Input an option. Input a character to end program: ";
        } else
            cout << "Invalid input.";
    }
    cout << "Program ended.";
    return 0;
}

void queuePush(int input) {
    if (back == n - 1) {
        cout << "The queue overflowed." << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        back++;
        theQueue[back] = input;
    }
}

void queuePop() {
    if (front == -1 || front > back) {
        cout << "The queue underflowed.";
    } else {
        cout << "Element deleted from queue is : " << theQueue[front] << endl;
        front++;
    }
}

void queuePeep() {
    if (front <= -1) {
        cout << "The stack underflowed." << endl;
    } else cout << "The top element is: " << theQueue[front] << endl;
}

void printQueue() {
    if (front == -1) {
        cout << "The queue is empty." << endl;
    } else {
        cout << "The queue's element(s) is/are : ";
        for (int i = front; i <= back; i++) {
            cout << theQueue[i] << " ";
        }
        cout << endl;
    }
}

/*
 * Activity 4 - Programming Exercise B.2
 * Create two programs that simulates a stack and queue.
 * Each program must have the user defined functions
 * push, pop, peek, and printContent.
 * DO NOT IMPORT STACK OR QUEUE HEADERS (#include <stack/queue>)
 */