#include <iostream>

using namespace std;

struct Group {
    string Name;
    int StudentNumber;
    string Program;
    string CityAdress;
    string MobileNumber;
};

int main() {
    int find, count = 0;
    bool found = false;

    Group Member[4];

    Member[0].Name = "James Joshua C. Balles";
    Member[0].StudentNumber = 2020004;
    Member[0].Program = "BSCpE";
    Member[0].CityAdress = "Quezon City";
    Member[0].MobileNumber = "09277614181";

    Member[1].Name = "Justine Hizola";
    Member[1].StudentNumber = 1620262;
    Member[1].Program = "BSCpE";
    Member[1].CityAdress = "Muntinlupa City";
    Member[1].MobileNumber = "09266563088";

    Member[2].Name = "Ericka Mariel R. Bauit";
    Member[2].StudentNumber = 1920099;
    Member[2].Program = "BSCpE";
    Member[2].CityAdress = "Sampaloc, Manila";
    Member[2].MobileNumber = "09062282241";
    
    Member[3].Name = "Kevin Kelly Antonio";
    Member[3].StudentNumber = 1814010;
    Member[3].Program = "BSCpE";
    Member[3].CityAdress = "Quezon City";
    Member[3].MobileNumber = "09157570678";

    cout << "Enter a Student Number: ";
    cin >> find;

    for (int x = 0; x < 4; x++) {
        if (find == Member[x].StudentNumber) {
            cout << Member[x].Name << endl
                 << Member[x].Program << endl
                 << Member[x].CityAdress << endl
                 << Member[x].MobileNumber;
            found = true;
        }
    }
    if (found == false) {
        cout << "Student is not found in the directory." << endl;
    }

    return 0;
}

/*
Activity 2 - Programming Exercise C.
Create an array of structure of size 3 for that stores
your group members' details. The structure must include
details such as City Address, Number, Student Number,
Program (addresses must be coded in the program and not entered by the user).
The program must also allow the user to enter a student number and display the
details of the student with that student number.
*/