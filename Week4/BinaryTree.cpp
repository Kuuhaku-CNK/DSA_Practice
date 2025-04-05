#include <bits/stdc++.h>
using namespace std;
struct TNODE{
    int key;
    TNODE* pLeft;
    TNODE* pRight;
};
TNODE* createNode(int x){
    TNODE* newNode = new TNODE;
    newNode->key = x;
    newNode->pLeft = NULL;
    newNode->pRight = NULL;
    return newNode;
}
TNODE* insertNode(TNODE* root, int x){
    if (root == NULL){
        return createNode(x);
    }
    if (x < root->key){
        root->pLeft = insertNode(root->pLeft, x);
    }
    else if (x > root->key){
        root->pRight = insertNode(root->pRight,x);
    }
    return root;
}
void inorderTraversal(TNODE* root){
    if (root != NULL){
        cout << root->key << " ";
        inorderTraversal(root->pRight);
        inorderTraversal(root->pLeft);
    }
}
TNODE* deleteNode(TNODE* root, int key) {
    if (root == NULL) return root; // Nếu cây rỗng, không cần xóa gì cả

    // Tìm node cần xóa
    if (key < root->key) {
        root->pLeft = deleteNode(root->pLeft, key);
    } else if (key > root->key) {
        root->pRight = deleteNode(root->pRight, key);
    } else { 
        // Trường hợp 1: Node là lá hoặc chỉ có một con
        if (root->pLeft == NULL) {
            TNODE* temp = root->pRight;
            delete root;
            return temp;
        } else if (root->pRight == NULL) {
            TNODE* temp = root->pLeft;
            delete root;
            return temp;
        }

        // Trường hợp 2: Node có 2 con
        // Tìm node nhỏ nhất bên phải để thay thế
        TNODE* temp = root->pRight;
        while (temp->pLeft != NULL) {
            temp = temp->pLeft;
        }
        
        // Gán giá trị của node nhỏ nhất bên phải cho node cần xóa
        root->key = temp->key;

        // Xóa node nhỏ nhất bên phải
        root->pRight = deleteNode(root->pRight, temp->key);
    }
    return root;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TNODE* root = NULL;
    // int n;
    // cin >> n;
    root = insertNode(root,7);
    for (int i = 1; i <= 9; i++)
    {
        int x;
        cin >> x;
        insertNode(root,x);
    }
    inorderTraversal(root);
    cout << endl;
    int key = 7;
    root = deleteNode(root, key);
    inorderTraversal(root);
    // cout << end3 l;
    int key2 = 8;
    root = deleteNode(root, key2);
    inorderTraversal(root);
    return 0;
}