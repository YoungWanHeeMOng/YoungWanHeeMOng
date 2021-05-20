#pragma once
#include <iostream>
#include <string>
using namespace std;

class Eye
{
    bool isopened;
    bool left;
public:
    Eye(bool left);
    void Close();
    void Open();
    void See();
    bool IsOpened()const;


};

