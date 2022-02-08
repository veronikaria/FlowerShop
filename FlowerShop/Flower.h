#ifndef FLOWER_H
#define FLOWER_H
#include <iostream>
#define SIZE 100
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
	friend std::ostream& operator << (std::ostream& out, Flower& flower);
	friend bool operator <(Flower& lhs, Flower& rhs);
private:
	int height;
	int size;
	string color;
	double price;
	int quantity;
	double deliveryRate;
};


#endif
