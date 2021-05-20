#pragma once
#include "Pencil.h"

class PencilCase
{
    Pencil **base ;  // �����
    const size_t capacity; // �뷮
    size_t count ;      //���� ��� ����

 public:
    PencilCase(size_t capacity);
    ~PencilCase();
    bool PushBack(Pencil *pencil);
    void List()const;
    size_t GetCount()const;
    Pencil *&operator[](size_t index);
};

