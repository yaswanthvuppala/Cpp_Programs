#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;

void fun(int x)
{
    while (x-- > 0)
    {
        cout << x << endl;
    }

    std::this_thread::sleep_for(seconds(3));
}

int main()
{

    cout << "main()" << endl;
    std::thread t1(fun, 9);
    t1.join();
    //Don't call join twice for a same thread
    cout<<t1.joinable()<<endl;
    //joinable() Function Is used to check wheather the thread is joinable or not at that moment
    cout << "Main()After" << endl;
    return 0;
}