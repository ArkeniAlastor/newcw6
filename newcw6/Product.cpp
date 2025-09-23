#include "Product.h"
#include <iostream>
using namespace std;

Product::Product()
{
    name = "";
    category = "";
    price = 0;
    weight = 0;
}

Product::Product(string n, string cat, double pr, double we)
{
    name = n;
    category = cat;
    price = pr;
    weight = we;
}

void Product::Print()
{
    cout << name << "\t" << category << "\t" << price << "\t" << weight << endl;
}

void Product::Init(string n, string cat, double pr, double we)
{
    name = n;
    category = cat;
    price = pr;
    weight = we;
}

void Product::Input()
{
    char buff[50];
    cout << "Enter name: ";
    cin.getline(buff, 50);
    name = buff;

    cout << "Enter category: ";
    cin.getline(buff, 50);
    category = buff;

    cout << "Enter price: ";
    cin >> price;
    cout << "Enter weight: ";
    cin >> weight;
    cin.ignore();
}

// Геттеры
string Product::GetName() { return name; }
string Product::GetCategory() { return category; }
double Product::GetPrice() { return price; }
double Product::GetWeight() { return weight; }

// Сеттеры
void Product::SetName(string n) { name = n; }
void Product::SetCategory(string cat) { category = cat; }
void Product::SetPrice(double pr) { price = pr; }
void Product::SetWeight(double we) { weight = we; }