#include "Company.h"


Company::Company(size_t capacity)
{
    this->capacity=capacity;
    workers=new Worker *[capacity];
    count=0;
    last_wi=-1;  /// ���� �ֽſ� ���� ���
}
Company::~Company()
{
    delete[] workers;
}
bool Company::InWorker(Worker* worker)
{
    if (count >= capacity)
    {
        return false;
    }
    workers[count]=worker;
    count ++;
    return true;
}
void Company::DoProject(size_t size)
{
    cout << "=== ������Ʈ ���� ====" << endl;
    for (size_t i=0; i < size; i++)
    {
        last_wi=(last_wi+1)% count;
        workers[last_wi]->Work();
    }
}
void Company::List()const
{
    cout << "=== ���� ��� ===" << endl;
    for (size_t i = 0; i < count; i++)
    {
        cout << workers[i]->GetName() << " ";

    }
    cout << endl;
}
size_t Company::GetCount()const
{
    return count;
}
Worker*& Company::operator[](size_t index)
{
    if ((index < 0) || (index >= count))
    {
        throw "��ȿ���� ���� �ε����Դϴ�.";
    }
    return workers[index];
}


