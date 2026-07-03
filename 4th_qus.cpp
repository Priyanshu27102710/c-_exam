#include <iostream>

using namespace std;

class Vehicle
{
protected:

    int vehicleID;
    string manufacturer;
    string model;
    int year;

public:

    Vehicle(int id, string manu, string mod, int yr)
    {
        vehicleID = id;
        manufacturer = manu;
        model = mod;
        year = yr;
    }
    virtual void displayDetails()
    {
        cout << "\nVehicle ID = " << vehicleID << endl;
        cout << "Manufacturer = " << manufacturer << endl;
        cout << "Model = " << model << endl;
        cout << "Year = " << year << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle
{
private:

    int seatingCapacity;

public:
    Car(int id, string manu, string mod, int yr, int seats) : Vehicle(id, manu, mod, yr)
    {
        seatingCapacity = seats;
    }

    void displayDetails() override
    {
        cout << "\n Car Details" << endl;
        cout << "Vehicle ID = " << vehicleID << endl;
        cout << "Manufacturer = " << manufacturer << endl;
        cout << "Model = " << model << endl;
        cout << "Year = " << year << endl;
        cout << "Seating Capacity = " << seatingCapacity << endl;
    }
};

class Bike : public Vehicle
{
private:

    bool hasGear;

public:
    Bike(int id, string manu, string mod, int yr, bool gear) : Vehicle(id, manu, mod, yr)
    {
        hasGear = gear;
    }

    void displayDetails() override
    {
        cout << "\nBike Details" << endl;
        cout << "Vehicle ID = " << vehicleID << endl;
        cout << "Manufacturer = " << manufacturer << endl;
        cout << "Model = " << model << endl;
        cout << "Year = " << year << endl;
        cout << "Gear = " << (hasGear ? "Yes" : "No") << endl;
    }
};

class Truck : public Vehicle
{

private:
    float loadCapacity;

public:
    Truck(int id, string manu, string mod, int yr, float load) : Vehicle(id, manu, mod, yr)
    { 
        loadCapacity = load;
    }

    void displayDetails() override
    {
        cout << "\nTruck Details " << endl;
        cout << "Vehicle ID = " << vehicleID << endl;
        cout << "Manufacturer = " << manufacturer << endl;
        cout << "Model = " << model << endl;
        cout << "Year = " << year << endl;
        cout << "Load Capacity = " << loadCapacity << " tons" << endl;
    }
};

int main()
{
    Vehicle *vehicles[3];

    vehicles[0] = new Car(1, "Toyota", "Fortuner", 2023, 7);
    vehicles[1] = new Bike(2, "Honda", "Shine", 2022, true);
    vehicles[2] = new Truck(3, "Tata", "Prima", 2024, 25.5);

    cout << "Vehicle Details Using Polymorphism\n";

    
    for (int i = 0; i < 3; i++)
    {
        vehicles[i]->displayDetails();
    }

    for (int i = 0; i < 3; i++)
    {
        delete vehicles[i];
    }

    return 0;
}