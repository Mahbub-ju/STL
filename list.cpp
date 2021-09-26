#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>li;
    list<int>:: iterator it;
    li.push_back(8);
    li.push_back(82);
    li.push_back(78);
    li.push_back(45);
    li.push_back(56);
    li.push_back(17);
    li.push_front(10);
    //li.reverse();
    //li.size();
    //li.sort();
    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<" ";
    }



}
