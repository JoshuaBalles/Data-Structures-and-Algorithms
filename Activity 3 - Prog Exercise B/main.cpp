#include <deque>
#include <iostream>
#include <queue>

using namespace std;

int searchDeque(int i, deque<int> dq);
void printQueue(queue<int> q);
float printAverage(int i, queue<int> q);

int main() {

    queue<int> theQueue;
    deque<int> tempDeque;

    int input = 0, count = 0, search;

    while (input != 999) {
        cout << "Enter a number: ";
        cin >> input;
        theQueue.push(input);
        count++;

        if (input == 999) {
            // temporarily transfer queue to deque
            while (!theQueue.empty()) {
                tempDeque.push_back(theQueue.front());
                theQueue.pop();
            }
            // pop last element
            tempDeque.pop_back();

            count--;
        }
    }

    if (count == 0) {
        cout << "The queue is empty." << endl;
    }

    else {
        cout << "Enter a number to be searched: ";
        cin >> search;

        // 1st output
        cout << "The position of " << search << " is "
             << searchDeque(search, tempDeque) << endl;

        // remove searched element
        for (int x = 0; x < tempDeque.size(); x++) {
            if (search == tempDeque.at(x)) {
                tempDeque.erase(tempDeque.begin() + (x));
            }
        }
        count--;

        // return elements to queue
        while (!tempDeque.empty()) {
            theQueue.push(tempDeque.front());
            tempDeque.pop_front();
        }
        // 2nd output
        cout << "New Queue Content: ";
        printQueue(theQueue);

        // 3rd output
        cout << "AVERAGE: " << printAverage(count, theQueue) << endl;
    }
    return 0;
}

int searchDeque(int i, deque<int> dq) {
    int position = 1;
    while (!dq.empty()) {
        if (i == dq.front()) {
            break;
        } else {
            dq.pop_front();
            position++;
        }
    }
    return position;
}

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

float printAverage(int i, queue<int> q) {
    float average = 0;
    while (!q.empty()) {
        average += q.front();
        q.pop();
    }
    average = average / i;

    return average;
}

/* 
 * Programming Exercise B.
 * Create a program that allows integers to be added to the queue and prompt
 * the user to stop inserting integers and search for a specific integer once
 * 999 is entered. The program must display the position of the searched number,
 * queue content (without 999 and the searched number), and average of the
 * contents of the queue (still without 999 and the searched number) 
 * Enter a number: 52
 * Enter a number: 5
 * Enter a number: 20
 * Enter a number: 3
 * Enter a number: 999
 * Enter a number to be searched: 5
 * The position of 5 is 2.
 * New Queue Content: 52 20 3
 * AVERAGE: 25
 */