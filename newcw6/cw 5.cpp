#include<iostream>
#include "Product.h"
using namespace std;

int main()
{
	Product a("Laptop", "Electronics", 45000, 2.5);
	a.Print();

	Product b;
	a.Input();
	a.Print();
}