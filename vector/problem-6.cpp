#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    vector<int>v(n);

    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    for(int i = 0; i < t; i++){
        int l,r;
        cin >> l >> r;
        int sum = 0;

        for(int k = l-1; k <= r-1; k++){
            sum += v[k];
        }
        cout << sum << endl;
    }


    return 0;
}