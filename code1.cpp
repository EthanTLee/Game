#include<iostream>
#include<string>

using namespace std;

int main () {
    string choice;
    cout << "choose yes or no" << endl;
    cin >> choice;
    
    if (choice == "yes") {
        cout << "you chose yes" <<endl;
    }
    
    if (choice == "no") {
        cout << "you chose no" <<endl;
    }
    
}

