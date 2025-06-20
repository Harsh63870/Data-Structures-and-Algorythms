#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
        int data;
        Node* next;
    public:
        Node(int val){
            data = val;
            next = nullptr;
        }

};
// converting the array to linked lst
Node * convertArrtoLL(vector <int> & vec){
    if(vec.empty()) return nullptr;
    Node* head = new Node(vec[0]);
    Node * temp = head;
    for(int i=1 ; i<vec.size() ; i++){
        Node* p = new Node(vec[i]);
        temp->next = p;
        temp = temp->next;
    }
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
// searching for an element in linkedlist
bool search(Node* head, int value){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == value) return true;
        temp = temp->next;
    }
    return false;
}
int main(){
    // int arr[4] = {1,2,3,4};
    // Node* node = new Node(arr[0]);
    // cout << node;
    vector<int> vec = {1,2,4,5,5,6,66,7,544,33,32};
    Node * head = convertArrtoLL(vec);
    cout << head->next->next->data << endl;
    traversal(head);
    return 0;
}