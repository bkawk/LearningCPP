#include <iostream>

using namespace std;

// a function prototype, the actual function is below
void sayHello();
void whatNumber(int);
inline void whatSize(int);
void whatAges(int, int);

int main() {
    string surname = "Hill";
    char name[10] = "Will"; 
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
    cout << "Surname: " << surname << endl; 
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

    // for loop, in this example counter is only available within the loop as its initialised as part of the for loop
    for (int counter = 1; counter <= 10; counter++) {
        cout << "You just got " << counter << " wishes" << endl;
    };
    // arrays must contain the same types you cant mix
    // arrays can be limited in length
    int lights[6] = {1,2,3,4,5,6};
    cout << lights[3] << endl;

    // arrays can be unlimited 
    int fish[] = {1,2,3,4,5,6,7,8,9,10};
    cout << fish[0] << endl;

    // arrays can be asigned after they are initialised if the aray has a length
    int dogs[5];
    dogs[0] = 1;
    dogs[1] = 2;
    cout << dogs[0] << endl;

    // two dimensional arrays. rows / columns 
    int studentScores[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
    };
    cout << studentScores[0][2] << endl;

    // call a function
    sayHello();
    whatNumber(6);
    whatSize(11);
    whatAges(1, 2);

    // for loop with a break
    for (int counter = 1; counter <= 10; counter++) {
        cout << "You just got " << counter << " breaks" << endl;
        if(counter == 5) {
            break;
        };
    };

    // for loop with a continue
    for (int counter = 1; counter <= 10; counter++) {
        if (counter == 5) {
            continue;
        };
        cout << "You just got " << counter << " breaks" << endl;
    };

    // Switch with default
    char input = 'A';
    switch(input){
        case 'A' : {
            cout << 'A' << endl;
            break;
        }
        case 'B' : {
            cout << 'B' << endl;
            break;
        }
        default : {
            cout << 'C' << endl;
        }
    }
    
    return 0;
}

// a function
void sayHello() {
    cout << "Hello Boy!" << endl;
};

// a function with an int argument
void whatNumber(int num) {
    cout << num << endl;
};

// function with default values 
void whatAges(int x = 10, int y = 10) {
    cout << x + y << endl;
}

// inline functions, 
inline void whatSize(int x= 10){
    cout << x << endl;
}