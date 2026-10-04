#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){

int arr[4]={2,7,11,15};
vector<int> v;

// for(int i=0;i<4;i++){
//     int sum=0;
//     for(int j=i+1;j<4;j++){
//         sum=arr[i]+arr[j];
//         if(sum==9){
//             v.push_back(i);
//             v.push_back(j);
//             break;
//         }
//     }
//     if(!v.empty()) break;
// }
// cout<<v[0]<<v[1];


int i=0;int j=3;
while(i<j){
    if(arr[i]+arr[j]>9) j--;
    else if(arr[i]+arr[j]<9) i++;
    else break;
}
cout<<i<<j;
}