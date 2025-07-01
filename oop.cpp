#include<iostream>
#include<cstring>
using namespace std;

class Cat {
    // Properties / attributes
public:
    string name;
    int age;

    // Method / member function
    void Meow() {
        cout << "Meow" << endl;
    }
};

int main() {
    Cat kitty1; // Creating an object of the Cat class

    // Accessing properties using the dot operator
    kitty1.name = "Nono";
    kitty1.age = 2;

    // Calling the method using the object
    kitty1.Meow();

    return 0;
}
