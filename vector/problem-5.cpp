#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    int flag = 0;


    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    for(int i = 0; i < v.size(); i++){
        auto it = find(v.begin(),v.end(),v[i]+1);
        if(it != v.end()){
            flag = flag + 1;
        }
    }
    
    cout << flag << endl;

    return 0;
}