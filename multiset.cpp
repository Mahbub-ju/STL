#include<bits/stdc++.h>
using namespace std;
int main(){
multiset<int>ms;
ms.insert(20);
ms.insert(30);
ms.insert(10);
ms.insert(20);
ms.insert(50);
ms.insert(40);
ms.insert(30);
for(auto it=ms.begin();it!=ms.end();it++){
    cout<<*it<<endl;
}

}
