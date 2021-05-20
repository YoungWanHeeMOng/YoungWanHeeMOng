
// 62. 집합 (Aggregation) 관계

#include "PencilCase.h"




int main()
{
    PencilCase pc(10);


    pc.PushBack(new Pencil("연필좋아", 1000));
    pc.PushBack(new Pencil("연필나라", 1200));
    pc.PushBack(new Pencil("연필좋아", 1300));
    pc.PushBack(new Pencil("연필나라", 1200));
    pc.PushBack(new Pencil("연필좋아", 1600));
    pc.PushBack(new Pencil("연필나라", 1100));
    pc.PushBack(new Pencil("연필좋아", 1500));
    pc.PushBack(new Pencil("연필나라", 1000));
    pc.PushBack(new Pencil("연필좋아", 1700));
    pc.PushBack(new Pencil("연필나라", 1400));
    pc.List();
    size_t count=pc.GetCount();
    for (size_t i = 0; i < count; i++)
    {
        delete pc[i];
    }

    return 0;
}