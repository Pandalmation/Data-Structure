#ifndef CONTACT_H
#define CONTACT_H
#include <string>
#include <iostream>
using namespace std;

class Contact
{
private:
    string Name, Phonenum, Email, Address;

public:
    void createContact();
    string getName();
    string getPhonenum();
    string getEmail();
    string getAddress();
};

void Contact::createContact(){
    cout << "Enter a full name: ";
    cin >> Name;
    cout <<"Enter a phone number: ";
    cin >> Phonenum;
    cout << "Enter an email: ";
    cin >> Email;
    cout << "Enter an address: ";
    cin >> Address;
    
}
string Contact::getName(){
    return Name;
}
string Contact::getPhonenum(){
    return Phonenum;
}
string Contact::getEmail(){
    return Email;
}
string Contact::getAddress(){
    return Address;
}
#endif