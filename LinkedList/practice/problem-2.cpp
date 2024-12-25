#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

bool check_dublicate(Node* head)
{
    vector<int> freq(105,0);
    Node* tmp = head;

    while(tmp != NULL){
        if(freq[tmp->val] > 0){
            return true;
        }
        freq[tmp->val]++;
        tmp = tmp->next;
    }
    return false;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }

    if(check_dublicate(head)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}