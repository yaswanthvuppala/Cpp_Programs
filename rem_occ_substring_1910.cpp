#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;




class Solution {
public:
    string removeOccurrences(string s, string part) {
        vector<char> st;
        st.push_back('1');
        int n=s.length();
        int c=part.length();
        for(int i=0;i<n;i++){
            if(s[i]==part[c-1]){
                int j=c-2;
                int x=st.size()-1;
                int l=0;
                bool check =true;
                while (j>=0){
                    if(!(part[j]==st[x-l])){
                        check=false;
                        break;

                    }
                    j--;l++;



                }
                if(check == true){
                    int z=c-2;
                    while(z>=0){
                        st.pop_back();
                        z--;
                    }

                }
                else {
                    st.push_back(s[i]);
                }
            }
            else{
                st.push_back(s[i]);
            }

        }
        string res="";
        while(!st.empty()){
         if(st.back()=='1') {st.pop_back();continue;}
            res+=st.back();
            st.pop_back();

        }
        reverse(res.begin(),res.end());


        return res;
    }
};