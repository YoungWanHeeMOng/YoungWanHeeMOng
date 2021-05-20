#pragma once
#include "Worker.h"

class Company
{
    Worker **workers;
    size_t capacity;
    size_t count;
    size_t last_wi;     // 가장 최근에 일한 사원의 인덱스
    public:
    Company(size_t capacity);
    ~Company();
    bool InWorker(Worker *worker);
    void DoProject(size_t size);
    void List()const;
    size_t GetCount()const;
    Worker *&operator[](size_t index);


};

