#include<bits/stdc++.h>
using namespace  std;
int main(){
map<int,int>mp;
map<int,int>::iterator it;

 /*mp.insert({1,22});//mp[1]=22;
 mp.insert({2,44});// mp[2]=44;
 mp.insert({3,33});// mp[3]=33;
 mp.insert({4,44});//mp[4]=90;
 mp.insert({5,55});//  mp[5]=15;*/
 /*
if(mp.count(4)){
    cout<<"found"<<endl;
}
else cout<<"not found"<<endl;*/

/*if(mp.find(4)!=mp.end()){
    cout<<"found"<<endl;
}
else cout<<"not found"<<endl;*/

//mp.erase(5);

 //mp.erase(mp.begin(),mp.find(3));

 //int ar[]={1,2,1,2,3,4,5,5,6,};
/*
 for(int i=0;i<9;i++){
    mp[ar[i]]++;
 }*/
/*
for(it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}*/

 mp.insert({3,22});
 mp.insert({2,44});
 mp.insert({1,33});
 mp.insert({6,44});
 mp.insert({5,55});
 //mp.clear();
 for(auto it=mp.crbegin();it!=mp.crend();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;
 for(it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
if(!mp.empty()){
    cout<<"not empty"<<endl;
}
else cout<<"epmty"<<endl;
}
