//This code consists of creation, Insertion at, beginning, at end, searching and printing of linked list
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val); //"n" is new node

    if(head==NULL) {
        head=n;
        return;
    }

    node* temp = head; //Agar head ko hi ek pointer to traverse lelete, bina temp liye, to head pointer hi linkedlist me move kar jayega. Kyuki head pointer ka address liya gaya hai na ki value i.e "node* &head"
    while (temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = n;
    
}

bool search(node* head, int val) {
    node* temp = head;
    while(temp!=NULL) {
        if(temp->data==val) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void insertAtHead(node* &head, int val) { //Agar head pe koi bhi operation karna ho to direct head use karke kardo, node* temp = head; banane ki zaroorat nahi, node* temp = head; tabhi banao jab tumhe LL me traverse karna ho
    node* n = new node(val);
    n->next = head;
    head = n;
}

void deleteAtHead(node* &head) {
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletionAtPos(node* &head, int val) {
    if(head==NULL) {
        return;
    }
    if(head->data==val) {
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next!=NULL && temp->next->data!=val) {
        temp = temp->next;
    }
    if(temp->next==NULL) {
        cout<<"Element not found in the list"<<endl;
        return;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

node* reverse(node* &head) {
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL) {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

bool detectCycle(node* &head) {
    node* fast = head;
    node* slow = head;

    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow) {
            return true;
        }
    }
    return false;

}


void display(node* head) {
    node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
 
int main() {
    node* head = NULL; //Abhi linked list khali hai

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    // cout<<search(head,3)<<endl; //<-This returns 1 if the val is present in the LL otherwise it returns 0
    // deletionAtPos(head,1);
    // deleteAtHead(head);
    // node* newhead = reverse(head);
    // display(newhead);
    //cout<<detectCycle(head); //This returns 1 if cycle is present, and 0 if not present

    return 0;
}