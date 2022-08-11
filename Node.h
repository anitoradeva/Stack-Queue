#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

class Queue;

class Node
{
	public:	
		Node(const int &data);

	private:
		int data;	
		Node* ptr_next; 
		Node* ptr_prev;

	friend class Queue;
};

#endif
