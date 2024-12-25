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
    Node* newnode =new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
};

bool check_list(Node* &head){
    Node* tmp = head;

    while(tmp != NULL && tmp->next != NULL) {
        if(tmp->val > tmp->next->val) {
            return false;
        }
        tmp = tmp->next;
    }
    return true;
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
        insert_at_tail(head, tail, val);
    }

    if(check_list(head)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}