#include <iostream>

using namespace std;

int main() {
    char name[10] = "Will"; // This will get reasigned from the cin
    char initial = 'C';
    int age = 42;
    int height = 180;
    bool happy = true;
    float score = 8.9;
    
    cout << "What is your name? ";
    cin >> name; // This will take the users input
    cout << endl << endl;
    cout << "Name: " << name << endl;
    cout << "Initial: " << initial << endl; 
    cout << "Age: " << age << endl;
    cout << "Happy: " << happy << endl;
    cout << "Score: " << score << endl;

    // basic maths
    cout << "Height * Age: " << height * age << endl;
    cout << "Height + Age: " << height + age << endl;
    cout << "Height - Age: " << height - age << endl;
    cout << "Height / Age: " << height / age << endl;

    // Increment and Decrement
    cout << "Age + 1: " << ++ age << endl; // increases the age before its printed
    cout << "Age + 1: " << age ++ << endl; // increases the age after its printed
    cout << "Age - 1: " << -- age << endl; // decreases the age before its printed
    cout << "Age - 1: " << age -- << endl; // decreases the age after its printed

    // if comparitors == != >= <= && || etc
    if( age == 43 ){
        cout << "You are 43" << endl;
    } else {
        cout << "You are not 43" << endl;
    }
    // ternary operators
    age == 43 ? cout << "You are 43" << endl : cout << "You are not 43" << endl;


    // while loop
    while (age >= 1) {
        cout << "you are now age " << age << endl;
        age --;
    }

    // do while will always run once and conditionally run many more times
    do {
        cout << "How old are you? " << endl;
        cin >> age;
    } while (age != 43);

    return 0;
}