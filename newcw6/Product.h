#pragma once
#include <string>
using namespace std;

class Product
{
    string name;
    string category;
    double price;
    double weight;

    static int count;

public:
    Product();
    Product(string n, string cat, double pr, double we);

    void Print();
    void Init(string n, string cat, double pr, double we);
    void Input();

    string GetName();
    string GetCategory();
    double GetPrice();
    double GetWeight();

    void SetName(string n);
    void SetCategory(string cat);
    void SetPrice(double pr);
    void SetWeight(double we);

    static void ShowCount();
};

