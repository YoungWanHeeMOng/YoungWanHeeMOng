
#define _CRT_SECURE_NO_WARNINGS

#include <chrono>
#include <time.h>    
#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>
#include <Windows.h>

using namespace std;

void WINAPI GetLocalTime(
    _Out_ LPSYSTEMTIME lpSystemTime
);

int main()
{
    SYSTEMTIME st;
    char surrentTime[84]="";

    for (int i =0; i < 1000 ; i++)
    {
    GetLocalTime(&st);
    sprintf_s(surrentTime,"%d / %d / %d %d:%d:%d %d", st.wDay, st.wMonth, st.wYear, st.wHour, st.wMinute, st.wSecond, st.wMilliseconds);

    std::cout << i << " : Current PC Time : " << surrentTime << std::endl;
    std::this_thread::sleep_for(std::chrono::microseconds(1));
    system("cls");
    }

return 0;
}
