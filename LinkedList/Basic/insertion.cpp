#include <iostream>
#include <string>
using namespace std;
class Node{
    public: 
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};
Node* insertAtBeggining(Node * head, int data){
    if(head == nullptr) return new Node(data);
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
}
// insert at the end
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
// inset at the index
Node* insertAtIndex(Node* head, int data, int index){
    if(head == nullptr) return new Node(data);
    Node* temp = head;
    Node* temp2 = head->next;
    // if index is greater then the size then invalid is check by base case 
    int k = index-1;
    while(k--){
        temp = temp->next;
        //temp2 = temp2->next;
    }
    if(temp == nullptr){
        cout << "out of bound !!" << endl;
        return head;
    }
    Node* newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
void traversal(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL";
}
// freeing memory
void freememory(Node* head){
    Node* temp = head;
    while(head){
        temp = head;
        head = head->next;
        delete temp;
    }
}
int main(){
    Node * head = new Node(1);
    head = insertAtBeggining(head, 22);
    head = insertAtEnd(head, 9);
    head = insertAtIndex(head , 37, 2);
    traversal(head);
    freememory(head);
    return 0;
}