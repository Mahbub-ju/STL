#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int>dq;
dq.push_back(5);
dq.push_back(56);
dq.push_back(8);
dq.push_back(13);
dq.push_front(26);
/*
cout<<dq.front()<<endl;
cout<<dq.back()<<endl;
dq.pop_back();
dq.pop_front();

if(!dq.empty()){
    cout<<"true"<<endl;
}
else cout<<"false"<<endl;
*/
/*for(auto it=dq.begin();it!=dq.end();it++){
    cout<<*it<<" ";
}
*/
/*
while(!dq.empty()){
    int x=dq.front();
    cout<<x<<" ";
    dq.pop_front();
}*/
while(!dq.empty()){
    int y=dq.back();
    cout<<y<<" ";
    dq.pop_back();
}
}
