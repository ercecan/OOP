#ifndef _linked
#define _linked

using namespace std;
class Node{
	friend class LinkedList;
	int data;
	Node *next;
public:
	Node(int);
};
#endif