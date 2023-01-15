#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H
class DynIntStack
{
    struct Stack_Node
    {
        int value;
        Stack_Node* next_Node;
    };

    Stack_Node *top;
    public:
    DynIntStack(){top=nullptr;}
    ~DynIntStack();
    void push(int);
    void pop(int&);
    bool is_Empty();
    
};
#endif