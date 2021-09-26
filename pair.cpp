#include<bits/stdc++.h>
using namespace std;
int main(){
/*pair<string,int>p;//("mahbub",24);
//p.first="MAhbub";
//p.second=24;
p=make_pair("mahbub",24);
cout<<p.first<<" "<<p.second<<endl;*/
vector<pair<string,int>>v;
v.push_back(make_pair("mahbub",24));
v.push_back(make_pair("sumon",22));
v.push_back(make_pair("saidur",20));
v.push_back(make_pair("jamil",25));
//cout<<v[0].first<<" "<<v[0].second<<endl;
sort(v.begin(),v.end());
for(auto it=v.begin();it!=v.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

}
