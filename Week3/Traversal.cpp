#include <bits/stdc++.h>
using namespace std;
struct node{
    int value;
    struct node *next;
};
void Insert(node* &head, int value){
    node* newNode = new node();
    newNode->value = value;
    newNode->next = NULL;
    if (head == NULL){
        head = newNode;
    } else {
        node *temp = head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void printList(node* head){
    node* temp = head;
    while (temp != NULL){
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node *head = NULL;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        Insert(head,val);
    }
    printList(head);
    // Insert head
    node *FirstNode;
    FirstNode = new node();
    FirstNode->value = 3;
    FirstNode->next = head;
    head = FirstNode;
    printList(head);
    // Insert tail
    node *LastNode;
    LastNode = new node();
    LastNode->value = 7;
    LastNode->next = NULL;
    node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = LastNode;
    printList(head);
}