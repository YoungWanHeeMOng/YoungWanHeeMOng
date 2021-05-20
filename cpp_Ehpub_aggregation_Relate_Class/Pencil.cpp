#include "Pencil.h"

Pencil::Pencil(string company, int price)
{
    this->company=company;
    this->price=price;
}
string Pencil::GetCompany()const
{
    return company;
}
int Pencil::GetPrice()const
{

return price;
}