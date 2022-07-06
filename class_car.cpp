#include<iostream>
#include "Car.h"

using namespace std;

Car :: Car()
{
    Car :: (float amount)
    {
        fuel = amount;
    }
    void Car::FillFuel(float amount)
    {
        fuel = amount;
    }
    void Car::Accelerate()
    {
        speed++;
        fuel-=0.5f;
    }
    void Car::Brake()
    {
        speed = 0;
    }
    void Car::AddPassengers(int count) {
	passengers = count;
}
void Car::Dashboard() {
	cout << "Fuel level : " << fuel << endl;
	cout << "Speed : " << speed << endl;
	cout << "Passengers : " << passengers <<endl; 
}
Car::~Car() {

}
