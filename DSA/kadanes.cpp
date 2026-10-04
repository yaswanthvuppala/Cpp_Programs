#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;


int kande(int arr[],int n){
    int max_v=INT_MIN;int cur=0;
    for(int i=0;i<n;i++){
         cur+=arr[i];
         max_v=max(cur,max_v);
         if(cur<0) cur=0;

    }

return max_v;

}

int main(){
// Brute Force O(n^2)
int n=5;
int arr[5]={1,2,-3,-4,5};
int max_v=INT_MIN;
for(int i=0;i<n;i++){
    int cur=0;
    for(int j=i;j<n;j++){
        cur+=arr[j];
        max_v= max(max_v,cur);

    }

}

cout<<kande(arr,n);
}