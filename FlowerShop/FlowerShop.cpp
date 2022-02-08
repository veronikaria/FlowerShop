#include "FlowerShop.h"


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
	}
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