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


int Flower::getHeight()
{
	return this->height;
}

void Flower::setHeight(int height)
{
	this->height = height;
}


int Flower::getSize()
{
	return this->size;
}

void Flower::setSize(int size)
{
	this->size = size;
}

string Flower::getColor()
{
	return this->color;
}

void Flower::setColor(string color)
{
	this->color = color;
}

double Flower::getPrice()
{
	return this->price;
}

void Flower::setPrice(double price)
{
	this->price = price;
}


int Flower::getQuantity()
{
	return this->quantity;
}

void Flower::setQuantity(int quantity)
{
	this->quantity = quantity;
}

double Flower::getDeliveryRate()
{
	return this->deliveryRate;
}

void Flower::setDeliveryRate(double deliveryRate)
{
	this->deliveryRate = deliveryRate;
}

std::ostream& operator << (std::ostream& out, Flower& flower)
{
	out << "About Flower. Height: " << flower.getHeight() << " and size: " << flower.getSize() << endl;
	out << "Color: " << flower.getColor() << " and delivery rate: " << flower.getDeliveryRate() << endl;
	out << "Price: " << flower.getPrice() << " and quantity: " << flower.getQuantity() << endl;
	return out;
}


bool operator <(Flower& lhs, Flower& rhs)
{
	return rhs.price < lhs.price;
}
