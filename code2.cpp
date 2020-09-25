#include<iostream>
#include<string>

using namespace std;

void askQuestion() {

    cout << "what is your name?";
}

string getAnswer() {
    string x;
    cin >> x;
    return x;
}

int main() {

    askQuestion();

    string answer = getAnswer();
    cout << answer;

}


