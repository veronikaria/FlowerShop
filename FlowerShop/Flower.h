#pragma once
#include <iostream>
using namespace std;

class Flower
{
public:
	Flower();
	Flower(int height, int size, string color, double price, int quantity, double deliveryRate);
	~Flower();
	int getHeight();
	void setHeight(int height);
	int getSize();
	void setSize(int size);
	string getColor();
	void setColor(string color);
	double getPrice();
	void setPrice(double price);
	int getQuantity();
	void setQuantity(int quantity);
	double getDeliveryRate();
	void setDeliveryRate(double deliveryRate);
private:
	int height;
	int size;
	string color;
	double price;
	int quantity;
	double deliveryRate;
};