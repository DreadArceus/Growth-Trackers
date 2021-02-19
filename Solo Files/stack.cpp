#include <iostream>
using namespace std;

template <typename T>
class stack {
public:
    stack();
    void push(T x);
    T peek();
    T pop();
    bool isEmpty();
    ~stack();
    stack(const stack& s);
    const stack& operator=(const stack& s);
private:
    struct node {
        T data;
        node* next;
    };
    node* top;
    node* copylist(node* p);
    // {
    //     if (!p) {
    //         return p;
    //     }
    //     else {
    //         return new node{ p->data, copylist(p->next) };
    //     }
    // }
    node* del_list(node* p);
};

template <typename T>
typename stack<T>::node* stack<T>::copylist(stack<T>::node* p) {
    if (!p) {
        return p;
    }
    else {
        return new node{ p->data, copylist(p->next) };
    }    
}
int main(){}