#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Course {
    string name;
    double grade;
    int creditHours;
};

int main() {
    int numberOfCourses;
    vector<Course> courses;

    cout << "===== CGPA Calculator =====" << endl;

    cout << "Enter number of courses: ";
    cin >> numberOfCourses;

    double totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < numberOfCourses; i++) {
        Course c;

        cout << "\nEnter course " << i + 1 << " name: ";
        cin >> c.name;

        cout << "Enter grade for " << c.name << " out of 10: ";
        cin >> c.grade;

        cout << "Enter credit hours for " << c.name << ": ";
        cin >> c.creditHours;

        courses.push_back(c);

        totalGradePoints += c.grade * c.creditHours;
        totalCredits += c.creditHours;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n===== Course Details =====" << endl;

    for (int i = 0; i < numberOfCourses; i++) {
        cout << "Course Name: " << courses[i].name << endl;
        cout << "Grade: " << courses[i].grade << endl;
        cout << "Credit Hours: " << courses[i].creditHours << endl;
        cout << "Grade Points: " << courses[i].grade * courses[i].creditHours << endl;
        cout << "------------------------" << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
