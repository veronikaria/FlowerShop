#include "FlowerShop.h"
#include "Bouquet.h"


int main()
{
	Flower f1 = Flower(90, 23, "red", 324, 22, 0.78);
	Flower f2 = Flower(58, 11, "yellow", 311, 23, 0.6);
	Flower f3 = Flower(60, 71, "white", 222, 24, 0.89);

	Bouquet bouquet = Bouquet();
	bouquet.addFlowerToBouquet(f1);
	bouquet.addFlowerToBouquet(f2);
	bouquet.addFlowerToBouquet(f3);
	cout << "Create a Bouquet" << endl;
	cout << "Bouquet after adding three flowers:" << endl;

	cout << bouquet << endl;

	cout << "Create FlowerShop" << endl;
	FlowerShop fs = FlowerShop();

	Flower f4 = Flower(50, 111, "blue", 450, 25, 0.99);
	Flower f5 = Flower(49, 567, "yellow", 90, 15, 0.8);

	fs.addFlowerToShop(f4);
	fs.addFlowerToShop(f5);

	cout << "FlowerShop after adding two flowers: " << endl;
	cout << fs << endl;
	Flower f6 = Flower(80, 900, "red", 357, 125, 0.9);
	Flower f7 = Flower(120, 1200, "white", 90, 25, 0.93);
	Flower f8 = Flower(50, 500, "white", 800, 22, 0.73);
	Flower f9 = Flower(40, 300, "blue", 630, 26, 0.85);

	Flower* flowers = new Flower[4]{ f6, f7, f8, f9 };
	fs.addFlowersToShop(flowers);
	cout << "FlowerShop after adding array of flowers: " << endl;
	cout << fs << endl << endl;

	cout << "Delete flower from Shop by 2 index" << endl;
	fs.deleteFlowerFromShop(2);
	cout << "Shop after deleting:" << endl;

	cout << fs << endl << endl;

	cout << "The most expensive flower in Shop: " << endl;
	fs.mostExpensiveFlower();
	cout << endl;
	cout << "TOP 3 most expensive flower in Shop: " << endl;
	fs.topMostExpensiveFlowers(3);

	cout << endl;

	system("pause");
	return 0;
}

