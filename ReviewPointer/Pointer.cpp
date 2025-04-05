#include <bits/stdc++.h>
using namespace std;
int main(){
    // declare pointer
    // two example here has the same meaning 
    int *point_var;
    int* point_var1;
    // assign address to the pointer
    int var = 5;
    int* p = &var;
    // Note: It is a good practice to initialize pointers as soon as they are declared. 
    // print the value that the pointer is pointing
    cout << *p << endl;
    // this is dereference operator "*"
    // this will return the same address and the output will be address of var
    cout << p << endl;
    cout << &var << endl;
}