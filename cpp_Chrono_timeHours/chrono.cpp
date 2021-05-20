/*
    std::chrono::time_point<>: represents a point of time
        00:00 January 1, 1979  (Corordingted Universal Time - UTC)
    time_point(system_clock, millisesonds>:

    system_clock::time_point
*/


#include <chrono>
#include <iostream>
#include <thread>

using namespace std;


int main()
{

    chrono::microseconds mi(2700);      // 2700 microseconds
    mi.count();                                             // 2700
    cout << "microseconds : " << mi.count() << endl;
    chrono::nanoseconds na=mi;              // 2700000 nanoseconds
    na.count();         // 2700000
    cout << "nanoseconds : " << na.count() << endl;
    chrono::milliseconds mil=chrono::duration_cast<chrono::milliseconds> (mi);  // 2 milleseconds
    mi=mil+mi;     // 2000 + 2700 = 4700
    for (int i=0; i < 3; i++)
        cout << "microseconds : " << mi.count() << endl;
    cout << "-----------------------------------------------------------------------"<< endl;
    chrono::system_clock::time_point tp=chrono::system_clock::now();
    cout << tp.time_since_epoch().count() << endl;
    tp=tp+chrono::seconds(2);
    cout << tp.time_since_epoch().count() << endl;

    chrono::steady_clock::time_point start=chrono::steady_clock::now();
    cout << "I amd bored" << endl;
    chrono::steady_clock::time_point end = chrono::steady_clock::now();
    chrono::steady_clock::duration d=end-start;
    if (d == chrono::steady_clock::duration::zero())
    {
        cout << "no time  elapsed" << endl;
    }
    int i=0;
    while (true)
    { 
    start = chrono::steady_clock::now();
    
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    std::this_thread::sleep_for(std::chrono::microseconds(1));
    end = chrono::steady_clock::now();
    d = end - start;
    cout << i << " : "  << chrono::duration_cast<chrono::microseconds> (d).count() << endl;
    if (i < 1000 ) i++ ; else break;
    }
    return 0;
}