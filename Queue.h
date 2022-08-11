#ifndef QUEUE_H
#define QUEUE_H

#include <string>

using namespace std;

class Node;

class Queue
{
	public:
		Queue();

		~Queue();

		//! Push an element into the queue.
    	/*!
      		Creates new node and places it at the end of the list.
			\param data string that represents the data.
    	*/
		void enqueue(const int &data);

		//! Pop an element from the queue.
    	/*!
      		Remove the element from the beginning of the list.
    	*/
		void dequeue();

		//! Return the element on the top.
    	/*!
      		Return the string that is placed on the top or bottom of the queue.
			\return string at the beginning or at the back of list.
    	*/
		int front() const;
		
		int back() const;
		
		int size() const;
		
		bool isEmpty() const;

	private:
		Node* ptr_bgn;	
		Node* ptr_end;	
		int numb;		
};

#endif
