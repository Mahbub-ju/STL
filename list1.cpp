#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[7]={4,3,7,8,6,5,9};
    list<int>li(ar,ar+7);
    list<int>:: iterator it;
   // it=li.begin();
   // it++;
    //li.insert(it,100);
   // cout<<*it<<endl;
   li.pop_front();
   li.pop_back();
   it=find(li.begin(),li.end(),8);
   int dis=distance(li.begin(),it);

   cout<<dis<<endl;
   /*if(it==li.end()){
    cout<<"found"<<endl;
   }
   else cout<<"not found"<<endl;*/

   li.insert(it,100);
   li.erase(it);

    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<" ";
    }



}

