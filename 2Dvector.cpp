#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
vector<vector<int>>v{
{3,4,5},
{6,7,8},
{9,14,15},
{13,16,18}

};
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}*/

vector<vector<int>>vec;
int row=4,col=3,val=3;
for(int i=0;i<row;i++){
        vector<int>v;
    for(int j=0;j<col;j++){
        v.push_back(val);
        val+=2;
    }
 vec.push_back(v);
}
vec[1].pop_back();//vec[row_position].pop_back();
for(int i=0;i<vec.size();i++){  //for(int i=0;i<row;i++)
    for(int j=0;j<vec[i].size();j++){ //for(int j=0;j<col;j++)
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
}
