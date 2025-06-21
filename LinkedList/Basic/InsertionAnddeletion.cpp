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
    if(temp == nullptr){
        cout << "Value not found !!" << endl;
        return head;
    }
    if(temp->next == nullptr){
        temp->prev->next = nullptr;
        delete temp;
        return head;
    }
    if(temp == head && temp->next == nullptr){
        delete temp;
        return nullptr;
    }
    if(temp == head){
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
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