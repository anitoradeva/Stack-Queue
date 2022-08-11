#include <iostream>

using namespace std;

#include "Node.h"
#include "Queue.h"

Node::Node(const int &data)
{
	this->data = data;
	this->ptr_next = NULL;
	this->ptr_prev = NULL;
}//Node


