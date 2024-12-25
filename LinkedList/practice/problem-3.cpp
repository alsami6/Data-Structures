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

void insert_at_tail(Node* &head, Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = tail->next;
}

int sz(Node* head){
    Node* tmp = head;
    int cnt = 0;

    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
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

    int size = sz(head);

    Node* tmp = head;
    int index = size / 2;

    for(int i = 0; i < index; i++){
        tmp = tmp->next;
    }

    if(size % 2 != 0){
        cout << tmp->val << endl;
    }
    else{
        cout << tmp->val << " " << tmp->next->val << endl;
    }

    return 0;
}