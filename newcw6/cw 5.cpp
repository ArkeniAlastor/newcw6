#include<iostream>
#include "Product.h"
using namespace std;

int main()
{
    Product a("Laptop", "Electronics", 45000, 2.5);
    a.Print();

    Product b;
    b.Input();
    b.Print();

    b.SetName("Smartphone");
    b.SetCategory("Electronics");
    b.SetPrice(30000);
    b.SetWeight(0.3);
    b.Print();

    cout << "Name: " << b.GetName() << endl;
    cout << "Category: " << b.GetCategory() << endl;
    cout << "Price: " << b.GetPrice() << endl;
    cout << "Weight: " << b.GetWeight() << endl;
}