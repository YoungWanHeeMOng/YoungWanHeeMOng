#define _CRT_SECURE_NO_WARNINGS

#include <chrono>
#include <time.h>    
#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>



// Get current date / time, format is YYYY - MM - DD.HH:mm:ss
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

int main()
{
    auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();

    for (int i = 0; i < 100; i++)
    {
        start = std::chrono::system_clock::now();
        std::this_thread::sleep_for(std::chrono::microseconds(1000));
        end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end - start;
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);

        std::cout << "finished computation at " << std::ctime(&end_time)
            << "elapsed time: " << elapsed_seconds.count() << "s\n";
       
    }
    std::cout<<std::endl;
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "finished computation at " << std::ctime(&end_time)
        << "elapsed time: " << elapsed_seconds.count() << "s\n\n";

    for (int i = 0; i < 100; i++)
    {
        std::cout << i << " : currentDateTime()=" << currentDateTime() << std::endl;
        //std::this_thread::sleep_for(std::chrono::microseconds(1000));
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
     }
    
    time_t now = time(nullptr);
    time_t mnow = now * 1000;
    std::cout << std::endl;
    std::cout << "seconds since epoch: " << now << std::endl;
    std::cout << "milliseconds since epoch: " << mnow << std::endl << std::endl;
}