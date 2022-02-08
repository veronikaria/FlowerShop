#ifndef FLOWERSHOP_H
#define FLOWERSHOP_H

#include <iostream>
#include "Flower.h"

class FlowerShop
{
private:
	Flower* flowers;
	int ind_flower;
public:
	FlowerShop();
	FlowerShop(Flower* flowers);
	Flower* getFlowers();
	int getQuantity();
	void addFlowerToShop(Flower flower);
	void addFlowersToShop(Flower* flowers);
	void deleteFlowerFromShop(int index);
	void topMostExpensiveFlowers(int quantity);
	void mostExpensiveFlower();
	void showAllFlowers();
	friend std::ostream& operator << (std::ostream& out, FlowerShop& flower);
	~FlowerShop();
};


#endif
