#include "Worker.h"

Worker::Worker(string name)
{
    this->name=name;
}
void Worker::Work()
{
    cout << name << " ���ϴ�." <<endl;
}
string Worker::GetName()const
{
    return name;
}