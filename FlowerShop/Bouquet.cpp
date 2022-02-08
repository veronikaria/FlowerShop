#include "Bouquet.h"

Bouquet::Bouquet()
{
	this->arr = new Flower[SIZE];
	this->ind = 0;
}

Bouquet::~Bouquet()
{
	delete[] this->arr;
}

int Bouquet::getQuantity()
{
	return this->ind;
}

Flower* Bouquet::getFlowers()
{
	return this->arr;
}

void Bouquet::addFlowerToBouquet(Flower flower)
{
	this->arr[ind] = flower;
	this->ind++;
}

double Bouquet::totalBouquetPrice()
{
	double result = 0;
	for (size_t i = 0; i < this->ind; i++)
	{
		result += this->arr[i].getPrice();
	}
	return result;
}