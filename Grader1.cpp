// Grader1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Student {
public:
    Student(string, int, float, float, float);
    string name;
    int id;
    float assessment1;
    float assessment2;
    float assessment3;
};

Student::Student(string n, int i, float a1, float a2, float a3) {
    name = n;
    id= i;
    assessment1 = a1;
    assessment2 = a2;
    assessment3 = a3;
}

int main()
{   
    int sNum = 1;
    int classSizeIn = 0;
    cout << "Please enter the number of students in the class: ";
    cin >> classSizeIn;

    vector<Student>students = {};

    while (sNum <= classSizeIn)
    {

        string name = "";
        int id = 0;
        float assessment1 = 0.0f;
        float assessment2 = 0.0f;
        float assessment3 = 0.0f;

        cout << "====[STUDENT " << sNum << "]====\n\n";

        cout << "Student Name: ";
        cin >> name;

        cout << "\nStudent ID: ";
        cin >> id;

        assessment1 :
        cout << "\nStudent Assessment Grade 1: ";
        cin >> assessment1;
        if (assessment1 > 100) {
            cout << "\nPlease Input A Percentage That Is Equal Or Below 100";
            goto assessment1;
        }

        assessment2 :
        cout << "\nStudent Assessment Grade 2: ";
        cin >> assessment2;
        if (assessment2 > 100) {
            cout << "\nPlease Input A Percentage That Is Equal Or Below 100";
            goto assessment2;
        }

        assessment3 :
        cout << "\nStudent Assessment Grade 3: \n";
        cin >> assessment3;
        if (assessment3 > 100) {
            cout << "\nPlease Input A Percentage That Is Equal Or Below 100";
            goto assessment3;
        }

        Student student = Student(name, id, assessment1, assessment2, assessment3);
        students.push_back(student);
        sNum = sNum + 1;
    }
    if (sNum >= classSizeIn) {

        for (int i = 0; i < students.size(); i++) {
            cout << students[i].name << " (ID: " << students[i].id << ") 1st Assessment Was Graded: " << students[i].assessment1 << "%\n";
            cout << students[i].name << " (ID: " << students[i].id << ") 2nd Assessment Was Graded: " << students[i].assessment2 << "%\n";
            cout << students[i].name << " (ID: " << students[i].id << ") 3rd Assessment Was Graded: " << students[i].assessment3 << "%\n\n";
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
