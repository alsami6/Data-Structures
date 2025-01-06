#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }
};

void traverse(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void insert_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, int val){
    if(head == NULL){
        insert_at_head(head, val);
        return;
    }

    Node* newNdoe = new Node(val);
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNdoe;
};

void insert_at_middle(Node*&head, int val, int position){
    Node* newNode = new Node(val); 
    Node* tmp = head;
    int count = 1;
    while(count < position-1){
        tmp = tmp->next;
        count++;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void delete_at_start(Node* &head){
    if(head == NULL){
        return;
    }
    Node* tmp = head;
    head = head->next;
    free(tmp);
}

void delete_at_end(Node* head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        delete_at_start(head);
    }
    Node* tmp = head;
    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }
    Node* lastNode = tmp->next;
    tmp->next = NULL;
    free(lastNode);
}

void delete_at_middle(Node* &head, int position){
    Node* tmp = head;
    int cnt = 1;
    while(cnt < position-1){
        tmp = tmp->next;
        cnt++;
    }
    Node* curr = tmp->next;
    tmp->next = tmp->next->next;
    delete curr;
}

void delete_alt_node(Node* &head){
    Node* tmp = head;
    while(tmp != NULL && tmp->next != NULL){
            Node* deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            tmp = tmp->next;
            free(deleteNode);
    }
}

int find_middle_node(Node* &head){

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    // slow in now middle node
    return slow->val; 
}

bool checkEqual(Node* head, Node* head2){
    while(head && head2){
        if(head->val != head2->val){
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }
    return (head == NULL && head2 == NULL);
}

void reverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

bool check_palindrome(Node* head){
    if(head->next == NULL){
        return true;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* curr = slow;
    Node* prev = NULL;
    Node* next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    Node* head2 = prev;
    while(head2 != NULL){
        if(head->val != head2->val){
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }

    return true;

};

void rotateByK(Node* &head, int k){
    Node* tmp = head;
    int n = 1;
    while(tmp->next != NULL){
        n++;
        tmp = tmp->next;
    }
    k = k % n;
    if(k == 0){
        return;
    }
    tmp->next = head;
    tmp = head;
    for(int i = 1; i < (n-k); i++){
        tmp = tmp->next;
    }
    Node* newHead = tmp->next;
    tmp->next = NULL;
    head = newHead;
}

int main(){
    Node* head = NULL;
    insert_at_tail(head,1); 
    insert_at_tail(head,2); 
    insert_at_tail(head,3); 
    insert_at_tail(head,4); 
    insert_at_tail(head,5); 
    // insert_at_tail(head,6); 

    traverse(head);
    rotateByK(head,2);
    cout << endl;
    traverse(head);

    return 0;
}