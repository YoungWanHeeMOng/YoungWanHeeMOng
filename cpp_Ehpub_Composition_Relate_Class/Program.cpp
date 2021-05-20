
#include "Man.h"



int main()
{
    Man *man=new Man();

    man->Walk();
    man->Wink();
    man->Sleep();
    delete man;


    return 0;
}