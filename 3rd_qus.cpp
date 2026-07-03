#include <iostream>

using namespace std;

class Vehicle
{
private:

    string model;
    double speed;

public:
    
    void setModel(string m)
    {
        model = m;
    }

    void setSpeed(double s)
    {
        speed = s;
    }

   
    string getModel()
    {
        return model;
    }

    double getSpeed()
    {
        return speed;
    }
};


class Car : public Vehicle
{
public:
    void calculateTime(double distance)
    {
        double time = distance / getSpeed();

        cout << "\nCar Details " << endl;
        cout << "Model = " << getModel() << endl;
        cout << "Speed = " << getSpeed() << " km/h" << endl;
        cout << "Distance = " << distance << " km" << endl;
        cout << "Time Required = " << time << " hours" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void calculateTime(double distance)
    {
        double time = distance / getSpeed();

        cout << "\n Bike Details" << endl;
        cout << "Model = " << getModel() << endl;
        cout << "Speed = " << getSpeed() << " km/h" << endl;
        cout << "Distance = " << distance << " km" << endl;
        cout << "Time Required = " << time << " hours" << endl;
    }
};

int main()
{
    Car car;
    Bike bike;

    string model;
    double speed, distance;

    cout << "Enter Car Model = ";
    cin >> model;
    car.setModel(model);

    cout << "Enter Car Speed (km/h) = ";
    cin >> speed;
    car.setSpeed(speed);

    
    cout << "\nEnter Bike Model = ";
    cin >> model;
    bike.setModel(model);

    cout << "Enter Bike Speed (km/h) = ";
    cin >> speed;
    bike.setSpeed(speed);

    
    cout << "\nEnter Distance (km) = ";
    cin >> distance;

    
    car.calculateTime(distance);
    bike.calculateTime(distance);


    return 0;
}