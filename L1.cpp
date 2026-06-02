#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void explainvector(){
    vector<int> v;
    v.push_back(1);
	v.push_back(1);v.push_back(2);v.push_back(3);
    v.emplace_back(2);
    
    vector<int> p(5,900);
    vector<pair<int,int>> g;
    g.push_back({1,2});
	
	vector<int>::iterator it =v.begin(); it=it+4;
	cout<<*(it);
	vector<int>::iterator t=v.end();t=t-1;
	cout<<"\n"<<*(--t);
	cout<<"\n"<<v.back();
	
	for(auto e =v.begin();e!=v.end();e++){
		cout<<"\n"<<*(e);
		

}
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(4553);
	cout<<s.top();
	}



int main(){
	explainvector();
    return 0;
}