/*

Carter Herman
Date : 12/4/23
Assignment : Structures and Fileio
Description : This program reads in a file of student records and outputs a file of student records sorted by average grade.

*/





#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string fName;
    string lName;
    char grade;
    double average;
    int test1;
    int test2;
    int test3;
    int test4;
};

char calcGrade(double avg) {
    if (avg >= 90) {
        return 'A';
    } else if (avg >= 80) {
        return 'B';
    } else if (avg >= 70) {
        return 'C';
    } else if (avg >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

vector<Student> readStudentRecords(const string& fileName) {
    ifstream inFile(fileName);
    vector<Student> students;

    if(inFile.is_open()) {
        while (!inFile.eof()) {
            Student student;
            inFile >> student.fName >> student.lName >> student.test1 >> student.test2 >> student.test3 >> student.test4;
            student.average = (student.test1 + student.test2 + student.test3 + student.test4) / 4.0;
            student.grade = calcGrade(student.average);
            students.push_back(student);
        }
        inFile.close();
    }
    else {
        cerr << "Not able to open file " << fileName << "\n";
    }
    return students;
}
void writeStudentRecords(const string& fileName, const vector<Student>& students) {
    ofstream outFile(fileName);
    
    if (outFile.is_open()) {
        outFile << "First Name\tLast Name\tTest 1\tTest 2\tTest 3\tTest 4\tAverage\tGrade\n";
        for (size_t i = 0; i < students.size(); ++i) {
            outFile << students[i].fName << '\t' << students[i].lName << '\t'
                    << students[i].test1 << '\t' << students[i].test2 << '\t' << students[i].test3 << '\t' << students[i].test4 << '\t'
                    << students[i].average << '\t' << students[i].grade << '\n';
        }
        outFile.close();
    } else {
        cerr << "Not able to open file " << fileName << "\n";
    }
}

void sortAvgStudents(vector<Student>& students) {
    for (size_t i = 0; i < students.size(); ++i) {
        for (size_t j = i + 1; j < students.size(); ++j) {
            if (students[i].average < students[j].average) {
                swap(students[i], students[j]);
            }
        }
    }
}
int main() {
    string iFileName;
    cout << "Enter input file name: ";
    cin >> iFileName;

    string oFileName;
    cout << "Enter output file name: ";
    cin >> oFileName;

    vector<Student> students = readStudentRecords(iFileName);

    sortAvgStudents(students);

    writeStudentRecords(oFileName, students);

    return  0;
}
