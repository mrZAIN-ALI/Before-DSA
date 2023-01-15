#include"NumberList.h"
#include<iostream>
using namespace std;
NumberList::NumberList()
{
    head = nullptr;

}
void NumberList::insetAtBegin(double val)
{
    Node* new_Node = new Node;
    new_Node->value = val;
    new_Node->next = nullptr;
    if (head == nullptr)
    {
        head = new_Node;
    }
    else
    {
        Node* temp;
        temp = head;
        head = new_Node;
        new_Node->next = temp;
    }


}
void NumberList::displayList()
{
    if (!head)
    {
        cout << "No Value to show\n";
    }
    else
    {
        Node* traversing_Ptr;
        traversing_Ptr = head;
        while (traversing_Ptr)
        {
            cout<< traversing_Ptr->value<<" ";
            traversing_Ptr = traversing_Ptr->next;
        }


    }
    cout << endl;
}
void NumberList::insertAtEnd(double val)
{
    Node* new_Node = new Node;
    new_Node->value = val;
    new_Node->next = nullptr;
    Node* traversing_Ptr,
        * end_Node=nullptr;
    traversing_Ptr = head;

    if (!head)
    {
        head = new_Node;
    }
    else
    {
        while (traversing_Ptr)
        {
            end_Node = traversing_Ptr;
            traversing_Ptr = traversing_Ptr->next;
        }
        end_Node->next = new_Node;
    }

}
void NumberList::updateValue(double old_Val, double new_val)
{
    Node* traversing_Ptr,
        * target_ptr = nullptr;
    traversing_Ptr = head;
    while (traversing_Ptr)
    {
        if (traversing_Ptr->value == old_Val)
        {
            target_ptr = traversing_Ptr;
            break;
        }
        traversing_Ptr = traversing_Ptr->next;

    }
    if (target_ptr)
    {
        target_ptr->value = new_val;
    }
    else
    {
        cout << "Given Targer Value not found";
    }



}
bool NumberList::searach(double target)
{
    Node* traversing_Ptr;
    traversing_Ptr = head;
    bool flag = false;
    while (traversing_Ptr)
    {
        if (traversing_Ptr->value == target)
        {
            flag = true;
            break;
        }
        else
            flag = false;
        traversing_Ptr = traversing_Ptr->next;
    }
    return flag;
}
void NumberList::insetAfter(double first_Val, double second_val)
{
    Node* traversing_Ptr,
        * target_Ptr = nullptr,
        * new_Node;
    new_Node = new Node;
    new_Node->value = second_val;

    if (head == nullptr)
    {
        head = new_Node;
    }
    else
    {
        traversing_Ptr = head;
        while (traversing_Ptr)
        {
            if (traversing_Ptr->value == first_Val)
            {
                target_Ptr = traversing_Ptr;
                break;
            }
            traversing_Ptr = traversing_Ptr->next;
        }

        if (target_Ptr)
        {
            new_Node->next = traversing_Ptr->next;
            target_Ptr->next = new_Node;
            // target_Ptr->value=second_val;
        }
        else
        {
            cout << "Value : " << first_Val << " Not found\n";
        }

    }
}

void NumberList::sort_IN_Accending()
{
    Node* traversing_Node=nullptr,
        * temp_Node=new Node,
        * temp_Head = nullptr;
    if (!head)
    {
        cout << "List is empty\n";
    }
    else
    {
        int count = 0;
        temp_Head = head;
        traversing_Node = head;
        while (temp_Head)
        {
            count++;
            temp_Head = temp_Head->next;
        }
        temp_Head = head;
        for (int i = 0; i < count; i++)
        {

            for(int j=0;j<(count-1);j++)
            {
                if (traversing_Node->next!=nullptr)
                {
                    if (temp_Head->value < (traversing_Node->value))
                    {
                        temp_Node->value = temp_Head->value;
                        temp_Head->value = traversing_Node->value;
                        traversing_Node->value = temp_Node->value;
                        traversing_Node = traversing_Node->next;
                    }
                    else {

                        traversing_Node = traversing_Node->next;
                    }

                }
                
            }
            traversing_Node = head;
            temp_Head = temp_Head->next;
        }
       

    }

}
void NumberList::sort_In_Decending()
{
    {
        Node* traversing_Node = nullptr,
            * temp_Node = new Node,
            * temp_Head = nullptr;
        if (!head)
        {
            cout << "List is empty\n";
        }
        else
        {
            int count = 0;
            temp_Head = head;
            traversing_Node = head;
            while (temp_Head)
            {
                count++;
                temp_Head = temp_Head->next;
            }
            temp_Head = head;
            for (int i = 0; i < count; i++)
            {

                for (int j = 0; j < (count - 1); j++)
                {
                    if (traversing_Node->next != nullptr)
                    {
                        if (temp_Head->value > (traversing_Node->value))
                        {
                            temp_Node->value = temp_Head->value;
                            temp_Head->value = traversing_Node->value;
                            traversing_Node->value = temp_Node->value;
                            traversing_Node = traversing_Node->next;
                        }
                        else {

                            traversing_Node = traversing_Node->next;
                        }

                    }

                }
                traversing_Node = head;
                temp_Head = temp_Head->next;
            }


        }

    }
}