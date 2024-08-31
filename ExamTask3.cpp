#include <iostream>
#include <string>

// Base class Animal
class Animal {
public:
    // Constructor
    Animal(const std::string& n = "", const std::string& s = "") : name(n), sound(s) {}

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for name
    void setName(const std::string& n) {
        name = n;
    }

    // Getter for sound
    std::string getSound() const {
        return sound;
    }

    // Setter for sound
    void setSound(const std::string& s) {
        sound = s;
    }

    // Pure virtual function for making a sound (for abstraction)
    virtual void makeSound() const = 0;

protected:
    std::string name;
    std::string sound;
};

// Derived class Dog
class Dog : public Animal {
public:
    // Constructor
    Dog(const std::string& n = "", const std::string& s = "Woof") : Animal(n, s) {}

    // Implementation of the pure virtual function
    void makeSound() const override {
        std::cout << name << " says: " << sound << std::endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Constructor
    Cat(const std::string& n = "", const std::string& s = "Meow") : Animal(n, s) {}

    // Implementation of the pure virtual function
    void makeSound() const override {
        std::cout << name << " says: " << sound << std::endl;
    }
};

// Main function to demonstrate abstraction
int main() {
    // Create objects of Dog and Cat
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    // Demonstrate the abstraction by calling makeSound
    myDog.makeSound();  // Outputs: Buddy says: Woof
    myCat.makeSound();  // Outputs: Whiskers says: Meow

    return 0;
}
