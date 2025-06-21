#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    public:
        Node(int data){
            this->data = data;
            next = nullptr;
            prev = nullptr;
        }
};
Node* deleteNode(Node* head, int data){
    if(head == nullptr){
        return NULL;
    }
    Node * temp = head;
    while(temp != nullptr && temp->data != data){
        temp = temp->next;
    }
    // if the data is not found in th =e DLL
    if(temp == nullptr){
        cout << "Value not found !!" << endl;
        return head;
    }
    // if the data is the only node in the linked list 
    if(temp == head && temp->next == nullptr){
        delete temp;
        return nullptr;
    }
    // if the data is the head of the DLL
    if(temp == head){
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
        return head;
    }
    if(temp->next == nullptr){
        temp->prev->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return head;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
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
    cout << endl;
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
    head = deleteNode(head, 9);
    head = deleteNode(head , 37);
    traversal_Forward(head);
    traversal_Backword(head);
    return 0;
}