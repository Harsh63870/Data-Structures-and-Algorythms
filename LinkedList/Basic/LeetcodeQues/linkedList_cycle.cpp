#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = nullptr;
        }
};
Node* detect_and_tellStarting(Node* head){
    if(head == NULL || head->next == NULL) return nullptr;
    Node* slow = head;
    Node* fast = head;
    while(fast == nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }
    if(fast == nullptr && fast->next == nullptr) return nullptr;
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
Node* insertAtEnd(Node* head , int data){
    if(head == nullptr) return new Node(data);
    Node * temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* node = new Node(data);
    temp->next = node;
    return head;
}
int main(){
    Node* head = new Node(1);
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int data;
        cin>>data;
        head = insertAtEnd(head, data);
    }
    head = detect_and_tellStarting(head);
    cout << head->data <<endl;
    return 0;
}