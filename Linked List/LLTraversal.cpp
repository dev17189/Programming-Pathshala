#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
void traversal(Node *head){
    Node *temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void rectrav(Node *head){
    if(head==0) return;
    cout<<head->data<<" ";
    return rectrav(head->next);
}
int main(){
    Node *first=new Node(2);
    first->next= new Node(5);
    first->next->next=new Node(8);
    traversal(first);
    cout<<endl;
    rectrav(first);
}