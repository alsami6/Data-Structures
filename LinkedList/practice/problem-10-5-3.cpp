#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    int val;

    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        l.push_back(val);
    }

    auto front = l.begin();
    auto back = prev(l.end());

    bool is_palindrome = true;

    while(distance(front, back) > 0){
        if(*front != *back) {
            is_palindrome = false;
            break;
        }
        front++;    
        back--;
    }

    if (is_palindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}