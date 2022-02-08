#ifndef BOUQUET_H
#define BOUQUET_H
#include "Flower.h"


class Bouquet
{
private:
	Flower* arr;
	int ind;
public:
	Bouquet();
	void addFlowerToBouquet(Flower flower);
	int getQuantity();
	Flower* getFlowers();
	double totalBouquetPrice();
	~Bouquet();
	friend std::ostream& operator << (std::ostream& out, Bouquet& bouquet);
};


#endif
