#include <iostream>
#include <string>
#include "arrayListType.h"
#include "contact.h"

using namespace std;

class PhoneBook{
    private:
        arrayListType<Contact> CList;
        Contact Cont;
        string NameSearch;
        int x = 0;
        
    public:
    void addContact();
    void removeContact();
    void searchContact();
    void showAll();
};

void PhoneBook::addContact(){

    if(CList.isFull()){
        cout <<endl;
        cerr << "Unable to add contact, list is full." << endl;
    }else{
        Cont.createContact();
        CList.insertAt(x, Cont);
        x++;
        cout << endl;
        cout << Cont.getName() << " has been added to the book." << endl;
    }
}

void PhoneBook::removeContact(){
    if(CList.isEmpty()){
        cout <<endl;
        cerr << "No contacts to be removed." << endl;
    }else{
        string remName;
        cout << "Remove contact name: ";
        cin >> remName;
        CList.removeContact(remName);
    }
}

void PhoneBook::searchContact(){
    if(CList.isEmpty()){
        cout <<endl;
        cerr << "You have no contacts! go make some friends :)" << endl;
    }
    else
    {
        cout << "Look for a contact name: ";
        cin >> NameSearch;
        int found = CList.contactSearch(NameSearch);

        if(found != -1){
        CList.printContact(found);
        }else{
        cout << "Unable to find contact!" << endl;
        }
    }
}

void PhoneBook::showAll(){
    if(CList.isEmpty()){
        cout <<endl;
        cerr << "You have no contacts! go make some friends :)" << endl;
    }else{
        cout << "LIST OF ALL CONTACTS" << endl;
        CList.printAll();
        cout << endl;
    }
}

int main(){
    char op;
    PhoneBook CBook;
	do
	{
		cout << "Contact Book" << endl;
		cout << "[1] Add contact" << endl;
		cout << "[2] Remove contact" << endl;
		cout << "[3] Search contact" << endl;
		cout << "[4] Show all contacts" << endl;
		cout << "[5] Exit" << endl;
        cout << "What is your choice? [1-5]" << endl << endl; 
		cin >> op;

        switch (op) {
          case '1':
          {
            cout << "Add a new contact..." << endl;
            CBook.addContact();
            break;
          }
           case '2':
          {
            cout << "Remove a contact..." << endl;
            CBook.removeContact();
            break;
          }
          case '3':
          {
            cout << "Search by name..." << endl;
            CBook.searchContact();
            break;
          }
          case '4':
          {
            cout << "Showing all..." << endl;
            CBook.showAll();
            break;
          }
          case '5':
          {
            cout << "Bye bye!" << endl;
            continue;
            break;
          }
        }
    }while(op != '5');
    return 0;
}