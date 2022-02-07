#include "Flower.h"


Flower::Flower()
{
	this->height = 0;
	this->size = 0;
	this->color = "";
	this->price = 0;
	this->quantity = 0;
	this->deliveryRate = 0;
}

Flower::Flower(int height, int size, string color, double price, int quantity, double deliveryRate)
{
	this->height = height;
	this->size = size;
	this->color = color;
	this->price = price;
	this->quantity = quantity;
	this->deliveryRate = deliveryRate;
}

Flower::~Flower() { }


