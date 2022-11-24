/*
Assignment - Lab                                                                      
    Create demo applications to illustrate different types of inheritance.
    Create a demo function and override it.
*/

#include <iostream>
using namespace std;


class Student {
    protected:  string name;
                int id;

    public: Student();
            Student(string name, int id) { // constructor of student class
                this->name = name;
                this->id = id;
            }

            void print() {
                cout << "Student Name : " << this->name << endl;
                cout << "Student id   : " << this->id << endl;
            }
};

class Member: public Student {
    long long number;
    string course;
    Student s;
    public: Member(string name, int id, long long number, string course) {
                Student(name, id); // inheretention
                this->number = number;
                this->course = course;
            }
            // function overloading
            void print(){
                s.print();
                cout << "Number of Student : "  << this->number << endl;
                cout << "Course of Student : "  << this->course << endl;
            }
};

int main(){
    Member mr("Pankaj", 15, 8788131068, "HPCAP");
    mr.print();
}