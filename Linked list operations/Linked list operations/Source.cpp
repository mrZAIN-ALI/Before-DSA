#include <iostream>
using namespace std;
class NumberList
{
    struct ListNode
    {
        double value;
        ListNode* next_node = nullptr;
    };

    ListNode* head;

public:
    NumberList()
    {
        head = nullptr;
    }

    void append_Node(double val)
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
    void showList()
    {
        ListNode* traversing_Node = nullptr;
        traversing_Node = head;

        while (traversing_Node != nullptr)
        {
            cout << traversing_Node->value << " -> ";
            traversing_Node = traversing_Node->next_node;
        }
    }
    void insert_Node(double val)
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
    void delete_Node(double val)
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

    ~NumberList()
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
};
int main()
{
    NumberList list;
    // list.append_Node(1);
    // list.append_Node(2);

    list.insert_Node(1);
    list.insert_Node(2);
    list.insert_Node(-2);


    list.showList();
    list.delete_Node(2);
    cout << endl;
    list.showList();

}