#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> l,l2;
    int val;

    while(true){
        if(val == -1){
            break;
        }
        l.push_back(val);
    }

    while(true){
        if(val == -1){
            break;
        }
        l2.push_back(val);
    }

    if(l == l2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}