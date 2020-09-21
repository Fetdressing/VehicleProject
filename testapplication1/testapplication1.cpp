// testapplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"
#include "Vec2.h"
#include "Car.h"

#include "BuildInstructions.h"

using namespace std;

int main()
{
    Vec2 *pos = new Vec2(1000, 1000);

    Vehicle* v = new Vehicle(*pos, 5.0);
    Car* c = new Car(new Engine(,6), Vec2(5,5), 5);
    
    cout << v->ToString();
    cout << c->ToString();

    delete(v);
    delete(c);
    delete(pos);

    cout << _CrtDumpMemoryLeaks();
    //cout << v->ToString();
    //(*pos)[0] = 5;
    //cout << v->ToString();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
