#pragma once
#ifndef INVENTORY_H
#define INVENTORY_H
#include "Car.h"
#include "newCar.h"
#include "usedCar.h"
#include <vector>
class inventory
{
public:
	//constructor for the inventory
	inventory();
	//function to run program and interact with inventory
	void runProgram();
	void initializeCatalog();
	//adding cars to inventory
	void addToInventory(car& carObj);
	void addToInventory();
	//deleting cars from inventory - to be used in leasing/selling functions
	void removeFromInventory();

	//sell/lease functions
	void sellCar();	//new and used cars
	void leaseCar(); //function to decide whether to sell or lease
	//leasing function reserved for newCar

	//search functions
	void searchMake();
	void searchYear();
	void searchPrice();
	void searchCategory();
	void searchInventory();

	//function to show all cars in inventory
	void printCatalog();

private:
	vector<car> catalog{};
};
#endif