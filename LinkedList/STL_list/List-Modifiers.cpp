#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,3,2,4,5};
    // list<int> l2(l);
    // l.push_back(1000);
    // l.pop_back();
    // l.push_front(90);
    // l.pop_front();

    // l.insert(next(l.begin(),2), 700);

    // cout << *next(l.begin(),2) << " ";

    // l.erase(next(l.begin(), 1), next(l.begin(), 3));

    // replace(l.begin(), l.end(), 2, 10);

    auto it = find(l.begin(), l.end(), 5);
    if(it == l.end()){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    // for(int val : l){
    //     cout << val << " ";
    // }
    

    return 0;
}