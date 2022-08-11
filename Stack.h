#ifndef STACK_H
#define STACK_H

#include <string>

using namespace std;

class Node;

//! Stack of strings. 
/*!
  	Stack as a one-directional linked list of strings.
*/
class Stack
{
	public:
		//! Default constructor.
    	/*!
      		Initialize an empty stack. 
			Set pointer to the beginning to NULL, and number of elements to zero.
    	*/
		Stack();

		//! Destructor.
    	/*!
      		Remove all elements of the stack one after another, 
			starting frm the top.
    	*/
		~Stack();
		
		//! Push an element into the stack.
    	/*!
      		Creates new node and places it on the top of the stack.
			\param data string that represents the data.
    	*/
		void push(const string &data);

		//! Pop an element from the stack.
    	/*!
      		Remove the element from the top of the stack.
    	*/
		void pop();

		//! Return the element on the top.
    	/*!
      		Return the string that is placed on the top of the stack.
			\return string at the top of the stack.
    	*/
		string top() const;

		//! Checks whether stack is empty.
    	/*!
      		Treue if stack is empty, false otherwise.
			\return true empty, flase not empty.
    	*/
		bool isEmpty() const;
	private:
		Node *ptr_bgn;	/*!< Pointer to the beginning of the list. */
		int numb;		/*!< Number of elements in the stack. */
};

#endif
