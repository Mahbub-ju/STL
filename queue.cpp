#include<bits/stdc++.h>
using namespace std;

void fun(queue<int> q_ans ){
    while(!q_ans.empty()){
    int x=q_ans.front();
    cout<<x<<endl;
    q_ans.pop();
    }

}
int main(){

queue<int>q;

q.push(40);
q.push(60);
q.push(45);
q.push(90);
q.push(20);
q.push(6);
q.push(200);
//q.pop();
cout<<"size:"<<q.size()<<endl;
cout<<"front:"<<q.front()<<endl;
cout<<"back:"<<q.back()<<endl;
fun(q);


/*while(!q.empty()){
    int x=q.front();
    cout<<x<<endl;
    q.pop();
}
*/

}







