#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(26, 0);
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        int index = ch - 'a';
        v[index]++;
    }

    for(int i = 0; i < 26; i++){
        if(v[i] > 0){
            cout << char('a' + i) << " : " << v[i] << endl;
        };
    }
    
    return 0;
}