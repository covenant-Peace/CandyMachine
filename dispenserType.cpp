#include "dispenserType.h"
#include <iostream>

using namespace std;

int dispenserType::getNoOfItems() const
{
	return numberOfItems;
}

int dispenserType::getCost() const
{
	return cost;
}

void dispenserType::makeSale()
{
	numberOfItems--;
}

dispenserType::dispenserType(int setNoOfItems, int setCost)
{
	if (setNoOfItems >= 0)
		numberOfItems = setNoOfItems;
	else
		numberOfItems = 50;

	if (setCost >= 0)
		cost = setCost;
	else
		cost = 50;
}