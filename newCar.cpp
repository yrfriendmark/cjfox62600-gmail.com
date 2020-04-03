#include "newCar.h"
#include <iostream>
#include <string>
#include "Car.h"
#include "Inventory.h"

using namespace std;

//constructor
newCar::newCar(): car()
{
	warrantyProvider = "unknown";
}
newCar::newCar(string vin, string make, string model, int year, float price, string warrantyProvider, string category) : car(vin, make, model, year, price, category)
{
	this->warrantyProvider = warrantyProvider;
}

//sell and lease functions
void newCar::leaseCar()
{
	//int option;
	//cout << "Please confirm that this is the car to be leased:" << endl;
	//cout << carObj << endl << endl;
	//cout << "1. Yes" << endl;
	//cout << "2. No" << endl;
	//cout << "Enter option: ";
	//cin >> option;

	//if (option == 1)
	//{
	//	removeFromInventory(); //note to self: pass car object to function?

	//}
}

//add new car to inventory
void newCar::addToInventory(newCar &carObj)
{
	addToInventory(carObj);


}
newCar newCar::addToInventory()	//for getting info and adding new cars to inventory
{
	string vin, make, model, warrantyProvider;
	int year;
	float price;

	cout << "Please fill out the remaining information for the new car:" << endl;
	cout << "------------------------------------------------------------" << endl << endl;

	cout << "Enter the VIN: ";
	cin >> vin;
	cout << endl;

	cout << "Enter the make: ";
	cin >> make;
	cout << endl;

	cout << "Enter the model: ";
	cin >> model;
	cout << endl;

	cout << "Enter the year: ";
	cin >> year;
	cout << endl;

	cout << "Enter the price: $";
	cin >> price;
	cout << endl;

	cout << "Enter the warranty provider (dealership or manufacturer): ";
	cin >> warrantyProvider;
	cout << endl;

	return newCar(vin, make, model, year, price, "New", warrantyProvider);
	
}
//function to return a leased car
void returnLease()									//note to self: when returning lease, update object to be used car (add mileage component)
{

}

