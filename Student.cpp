#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;


// Assign studentId and name
void Student::assignDetails(int stid,char stname[]) {
  studentId = stid;
  strcpy(name,stname);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID:"<<studentId<<endl;
  cout<<"student Name: "<<name<<endl;
}
