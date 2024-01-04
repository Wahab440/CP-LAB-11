#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int en_no;
    string subject1;
    int crdhours1;
    float qmarks1;
    float amarks1;
    float mmarks1;
    float fmarks1;
    float gpa1;
    char grades1;

    string subject2;
    int crdhours2;
    float qmarks2;
    float amarks2;
    float mmarks2;
    float fmarks2;
    float gpa2;
    char grades2;

    string subject3;
    int crdhours3;
    float qmarks3;
    float amarks3;
    float mmarks3;
    float fmarks3;
    float gpa3;
    char grades3;

    string subject4;
    int crdhours4;
    float qmarks4;
    float amarks4;
    float mmarks4;
    float fmarks4;
    float gpa4;
    char grades4;

    string subject5;
    int crdhours5;
    float qmarks5;
    float amarks5;
    float mmarks5;
    float fmarks5;
    float gpa5;
    char grades5;
};


char calculateGrade(float marks) {
    if (marks >= 90) {
        return 'A';
    }
    else if (marks >= 80) {
        return 'B';
    }
    else if (marks >= 70) {
        return 'C';
    }
    else if (marks >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}

int main() {
    student st_record;
    cout << "Enter your name: ";
    getline(cin, st_record.name);
    cout << "\nEnter your enrollment number: ";
    cin >> st_record.en_no;
    cin.ignore();



    cout << "\nEnter your Subject 1: ";
    getline(cin, st_record.subject1);
    cout << "\nEnter your credit-hours for Subject 1: ";
    cin >> st_record.crdhours1;
    cout << "\nEnter your Quizz_Marks for Subject 1: ";
    cin >> st_record.qmarks1;
    cout << "\nEnter your Assignment_Marks for Subject 1: ";
    cin >> st_record.amarks1;
    cout << "\nEnter your Mids_Marks for Subject 1: ";
    cin >> st_record.mmarks1;
    cout << "\nEnter your Final_Marks for Subject 1: ";
    cin >> st_record.fmarks1;
    float totalMarks1 = st_record.qmarks1 + st_record.amarks1 + st_record.mmarks1 + st_record.fmarks1;
    st_record.gpa1 = totalMarks1 / 4.0;
    st_record.grades1 = calculateGrade(st_record.gpa1);




    cout << "\nEnter your Subject 2: ";
    cin.ignore();
    getline(cin, st_record.subject2);
    cout << "\nEnter your credit-hours for Subject 2: ";
    cin >> st_record.crdhours2;
    cout << "\nEnter your Quizz_Marks for Subject 2: ";
    cin >> st_record.qmarks2;
    cout << "\nEnter your Assignment_Marks for Subject 2: ";
    cin >> st_record.amarks2;
    cout << "\nEnter your Mids_Marks for Subject 2: ";
    cin >> st_record.mmarks2;
    cout << "\nEnter your Final_Marks for Subject 2: ";
    cin >> st_record.fmarks2;
    float totalMarks2 = st_record.qmarks2 + st_record.amarks2 + st_record.mmarks2 + st_record.fmarks2;
    st_record.gpa2 = totalMarks2 / 4.0;
    st_record.grades2 = calculateGrade(st_record.gpa2);





    cout << "\nEnter your Subject 3: ";
    cin.ignore();
    getline(cin, st_record.subject3);
    cout << "\nEnter your credit-hours for Subject 3: ";
    cin >> st_record.crdhours3;
    cout << "\nEnter your Quizz_Marks for Subject 3: ";
    cin >> st_record.qmarks3;
    cout << "\nEnter your Assignment_Marks for Subject 3: ";
    cin >> st_record.amarks3;
    cout << "\nEnter your Mids_Marks for Subject 3: ";
    cin >> st_record.mmarks3;
    cout << "\nEnter your Final_Marks for Subject 3: ";
    cin >> st_record.fmarks3;
    float totalMarks3 = st_record.qmarks3 + st_record.amarks3 + st_record.mmarks3 + st_record.fmarks3;
    st_record.gpa3 = totalMarks3 / 4.0;
    st_record.grades3 = calculateGrade(st_record.gpa3);




    cout << "\nEnter your Subject 4: ";
    cin.ignore();
    getline(cin, st_record.subject4);
    cout << "\nEnter your credit-hours for Subject 4: ";
    cin >> st_record.crdhours4;
    cout << "\nEnter your Quizz_Marks for Subject 4: ";
    cin >> st_record.qmarks4;
    cout << "\nEnter your Assignment_Marks for Subject 4: ";
    cin >> st_record.amarks4;
    cout << "\nEnter your Mids_Marks for Subject 4: ";
    cin >> st_record.mmarks4;
    cout << "\nEnter your Final_Marks for Subject 4: ";
    cin >> st_record.fmarks4;
    float totalMarks4 = st_record.qmarks4 + st_record.amarks4 + st_record.mmarks4 + st_record.fmarks4;
    st_record.gpa4 = totalMarks4 / 4.0;
    st_record.grades4 = calculateGrade(st_record.gpa4);




    cout << "\nEnter your Subject 5: ";
    cin.ignore();
    getline(cin, st_record.subject5);
    cout << "\nEnter your credit-hours for Subject 5: ";
    cin >> st_record.crdhours5;
    cout << "\nEnter your Quizz_Marks for Subject 5: ";
    cin >> st_record.qmarks5;
    cout << "\nEnter your Assignment_Marks for Subject 5: ";
    cin >> st_record.amarks5;
    cout << "\nEnter your Mids_Marks for Subject 5: ";
    cin >> st_record.mmarks5;
    cout << "\nEnter your Final_Marks for Subject 5: ";
    cin >> st_record.fmarks5;
    float totalMarks5 = st_record.qmarks5 + st_record.amarks5 + st_record.mmarks5 + st_record.fmarks5;
    st_record.gpa5 = totalMarks5 / 4.0;
    st_record.grades5 = calculateGrade(st_record.gpa5);



    cout << "\n\nSubjects\tCreditHours\t\tTotal Marks\t\tGrades";
    cout << "\n" << st_record.subject1 << "\t" << st_record.crdhours1 << "\t\t" << totalMarks1 << "\t\t" << st_record.grades1;
    cout << "\n" << st_record.subject2 << "\t" << st_record.crdhours2 << "\t\t" << totalMarks2 << "\t\t" << st_record.grades2;
    cout << "\n" << st_record.subject3 << "\t" << st_record.crdhours3 << "\t\t" << totalMarks3 << "\t\t" << st_record.grades3;
    cout << "\n" << st_record.subject4 << "\t" << st_record.crdhours4 << "\t\t" << totalMarks4 << "\t\t" << st_record.grades4;
    cout << "\n" << st_record.subject5 << "\t" << st_record.crdhours5 << "\t\t" << totalMarks5 << "\t\t" << st_record.grades5;
    return 0;
}
