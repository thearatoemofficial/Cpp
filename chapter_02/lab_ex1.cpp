#include<iostream>
using namespace std;

int main()
{
    //Variable for name and major
    string name, major;
    int id;

    //Ask user to enter the name
    cout << "Enter Name: ";
    //Use getline to allow spaces
    getline(cin, name);
    //Ask user to enter the id
    cout << "Enter ID: ";
    cin >> id;

    //Clear new line from the input buffer
    cin.ignore();
    
    //Ask user to enter the major
    cout << "Enter Major: ";
    getline(cin, major);

    //Display formatted student profile
    cout << "============================ \n";
    cout << "\t STUDENT PROFILE \n";
    cout << "============================ \n";
    //Display Data
    cout << "Name: \t\t" << name << endl;
    cout << "ID: \t\t" << id << endl;
    cout << "Major: \t\t" << major << endl;
    cout << "============================ \n";




    return 0;
}