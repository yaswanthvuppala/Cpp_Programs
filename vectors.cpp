#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    v.push_back(9);
    cout<<v.capacity();
    
}