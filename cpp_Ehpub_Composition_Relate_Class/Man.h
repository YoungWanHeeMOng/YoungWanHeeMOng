#pragma once
#include "Eye.h"

class Man
{
    Eye *eyes[2];

 public:
    Man();
    ~Man();
    void Sleep();
    void Walk();
    void Wink();

};

