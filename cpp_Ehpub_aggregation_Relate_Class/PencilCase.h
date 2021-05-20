#pragma once
#include "Pencil.h"

class PencilCase
{
    Pencil **base ;  // 저장소
    const size_t capacity; // 용량
    size_t count ;      //보관 요소 개수

 public:
    PencilCase(size_t capacity);
    ~PencilCase();
    bool PushBack(Pencil *pencil);
    void List()const;
    size_t GetCount()const;
    Pencil *&operator[](size_t index);
};

