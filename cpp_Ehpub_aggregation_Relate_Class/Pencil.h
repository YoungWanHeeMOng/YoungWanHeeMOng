#pragma once

#include <iostream>
#include <string>
using namespace std;


class Pencil
{
    string company;
    int price;
 public:
    Pencil(string company, int price);
    string GetCompany()const;
    int GetPrice()const;
};

