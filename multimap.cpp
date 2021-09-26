#include<bits/stdc++.h>
using namespace std;
int main(){
multimap<string,int>mm;
mm.insert(make_pair("Mahbub",24));
mm.insert(make_pair("sumon",23));
mm.insert(make_pair("saddam",22));
mm.insert(make_pair("Mahbub",24));
mm.insert(make_pair("sumon",40));

for(auto it=mm.begin();it!=mm.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

}
