#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int arr[9]={1,4,6,2,5,4,8,3,7};
    int n=9;
    int i=0;int j=8;
    int maxi=0;

    while(i<j){
        int curr=0;
        int mi=min(arr[i],arr[j]);
        curr=mi*(j-i);
        if(maxi<curr) {
            
            maxi=curr;
        }
        if(mi==arr[i]) i++;
        else if(mi == arr[j]) j--;


    }

    cout<<maxi;

}