#include <bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;
    // allocate 3 nodes in heap
    one = new node();
    two = new node();
    three = new node();
    // assign value
    one->value = 1;
    two->value = 2;
    three->value = 3;
    // connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;
    // print the linkedlist
    while (head != NULL){
        cout << head->value << endl;
        head = head->next;
    }
}