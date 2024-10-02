// include the necessary libraries
#include <iostream>
#include <string>

class Car {
    //attributes
    public:
    std::string make;
    std::string model;
    int year;
    // Constructor
    void create_car()
    {
        std::cout << "Podaj marke samochodu: ";
        std::cin >> make;
        std::cout << "Podaj model samochodu: ";
        std::cin >> model;
        std::cout << "Podaj rocznik samochodu: ";
        std::cin >> year; 
    }
    // Method to display car information
    void displayInfo()
    {
        std::cout << "marka" << make << std::endl;
        std::cout << "model" << model << std::endl;
        std::cout << "rocznik" << year << std::endl;
    }
};

int main() {
    // Create a Car object
    Car samochod;
    samochod.create_car();

    // Display car details
    samochod.displayInfo();

    return 0;
}
