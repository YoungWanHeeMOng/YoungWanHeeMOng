#include "Worker.h"

Worker::Worker(string name)
{
    this->name=name;
}
void Worker::Work()
{
    cout << name << " ÀÏÇÏ´Ù." <<endl;
}
string Worker::GetName()const
{
    return name;
}