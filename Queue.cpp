#include <string>

using namespace std;

#include "Node.h"
#include "Queue.h"

// default constructor
Queue::Queue()
{
	ptr_bgn = 0;
	ptr_end = 0;
	numb = 0;
}//Queue

// destructor
Queue::~Queue()
{
	while (ptr_bgn)
	{
		Node* ptr_tmp = ptr_bgn;
		ptr_bgn = ptr_bgn->ptr_next;
		delete ptr_tmp;
		ptr_tmp = NULL;
	}
	ptr_end = NULL;
	numb = 0;	
}//~Queue

// push an element into the queue
void Queue::enqueue(const int &data)
{
	Node* ptr_new_node = new Node(data);
	if (!ptr_bgn)
	{
		ptr_bgn = ptr_new_node;
		ptr_end = ptr_new_node;	
	}
	else
	{
		ptr_end->ptr_next = ptr_new_node;
		ptr_end = ptr_new_node;		
	}
	numb++;
}//push

// pop an element from the queue
void Queue::dequeue()
{
	if (ptr_bgn)
	{
		if (ptr_bgn != ptr_end)
		{
			Node* ptr_tmp = ptr_bgn;
			ptr_bgn = ptr_bgn->ptr_next;
			delete ptr_tmp;
			ptr_tmp = NULL;
			numb--;
		}
		else
		{
			delete ptr_bgn;
			ptr_bgn = NULL;
			ptr_end = NULL;
			numb = 0;	
		}
	}
}//pop

// return the element on the top
int Queue::front() const
{
	int result;
	if (ptr_bgn)
	{
		result = ptr_bgn->data;
	}

	return result;
}//top

int Queue::back() const
{
	int result;
	if (ptr_end)
	{
		result = ptr_end->data;
	}

	return result;
}//top

// checks whether stack is empty
bool Queue::isEmpty() const
{
	return ptr_bgn ? false : true;
}//isEmpty

int Queue::size() const
{
	
}

