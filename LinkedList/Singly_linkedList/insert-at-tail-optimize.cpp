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
        return;
    }

    // Node* tmp = head;
    // while(tmp->next != NULL){
    //     tmp = tmp->next;
    // }
    // tmp->next = newnode;
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main(){
    Node* head = new Node(10);  
    Node* a = new Node(20);
    Node* b = new Node(30);  
    Node* tail = new Node(40);


    head->next = a;
    a->next = b;
    b->next = tail;

    insert_at_tail(head, tail, 100);
    // insert_at_tail(head, 300);
    // insert_at_tail(head, 500);
    // insert_at_tail(head, 600);
    
    print_linked_list(head);

    cout << "tail: " << tail->val << endl;

    return 0;
}