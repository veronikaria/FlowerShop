#include "FlowerShop.h"
#include <algorithm>

FlowerShop::FlowerShop()
{
	this->flowers = new Flower[SIZE];
	this->ind_flower = 0;
}

FlowerShop::FlowerShop(Flower* flowers)
{
	this->flowers = flowers;
	this->ind_flower = sizeof(flowers);
}

FlowerShop::~FlowerShop()
{
	delete[] this->flowers;
}

Flower* FlowerShop::getFlowers()
{
	return this->flowers;
}

int FlowerShop::getQuantity()
{
	return this->ind_flower;
}

void FlowerShop::addFlowerToShop(Flower flower)
{
	this->flowers[this->ind_flower] = flower;
	this->ind_flower++;
}


void FlowerShop::addFlowersToShop(Flower* flowers)
{
	int length = sizeof(flowers);
	for (size_t i = 0; i < length; i++)
	{
		this->flowers[this->ind_flower] = flowers[i];
		this->ind_flower++;
	}
}

void FlowerShop::showAllFlowers()
{
	for (size_t i = 0; i < this->ind_flower; i++)
	{
		cout << this->flowers[i];
	}
}


void FlowerShop::topMostExpensiveFlowers(int quantity)
{
	Flower* flowers = this->flowers;
	sort(flowers, flowers + this->ind_flower);
	cout << "TOP " << quantity << " expensice flowers : \n";

	for (size_t i = 0; i < quantity; i++)
	{
		cout << flowers[i];
	}
}

void FlowerShop::mostExpensiveFlower()
{
	Flower* flowers = this->flowers;
	sort(flowers, flowers + this->ind_flower);
	cout << "The most expensice flower: \n" << flowers[0];
}


void FlowerShop::deleteFlowerFromShop(int index)
{
	if (index < this->ind_flower)
	{
		int n = this->ind_flower - 1;
		for (int j = index; j < n; j++)
			this->flowers[j] = this->flowers[j + 1];
		this->ind_flower--;
	}

}


std::ostream& operator << (std::ostream& out, FlowerShop& shop)
{
	out << "\tAbout Flower Shop. There is a Flower Shop." << endl;
	Flower* flowers = shop.getFlowers();
	for (size_t i = 0; i < shop.getQuantity(); i++)
	{
		out << flowers[i];
	}

	return out;
}


