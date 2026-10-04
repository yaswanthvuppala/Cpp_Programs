#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int deg_a(vector<int> arr,int n){


 vector<int> v;

 int count=0;
 bool have=false;
 v.push_back(arr[0]);
 for(int i=1;i<n;i++){
    for(int j=0;j<v.size();j++){
        if(v[j]==arr[i]) have=true;
    }
    if(have==false) v.push_back(arr[i]);
    have=false;

 }
int deg=0;
for(int i=0;i<v.size();i++){
    int cur=0;
    for(int j=0;j<n;j++){
        if(v[i]==arr[j]) cur++;

    }
    deg=max(cur,deg);

}
return deg;}

int main(){
 int n=7;

 vector<int> arr[7]={1,2,2,3,1,4,2};
 int deg=deg_a(arr,7);
vector<int> v;
 for(int i=0;i<1;i++){
    for(int j=i;j<n;j++){
        for(int g=j;g<n;g++) {
            v.push_back(arr[g]);

        };
        if(deg==deg_a(v,v.size())) {
            
        }
       cout<<" "; 
    }
    cout<<endl;
 }

}