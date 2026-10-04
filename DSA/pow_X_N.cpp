#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

double pow_X(double x,int n){
    if(x==1) return 1.0;
    if(x==0) return 0;
    if(x==-1  && n%2==0) return 1;
    if(x==-1 && n%2==1) return -1;
    long binfoam=n;
    double ans=1;
    if(n<0) {
        x=1/x;
        binfoam=-binfoam;
    }

    while(binfoam>0){

        if(binfoam %2==1){
            ans*=x;
        }
        x*=x;
        binfoam/=2;

    }

    return ans;

}

int main(){


}