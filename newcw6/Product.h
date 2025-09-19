#pragma once
#include <string>
using namespace std;

class Product
{
	string name;
	string category;
	double price;
	double weight;
public:
	Product();
	Product(string n, string cat, double pr, double we);
	void Print();
	void Init(string n, string cat, double pr, double we);
	void Input();

	void SetName(char* n);
	string GetName();

};

