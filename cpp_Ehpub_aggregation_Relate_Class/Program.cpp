
// 62. ���� (Aggregation) ����

#include "PencilCase.h"




int main()
{
    PencilCase pc(10);


    pc.PushBack(new Pencil("��������", 1000));
    pc.PushBack(new Pencil("���ʳ���", 1200));
    pc.PushBack(new Pencil("��������", 1300));
    pc.PushBack(new Pencil("���ʳ���", 1200));
    pc.PushBack(new Pencil("��������", 1600));
    pc.PushBack(new Pencil("���ʳ���", 1100));
    pc.PushBack(new Pencil("��������", 1500));
    pc.PushBack(new Pencil("���ʳ���", 1000));
    pc.PushBack(new Pencil("��������", 1700));
    pc.PushBack(new Pencil("���ʳ���", 1400));
    pc.List();
    size_t count=pc.GetCount();
    for (size_t i = 0; i < count; i++)
    {
        delete pc[i];
    }

    return 0;
}