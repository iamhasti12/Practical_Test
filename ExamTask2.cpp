#include <iostream>
#include <vector>
#include <string>

// Define the Person class
class Person {
public:
    // Parameterized constructor
    Person(const std::string& n, int a, const std::string& addr)
        : name(n), age(a), address(addr) {}

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for name
    void setName(const std::string& n) {
        name = n;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Getter for address
    std::string getAddress() const {
        return address;
    }

    // Setter for address
    void setAddress(const std::string& addr) {
        address = addr;
    }

    // Method to display person details
    void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Address: " << address << std::endl;
    }

private:
    std::string name;
    int age;
    std::string address;
};

// Main function to demonstrate the usage of the Person class
int main() {
    int N;
    std::cout << "Enter the number of persons: ";
    std::cin >> N;

    // Clear input buffer
    std::cin.ignore();

    // Create a vector to store Person objects
    std::vector<Person> persons;

    // Loop to create N Person objects
    for (int i = 0; i < N; ++i) {
        std::string name;
        int age;
        std::string address;

        std::cout << "Enter details for person " << (i + 1) << ":" << std::endl;

        // Input details for each person
        std::cout << "Name: ";
        std::getline(std::cin, name);
        std::cout << "Age: ";
        std::cin >> age;
        std::cin.ignore();  // Clear newline character left in the buffer
        std::cout << "Address: ";
        std::getline(std::cin, address);

        // Create a Person object and add it to the vector
        persons.emplace_back(name, age, address);
    }

    std::cout << "\nDisplaying details of all persons:\n";

    // Display details of all Person objects
    for (int i = 0; i < N; ++i) {
        std::cout << "\nPerson " << (i + 1) << ":" << std::endl;
        persons[i].display();
    }

    return 0;
}
