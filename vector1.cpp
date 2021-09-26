#include<bits/stdc++.h>
using namespace std;


bool fun(int a,int b){
return (a>b);

}
int main(){
  //vector<int> v(5,3);
vector<int> v;
vector<int> ::iterator it;
v.push_back(40);
v.push_back(6);
v.push_back(4);
v.push_back(9);
v.push_back(2);
/*
for(int i=0;i<=v.size();i++){
    cout<<v[i]<<endl;
}*/
//sort(v.begin(),v.end(),fun);
sort(v.begin(),v.end(),fun);
//sort(v.begin(),v.end()+3);
for(it=v.begin();it!=v.end();it++){
    cout<<*it<<endl;

}
}
