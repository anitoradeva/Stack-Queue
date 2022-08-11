#include <string>

using namespace std;

#include "Node.h"
#include "Stack.h"

// default constructor
Stack::Stack()
{
	this->ptr_bgn = NULL;
	numb = 0;
}//Stack

// destructor
Stack::~Stack()
{
	while (ptr_bgn)
	{
		Node* ptr_tmp = ptr_bgn;
		ptr_bgn = ptr_bgn->ptr_next;
		delete ptr_tmp;
		ptr_tmp = NULL;
	}
	numb = 0;
}//~Stack

// push an element into the stack
void Stack::push(const string &data)
{
	Node* ptr_new_node = new Node(data);
	ptr_new_node->ptr_next = ptr_bgn;
	ptr_bgn = ptr_new_node;
	numb++;
}//push

// pop an element from the stack
void Stack::pop()
{
	if (ptr_bgn)
	{
		Node* ptr_tmp = ptr_bgn;
		ptr_bgn = ptr_bgn->ptr_next;
		delete ptr_tmp;
		ptr_tmp = NULL;
		numb--;
	}	
}//pop

// return the element on the top
string Stack::top() const
{
	string result;
	if (ptr_bgn)
	{
		result = ptr_bgn->data;
	}

	return result;	
}//top

// checks whether stack is empty
bool Stack::isEmpty() const
{
	return ptr_bgn ? false : true;
}//isEmpty
