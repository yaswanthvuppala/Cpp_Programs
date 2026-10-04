#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;

typedef unsigned long long ull;

ull Even = 0;
ull Odd = 0;

void SumEven(ull start, ull end) {
    for (ull i = start; i <= end; ++i) {
        if ((i & 1) == 0) Even += i;
    }
}

void SumOdd(ull start, ull end) {
    for (ull i = start; i <= end; ++i) {
        if ((i & 1) == 1) Odd += i;
    }
}

int main() {
    ull start = 0, end = 1900000000;
    
    auto time_start = high_resolution_clock::now();
    
    std :: thread t1(SumEven,start,end);
    std :: thread t2(SumOdd,start,end);
    // SumEven(start, end);
    // SumOdd(start, end);

    t1.join();
    t2.join();

    auto time_end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(time_end - time_start);
    cout << "Even: " << Even << "\n";
    cout << "Odd: " << Odd << "\n";
    cout << "Time: " << duration.count() << " ms\n";

    return 0;
}