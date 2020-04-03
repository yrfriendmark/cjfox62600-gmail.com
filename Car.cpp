#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;


//constructors
car::car()
{
	VIN = "unknown";
	make = "unknown";
	model = "unknown";
	year = 1980;
	price = 0.00;
	category = "unknown";
}
car::car(string vin, string make, string model, int year, float price, string category)
{
	this->VIN = vin;
	this->make = make;
	this->model = model;
	this->year = year;
	this->price = price;
	this->category = category;
}

//function to add to inventory
void addToInventory(const car& carObj)
{
	
}
//search functions
//void car::searchMake()
//{
//	string makeWanted;
//	bool found = false;
//	cout << "Enter the make to search for: "; //prompt for desired make
//	cin >> makeWanted; //input make
//	cout << endl;
//	cout << "Searching for: " << makeWanted << "." << endl << endl; //show message that confirms it is being searched for
//
//	for (int i = 0; i < catalog.size(); i++) // linear search of catalog for the desired make
//	{
//		if (catalog[i].make == makeWanted) //if the make of a car in the inventory matches the desired make
//		{
//			cout << catalog[i] << endl; //output the information of the car that fits criteria
//			found = true; //indicate that at least one matching car has been found
//		}
//	}
//	if (!found) //if no matching cars were found
//		cout << "Make not found." << endl << endl; //display message stating that none were found
//
//	//same algorithm follows for all the following search methods
//
//}
//void car::searchYear()
//{
//	int yearWanted;
//	bool found = false;
//	cout << "Enter year of car to search for: ";
//	cin >> yearWanted;
//	cout << endl;
//	cout << "Searching for cars from " << yearWanted << "." << endl;
//
//	for (int i = 0; i < catalog.size(); i++)
//	{
//		if (catalog[i].year == yearWanted)
//		{
//			cout << catalog[i] << endl;
//			found = true;
//		}
//	}
//	if (!found)
//		cout << "No cars found from " << yearWanted << "." << endl << endl;
//}
//void car::searchPrice()
//{
//	float min, max;
//	bool found = false;
//	cout << "Enter price range minimum: $";
//	cin >> min;
//	cout << endl;
//
//	cout << "Enter price range maximum: $";
//	cin >> max;
//	cout << endl;
//
//	for (int i = 0; i < catalog.size(); i++)
//	{
//		if (catalog[i].price >= min && catalog[i].price <= max)
//		{
//			cout << catalog[i] << endl;
//			found = true;
//		}
//	}
//	if (!found)
//		cout << "No cars in this price range." << endl << endl;
//}
//void car::searchCategory()
//{
//	string categoryWanted;
//	bool found = false;
//
//	cout << "Enter category to search for (New or Used): ";
//	cin >> categoryWanted;
//	cout << endl;
//	cout << "Searching for " << categoryWanted << " cars." << endl << endl;
//
//	for (int i = 0; i < catalog.size(); i++)
//	{
//		if (catalog[i].category == categoryWanted)
//		{
//			cout << catalog[i] << endl;
//			found = true;
//		}
//	}
//	if (!found)
//		cout << "No " << categoryWanted << " cars found." << endl << endl;
//}
//void car::searchInventory()
//{
//	int option;
//	cout << "How would you like to search?" << endl;
//	cout << "1. Search by make" << endl;
//	cout << "2. Search by year" << endl;
//	cout << "3. Search by price" << endl;
//	cout << "4. Search by category" << endl << endl;
//
//	cout << "Enter option: ";
//	cin >> option;
//
//	switch (option)
//	{
//	case 1:
//		searchMake();
//		break;
//	case 2:
//		searchYear();
//		break;
//	case 3:
//		searchPrice();
//		break;
//	case 4:
//		searchCategory();
//		break;
//	}
//}

//return functinos
string car::getVIN()
{
	return this->VIN;
}
string car::getMake()
{
	return this->make;
}
string car::getModel()
{
	return this->model;
}
int car::getYear()
{
	return this->year;
}
float car::getPrice()
{
	return this->price;
}
string car::getCategory()
{
	return this->category;
}
//overloading << operator
ostream& operator<<(ostream& osObj, const car& carObj)
{
	osObj << carObj.VIN << "\t\t" << carObj.make << "\t\t" << carObj.model << "\t\t" << carObj.year
		<< "\t\t$" << carObj.price << "\t\t" << carObj.category << endl;

	return osObj;
}




