#include <iostream>

using namespace std;

#include "Queue.h"

int main()
{
	Queue str_queue;
	str_queue.enqueue(1);
	
	cout << "Number of elements in the first queue: ";
	int el1;
	cin >> el1;
	for (int i = 0; i < el1; i++)
	{
		cout << "Enter element of queue: ";
		int n;
		str_queue.enqueue(n);
	}

	/*while (!str_queue.isEmpty())
	{
		cout << str_queue.front() << endl;
		str_queue.dequeue();
	}*/
	

	return 0;
}//main
