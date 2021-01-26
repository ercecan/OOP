#ifndef _node
#define _node
#include "Node.h"
using namespace std;

class LinkedList{
	Node *head;
public:
	LinkedList();
	void add(int);
	void print();
};
#endif