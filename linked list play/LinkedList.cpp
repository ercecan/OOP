#ifndef _linkedm
#define _linkedm
#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::print(){
	Node *tmp=head;
	while (tmp != NULL){
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;

}

LinkedList::LinkedList(){
	head = NULL;
}
void LinkedList::add(int data){
	if (head == NULL)
		head = new Node(data);
	else{
		Node *nptr = new Node(data);
		nptr->next=head;
		head = nptr;
	}

}
#endif linkedm