#include<bits/stdc++.h>
using namespace std;

vector<int> myfun(vector<int>&v,vector<int>&v2){
    vector<int>c;
    c.insert(c.begin(),v2.begin(),v2.end());
    c.insert(c.end(),v.begin(),v.end());

    return c;
}

int main(){
    int n;
    cin >> n;

    vector<int>v(n);
    vector<int>v2(n);

    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    } 

    for(int i = 0; i < v2.size(); i++){
        cin >> v2[i];
    }

    vector<int> c = myfun(v,v2);

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }


    return 0;
}