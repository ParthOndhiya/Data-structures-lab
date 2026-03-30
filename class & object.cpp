#include <iostream>
#include <string>
using namespace std;
class Student {
public: 
    int roll_no;
    string name;
  void display_details() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};
int main() { 
    Student s1;
   s1.name = "Parth Ondhiya";
    s1.roll_no = 61;
    s1.display_details();

    return 0;
}
