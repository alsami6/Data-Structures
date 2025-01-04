#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    list<int> l2;
    int val;

    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        l.push_back(val);
    }

    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        l2.push_back(val);
    }

    if(l == l2){
        cout << "YES" << endl; 
    }
    else if(l != l2){
        cout << "NO" << endl;
    }

    return 0;
}