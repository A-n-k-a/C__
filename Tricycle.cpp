//
// Created by 不死鸟Anka on 2019-07-18.
//

#include "Tricycle.h"
#include <iostream>

using namespace std;

class Bike
        {
        public:
            int getSpeed();
            void setSpeed(int speed);
            void pedal();
            void brake();
        private:
            int speed;
        };

int Bike::getSpeed()
{
    return speed;
}
void Bike::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

void Bike::pedal()
{
    setSpeed(speed + 1);
    cout << "\nPedaling; tricycal speed " << speed << " mph\n";
}

void Bike::brake()
{
    setSpeed(speed - 1);
    cout << "\nBraking; tricycle speed " << speed << "mph\n";
}