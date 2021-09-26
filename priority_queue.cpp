#include<bits/stdc++.h>
using namespace std;



int main(){

priority_queue<int> q;

q.push(40);
q.push(60);
q.push(45);
q.push(90);
q.push(20);

while(!q.empty()){
    int x=q.top();
    cout<<x<<endl;
    q.pop();
}

}


