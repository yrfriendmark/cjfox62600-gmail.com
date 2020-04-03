#include "Inventory.h"
#include<iostream>

using namespace std;

//constructor
inventory::inventory()
{
}

//function to run program and interact with inventory

	//declare variables
int option; //used to navigate menu

//initialize starting inventory
void inventory::runProgram()
{
	inventory::initializeCatalog();
	while (true)
	{

		//display menu
		cout << "1. Display all inventory" << endl;
		cout << "2. Search Inventory" << endl;
		cout << "3. Sell/Lease cars" << endl;
		cout << "4. Return a leased car" << endl;
		cout << "5. Add cars to inventory" << endl;
		cout << "6. Exit" << endl;
		cout << "Enter option: ";																			//catch invalid inputs here
		cin >> option; //read in menu option
		cout << endl << endl;

		switch (option)
		{
		case 1:
			printCatalog();
			break;
		case 2:
			searchInventory();
			break;
		case 3:
			leaseCar();
			break;
		case 4:
			/*newCar::returnLease();*/
			break;
		case 5:
			addToInventory();
			break;
		case 6:
			return;
			break;
		default:
			cout << "Invalid input. Try again.\n";


		}
	}
}
void inventory::initializeCatalog()
{
	catalog.push_back(newCar("58196", "Dodge", "Charger", 2018, 42000, "New", "Dealership"));


	catalog.push_back(newCar("13362", "Chevrolet", "Equinox", 2019, 26400, "New", "Dealership"));
	catalog.push_back(newCar("76448", "Subaru", "Crosstrek", 2019, 30000, "New", "Manufacturer"));
	catalog.push_back(newCar("99212", "Mercedes-Benz", "A220", 2018, 32800, "New", "Manufacturer"));
	catalog.push_back(newCar("46552", "BMW", "330i", 2019, 40750, "New", "Manufacturer"));

	catalog.push_back(usedCar("86519", "Ford", "Fusion", 2013, 8900, "Used", 64540));
	catalog.push_back(usedCar("46795", "Ram", "1500", 2017, 33250, "Used", 14693));
	catalog.push_back(usedCar("21789", "Pontiac", "Torrent", 2006, 3850, "Used", 124520));
	catalog.push_back(usedCar("51098", "Ford", "Focus", 2007, 5420, "Used", 133200));
	catalog.push_back(usedCar("62189", "Saturn", "Ion", 2008, 7430, "Used", 74300));
}
//adding cars to inventory
void inventory::addToInventory(car& carObj)
{
	this->catalog.push_back(carObj);
}
void inventory::addToInventory()
{
	int option;

	cout << "Would you like to add a new or used car to the inventory?" << endl;
	cout << "1. New" << endl;
	cout << "2. Used " << endl;
	cout << "Enter option: ";
	cin >> option;

	if (option == 1)
	{
		
		newCar newCarObj = newCar().addToInventory();
		inventory::addToInventory(newCarObj);
	}
	else if (option == 2)
	{
		usedCar usedCarObj =usedCar().addToInventory();
		inventory::addToInventory(usedCarObj);
	}
	else{
		cout << "Invalid input. Returning to menu." << endl << endl;

	}
}
//deleting cars from inventory - to be used in leasing/selling functions
void inventory::removeFromInventory()
{

}

//sell/lease functions
void inventory::sellCar()
{
}

void inventory::leaseCar()
{

}

//search functions
void inventory::searchMake()
{
	string makeWanted;
	bool found = false;
	cout << "Enter the make to search for: "; //prompt for desired make
	cin >> makeWanted; //input make
	cout << endl;
	cout << "Searching for: " << makeWanted << "." << endl << endl; //show message that confirms it is being searched for

	for (int i = 0; i < catalog.size(); i++) // linear search of catalog for the desired make
	{
		if (catalog[i].getMake() == makeWanted) //if the make of a car in the inventory matches the desired make
		{
			cout << catalog[i] << endl; //output the information of the car that fits criteria
			found = true; //indicate that at least one matching car has been found
		}
	}
	if (!found) //if no matching cars were found
		cout << "Make not found." << endl << endl; //display message stating that none were found

	//same algorithm follows for all the following search methods

}
void inventory::searchYear()
{
	int yearWanted;
	bool found = false;
	cout << "Enter year of car to search for: ";
	cin >> yearWanted;
	cout << endl;
	cout << "Searching for cars from " << yearWanted << "." << endl;

	for (int i = 0; i < catalog.size(); i++)
	{
		if (catalog[i].getYear() == yearWanted)
		{
			cout << catalog[i] << endl;
			found = true;
		}
	}
	if (!found)
		cout << "No cars found from " << yearWanted << "." << endl << endl;
}
void inventory::searchPrice()
{
	float min, max;
	bool found = false;
	cout << "Enter price range minimum: $";
	cin >> min;
	cout << endl;

	cout << "Enter price range maximum: $";
	cin >> max;
	cout << endl;

	for (int i = 0; i < catalog.size(); i++)
	{
		if (catalog[i].getPrice() >= min && catalog[i].getPrice() <= max)
		{
			cout << catalog[i] << endl;
			found = true;
		}
	}
	if (!found)
		cout << "No cars in this price range." << endl << endl;
}
void inventory::searchCategory()
{
	string categoryWanted;
	bool found = false;

	cout << "Enter category to search for (New or Used): ";
	cin >> categoryWanted;
	cout << endl;
	cout << "Searching for " << categoryWanted << " cars." << endl << endl;

	for (int i = 0; i < catalog.size(); i++)
	{
		if (catalog[i].getCategory() == categoryWanted)
		{
			cout << catalog[i] << endl;
			found = true;
		}
	}
	if (!found)
		cout << "No " << categoryWanted << " cars found." << endl << endl;
}
void inventory::searchInventory()
{
	int option;
	cout << "How would you like to search?" << endl;
	cout << "1. Search by make" << endl;
	cout << "2. Search by year" << endl;
	cout << "3. Search by price" << endl;
	cout << "4. Search by category" << endl << endl;

	cout << "Enter option: ";
	cin >> option;

	switch (option)
	{
	case 1:
		searchMake();
		break;
	case 2:
		searchYear();
		break;
	case 3:
		searchPrice();
		break;
	case 4:
		searchCategory();
		break;
	}
}

//function to show all cars in inventory
void inventory::printCatalog()
{
	if (catalog.empty())
	{
		cout << "Inventory is empty." << endl << endl;
	}
	if (!catalog.empty())
	{
		cout << "VIN\t\t Make\t\t Model\t\t Year\t\t Price\t\t Category" << endl << endl;
		for (auto itr = catalog.begin(); itr != catalog.end(); ++itr)
		{
			cout << *itr;
		}
	}
}