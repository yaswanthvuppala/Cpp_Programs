#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string res="";
        stack<char> st;int l=s.length();
        for(int i=0;i<l;i++){
            
            if(s[i]!='*') st.push(s[i]);
            else st.pop();
        }

        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());

        return res;
        
    }
};

int main(){


}