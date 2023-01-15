#include <iostream>
using namespace std;
template <class T>
class NumberList
{
    struct ListNode
    {
        T value;
        ListNode* next_node = nullptr;
    
    };

    ListNode* head;

public:
    NumberList()
    {
        head = nullptr;
    }
    void append_Node(T);
    void showList();
    void insert_Node(T);
    void delete_Node(T);
    ~NumberList();
};
template<class T>
void NumberList<T>::append_Node(T val)
{
    ListNode* new_Node = nullptr;
    ListNode* traversing_Node = nullptr;

    new_Node = new ListNode;
    new_Node->value = val;
    traversing_Node = head;
    if (!head)
    {
        head = new_Node;
        new_Node->next_node = nullptr;
    }
    else
    {

        while (traversing_Node->next_node != nullptr)
        {
            traversing_Node = traversing_Node->next_node;
        }
        traversing_Node->next_node = new_Node;
    }
}

template<class T>
void NumberList<T>::showList()
{
    ListNode* traversing_Node = nullptr;
    traversing_Node = head;

    while (traversing_Node != nullptr)
    {
        cout << traversing_Node->value << " -> ";
        traversing_Node = traversing_Node->next_node;
    }
}
template<class T>
void NumberList<T>::insert_Node(T val)
{
    ListNode* previous_Node;
    ListNode* new_Node = nullptr;
    ListNode* traversiong_Node = nullptr;

    new_Node = new ListNode;
    new_Node->value = val;
    if (!head)
    {
        head = new_Node;
        previous_Node = nullptr;
    }
    else
    {

        previous_Node = nullptr;
        traversiong_Node = head;
        while (traversiong_Node != nullptr && val > traversiong_Node->value)
        {
            previous_Node = traversiong_Node;
            traversiong_Node = traversiong_Node->next_node;
        }
        if (previous_Node == nullptr)
        {
            head = new_Node;
            new_Node->next_node = traversiong_Node;
        }
        else
        {
            previous_Node->next_node = new_Node;
            new_Node->next_node = traversiong_Node;
        }
    }
}
template<class t>
void NumberList<t>::delete_Node(t val)
{

    ListNode* traversing_Node = nullptr;
    ListNode* previous_Node = nullptr;

    if (!head)
    {
        return;
    }
    else
    {
        if (head->value == val)
        {
            traversing_Node = head->next_node;
            delete head;
            head = traversing_Node;
        }
        else
        {

            traversing_Node = head;
            previous_Node = nullptr;
            while (traversing_Node != nullptr && traversing_Node->value != val)
            {
                previous_Node = traversing_Node;
                traversing_Node = traversing_Node->next_node;
            }

            if (traversing_Node)
            {
                previous_Node->next_node = traversing_Node->next_node;
                delete traversing_Node;
            }
        }
    }
}
template<class t>
NumberList<t>::~NumberList()
{
    ListNode* traversing_Node = nullptr;
    ListNode* next_Node = nullptr;

    traversing_Node = head;
    while (traversing_Node != nullptr)
    {
        next_Node = traversing_Node->next_node;
        delete traversing_Node;
        traversing_Node = next_Node;
    }
}

int main()
{
    NumberList<string> list;
    // list.append_Node(1);
    // list.append_Node(2);

    list.insert_Node("He is loving new");
    list.insert_Node("is it or not");
    list.insert_Node("Yes he is");

    list.showList();
    list.delete_Node("He is loving new");
    list.delete_Node("new");
    cout << endl;
    list.showList();
}