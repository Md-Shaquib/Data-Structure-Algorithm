#include<bits/stdc++.h>
using namespace std;

//Structure of Node
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next =NULL;
    }
};

//Insertion at head
void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    
    if(head==NULL)
    {
        head = n;
        return;
    }

    n->next = head;
    head =n;
}

//Insertion at tail
void insertAtTail(node* &head, int val)
{

    node* n = new node(val);

    if(head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp -> next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

//Searching an element
bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

//Deletion at head
void deleteAtHead(node* &head)
{
    node* todelete = head;
    head = head ->next;
    delete todelete;
}

//Deletion in linked list
void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!= val)
    {
        temp = temp ->next;
    }
    node* todelete = temp ->next;
    temp->next = temp->next->next;
    delete todelete;
}

//Printing the list
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    display(head);
    cout<<endl;
    cout<<search(head, 1);
    cout<<endl;
    deletion(head, 3);
    display(head);
    deleteAtHead(head);
    cout<<endl;
    display(head);  

    return 0;
}