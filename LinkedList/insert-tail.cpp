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

void insert_at_tail(Node* &head,int val){
    Node* newnode = new Node(val);

    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newnode;
    
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
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c; 

    insert_at_tail(head, 100);
    print_linked_list(head);

    return 0;
}