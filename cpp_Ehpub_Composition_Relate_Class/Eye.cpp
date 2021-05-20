#include "Eye.h"


Eye::Eye(bool left)
{
    this->left=left;
    isopened=false;
}
void Eye::Close()
{
    if (isopened)
    {
        if (left)
        {
            cout << "왼쪽 문을 감다." << endl;
        }
        else
        {
            cout << "오른쪽 문을 감다." << endl;
        }
        isopened=false;
    }
}
void Eye::Open()
{
    if (isopened == false)
    {
        if (left)
        {
            cout << "왼쪽 문을 뜨다." << endl;
        }
        else
        {
            cout << "오른쪽 문을 뜨다." << endl;
        }
        isopened = true;
    }
}
void Eye::See()
{
    Open();
    if (left)
    {
        cout <<"왼쪽 눈으로 보다." << endl;
    }
    else
    {
        cout << "오른쪽 눈으로 보다." << endl;
    }
}
bool Eye::IsOpened()const
{

    return isopened;
}