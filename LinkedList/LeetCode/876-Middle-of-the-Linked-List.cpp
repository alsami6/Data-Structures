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
    newnode = tail;
}

void print_from_node(Node* node){
    while (node != NULL){
        cout << node->val << " ";
        node = node->next;
    }
}

Node* find_middle_node(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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

    Node* middle = find_middle_node(head);
    print_from_node(middle);

    return 0;
}