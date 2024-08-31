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

    // Pure virtual function for making a sound
    virtual void makeSound() const = 0;

    // Pure virtual function for displaying details
    virtual void displayDetails() const = 0;

    virtual ~Animal() {} // Virtual destructor for proper cleanup
protected:
    std::string name;
    std::string sound;
};

// Derived class Dog
class Dog : public Animal {
public:
    // Constructor
    Dog(const std::string& n = "", const std::string& s = "Woof") : Animal(n, s) {}

    // Implementation of the pure virtual function makeSound
    void makeSound() const override {
        std::cout << name << " says: " << sound << std::endl;
    }

    // Implementation of the pure virtual function displayDetails
    void displayDetails() const override {
        std::cout << "Dog Name: " << name << std::endl;
        std::cout << "Dog Sound: " << sound << std::endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Constructor
    Cat(const std::string& n = "", const std::string& s = "Meow") : Animal(n, s) {}

    // Implementation of the pure virtual function makeSound
    void makeSound() const override {
        std::cout << name << " says: " << sound << std::endl;
    }

    // Implementation of the pure virtual function displayDetails
    void displayDetails() const override {
        std::cout << "Cat Name: " << name << std::endl;
        std::cout << "Cat Sound: " << sound << std::endl;
    }
};

// Main function to demonstrate polymorphism
int main() {
    // Create an array of Animal pointers
    Animal* animals[] = {
        new Dog("Buddy"),
        new Cat("Whiskers")
    };

    // Number of animals in the array
    int numberOfAnimals = sizeof(animals) / sizeof(animals[0]);

    // Demonstrate polymorphism by calling displayDetails on each object
    for (int i = 0; i < numberOfAnimals; ++i) {
        animals[i]->displayDetails();
        std::cout << std::endl;
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < numberOfAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}
