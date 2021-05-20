
#include "Company.h"


int main()
{

    Company *company=new Company(10);

    company->InWorker(new Worker("��浿"));
    company->InWorker(new Worker("������"));
    company->InWorker(new Worker("��������"));
    company->InWorker(new Worker("�Ѽ���"));

    company->List();

    company->DoProject(2);
    company->DoProject(7);

    size_t count =company->GetCount();
    for (size_t i = 0; i < count; i++)
    {
        delete (*company)[i];
    }
    delete company;


    return 0;
}