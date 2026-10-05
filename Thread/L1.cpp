#include <iostream>
#include <thread>
#include <chrono>

using namespace  std;
using namespace  chrono;


int main(){

    auto fun = [](int x){
        while(x-- > 0){
             cout<<x<<endl;
        }
    };

    std::thread t1(fun,9);
    t1.join(); 

    return 0;
}