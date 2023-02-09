#include<iostream>
#include<algorithm>
#include<iterator>
#include<cstring>
#include"bitmap.h"
using namespace std;

Student::Student() : rollno(0)
{
    name[0] = '\0';
    for (int i = 0; i < 5; ++i) marks[i] = 0;
}

Student::Student(int r, const char *n, int m1, int m2, int m3, int m4, int m5) : rollno(r)
{
    strcpy(name, n);
    marks[0] = m1;
    marks[1] = m2;
    marks[2] = m3;
    marks[3] = m4;
    marks[4] = m5;
}

void Student::Accept()
{
    cout << "Roll Number: ";
    cin >> rollno;

    cout << "Name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects.\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Subject-" << (i + 1) << ": ";
        cin >> marks[i];
    }
}


void Student::Display()
{
    cout << "Roll Number: " << rollno << "\n";
    cout << "Name: " << name << "\n";
    cout << "Marks obtained in: " << "\n";
    
    for (int i = 0; i < 5; ++i) {
        cout << "Subject-" << (i + 1) << ": ";
        cout << marks[i] << "\n";
    }
}

float Student::calcAverage()
{
    float avg = 0, sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += marks[i];
    }
    avg = sum / 5;
    return avg;
}

char Student::calcGrade()
{
    char grade;
    float avg = calcAverage();

    if (avg >= 60) grade = 'A';
    else if (avg >= 50 && avg < 60) grade = 'B';
    else if (avg >= 40 && avg < 50) grade = 'C';
    else grade = 'D';

    return grade;
}

int Student::highestMarks()
{
    int highest = *max_element(begin(marks), end(marks));
    return highest;
}

int Student::lowestMarks()
{
    int lowest = *min_element(begin(marks), end(marks));
    return lowest;
}
