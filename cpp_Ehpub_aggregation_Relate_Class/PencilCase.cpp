#include "PencilCase.h"
#include <iomanip>

PencilCase::PencilCase(size_t capacity):capacity(capacity)
{
    base=new Pencil*[capacity];
    count =0;
}
PencilCase::~PencilCase()
{
    delete [] base;
}
bool PencilCase::PushBack(Pencil* pencil)
{
    if (count < capacity)
    {
        base[count] = pencil;
        count++;
        return  true;
    }
    return false;
}
void PencilCase::List()const
{
    cout << left << setw(10) << " 회사 " << right << setw(5) << " 가격 " <<endl;
    for (size_t i = 0; i < count; i++)
    {
        cout << left << setw(10) << base[i]->GetCompany();
        cout << right << setw(5) << base[i]->GetPrice() << endl;
    }
}
size_t PencilCase::GetCount()const
{
    return count;
}
Pencil*& PencilCase::operator[](size_t index)
{
    if ((index < 0) || (index >= count))
    {
        throw "인덱스가 범위를 벗어났습니다.";
    }
    return base[index];
}