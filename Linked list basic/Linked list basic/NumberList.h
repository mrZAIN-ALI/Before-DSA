#ifndef  NUMBERLIST_H
#define  NUMBERLIST_H
class NumberList
{
	struct List_Node
	{
		double value;
		List_Node* next_node=nullptr;

	};

	List_Node* head;

public:
	NumberList()
	{
		head = nullptr;
		
	}
	
	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayNode();

};
#endif // ! NUMBERLIST_H
