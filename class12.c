#include<iostream>
#include<cstring>

using namespace std;

struct Student {
    char name[50];
    float python, c, maths, physics, total, aggregate;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[n];
    for(int i=0;i<n;i++) {
        cout << "Enter the name of student " << i+1 << ": ";
        cin.ignore();
        cin.getline(students[i].name,50);
        cout << "Enter the marks in python for student " << i+1 << ": ";
        cin >> students[i].python;
        cout << "Enter the marks in c programming for student " << i+1 << ": ";
        cin >> students[i].c;
        cout << "Enter the marks in Mathematics for student " << i+1 << ": ";
        cin >> students[i].maths;
        cout << "Enter the marks in Physics for student " << i+1 << ": ";
        cin >> students[i].physics;
        students[i].total = students[i].python + students[i].c + students[i].maths + students[i].physics;
        students[i].aggregate = students[i].total / 4;
        cout << endl;
    }
    for(int i=0;i<n;i++) {
        cout << "Student " << i+1 << ": " << students[i].name << endl;
        cout << "Total marks: " << students[i].total << endl;
        cout << "Aggregate marks: " << students[i].aggregate << endl;
        if(students[i].aggregate >= 75) {
            cout << "DISTINCTION" << endl;
        }
        else if(students[i].aggregate >= 60 && students[i].aggregate < 75) {
            cout << "FIRST DIVISION" << endl;
        }
        else if(students[i].aggregate >= 50 && students[i].aggregate < 60) {
            cout << "SECOND DIVISION" << endl;
        }
        else if(students[i].aggregate >= 40 && students[i].aggregate < 50) {
            cout << "THIRD DIVISION" << endl;
        }
        else {
            cout << "FAIL" << endl;
        }
        cout << endl;
    }
    return 0;
}
Enter the number of students: 1
Enter the name of student 1: John Doe
Enter the marks in python for student 1: 90
Enter the marks in c programming for student 1: 91
Enter the marks in Mathematics for student 1: 92
Enter the marks in Physics for student 1: 93

Student 1: John Doe
Total marks: 366
Aggregate marks: 91.5
DISTINCTION


