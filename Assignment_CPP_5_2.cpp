/*
Assignment - Lab
    Create demo class and encapsulate all members
*/

#include<iostream>
using namespace std;


class Account {
    private :   string name = "Pankaj";
                int cash = 0;

    public: void print(string name) { //encapsulation
        if(this->name==name) {
            cout << "Cash : " << cash << endl;
        } else {
            cout << "wrong name" << endl;
        }
    }
};

int main(){
    string name;
    cout << "Enter name : ";
    cin >> name;
    Account ac;
    ac.print(name);
}