#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;
// node creation 
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    public:
        Node(int data , Node* next , Node* prev){
            this->data = data;
            this->prev = prev;
            this->next = next;
        }
    public:
        Node(int data){
            this->data = data;
            next = nullptr;
            prev = nullptr;
        }
};
// insertion of Node in the linked list 
Node* insertAtbeg(Node* head , int data){
    if(head == nullptr) return new Node(data);
    Node* temp = new Node(data);
    // Node* p = head;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
// forwardTraversal
void traversal_Forward(Node* head){
    if(head == nullptr) return;
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr" <<endl;
}
// backwardTraversal
void traversal_Backword(Node* head){
    if(head == nullptr){
        return;
    }
    Node* temp = head;
    while(temp->next!=nullptr){
        // cout << temp->data << "->";
        temp = temp->next;
    }
    Node* temp2 = temp;
    cout<<"nullptr";
    while(temp2 != NULL){
        cout << "<-";
        cout << temp2->data;
        temp2 = temp2->prev;
    }
    cout << endl;
}
Node* reverseDLL(Node* head){
    if(head == nullptr) return NULL;
    stack<int> stk;
    Node* temp = head;
    while(temp != nullptr){
        stk.push(temp->data);
        temp = temp->next;
    } 
    Node* p = head;
    while(p != nullptr){
        int ele = stk.top();
        stk.pop();
        p->data = ele;
        p = p->next;
    }
    return head;
}
int main(){
    Node * head = new Node(22);
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int data;
        cin>>data;
        head = insertAtbeg(head , data);
    }
    traversal_Forward(head);
    traversal_Backword(head);
    head = reverseDLL(head);
    traversal_Forward(head);
    traversal_Backword(head);
    return 0;
}