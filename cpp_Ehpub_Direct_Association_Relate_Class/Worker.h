#pragma once
#include <iostream>
#include <string>
using namespace std;


class Worker
{
    string name;
public:
    Worker(string name);
    void Work();
    string GetName()const;
};

