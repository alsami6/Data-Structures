#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
        if(v[i] > 0){
            cout << 1 << " ";
        }
        else if(v[i] < 0){
            cout << 2 << " ";
        }
        else{
            cout << 0 << " ";
        }
    }


    return 0;
}