#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    set<int> ::iterator it;
    s.insert(5);
    s.insert(4);
    s.insert(9);
    s.insert(51);
    s.insert(13);
    s.insert(3);
    if(s.find(4)!=s.end()){
        cout<<"value is found"<<endl;
    }
    else
        cout<<"value is not found"<<endl;

   // it=s.find(13);
   // s.erase(it);
   s.erase(s.find(13));
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
}
