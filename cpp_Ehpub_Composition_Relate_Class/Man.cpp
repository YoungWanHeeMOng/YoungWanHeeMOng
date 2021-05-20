#include "Man.h"

Man::Man()
{
    eyes[0] = new Eye(true);
    eyes[1] = new Eye(false);
}
Man::~Man()
{
    delete eyes[0];
    delete eyes[1];
}
void Man::Sleep()
{
    cout << "======== Sleep =========" << endl;
    eyes[0]->Close();
    eyes[1]->Close();
}
void Man::Walk()
{
    cout << "======== Walk =========" << endl;
    eyes[0]->Open();
    eyes[1]->Open();
    eyes[0]->See();
    eyes[1]->See();
    cout << "Go to front......" << endl;
}
void Man::Wink()
{
    cout << "======== Wink =========" << endl;
    eyes[0]->Open();
    eyes[1]->Close();
}
