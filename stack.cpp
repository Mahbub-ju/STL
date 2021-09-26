#include<bits/stdc++.h>
using namespace std;
int main(){

stack<int>st;

st.push(40);
st.push(60);
st.push(45);
st.push(90);
st.push(20);
st.push(6);
st.push(200);
st.pop();
cout<<st.size()<<endl;

while(!st.empty()){
    int x=st.top();
    cout<<x<<endl;
    st.pop();
}

}



