// 5 // Give a grade on the behalf of marks
#include<iostream>
using namespace std;
int main()
{
    int marks, grade;
    cout << "Enter your marks :  ";
    cin >> marks;
    if(marks>80) {
        cout << "Congratulation you got A grade";
    }
    else if((marks>60) && (marks<=80)) {
        cout << "Congratulation you got B grade";
    }
    else if((marks>50) && (marks<=60)) {
        cout << "Keep study, You got C grade";
    }
    else if((marks>45) && (marks<=50)) {
        cout << "Work hard, You got D grade";
    }
    else if((marks>25) && (marks<=45)) {
        cout << "Very poor, You got E grade";
    }
    else {
        cout << "Take you parents in school, you got F grade";
    }
    return 0;
}