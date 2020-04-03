#pragma 
#ifndef NEWCAR_H
#define NEWCAR_H
#include "Car.h"
#include <iostream>


using namespace std;

class newCar: public car
{
public:
	//constructor
	newCar();
	newCar(string vin, string make, string model, int year, float price, string warrantyProvider, string category="New");

	//sell and lease functions
	void leaseCar();

	//add new car to inventory
	void addToInventory(newCar& carObj);
	newCar addToInventory();

	//function to return a leased car
	void returnLease();//note to self: when returning lease, update object to be used car (add mileage component)
	
	

private:
	string warrantyProvider;
};
#endif