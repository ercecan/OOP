#include <iostream>
#include "LinkedList.h"

int main(){
	LinkedList mylist;
	for (int i = 0; i < 10;i++)
		mylist.add(i);
	mylist.print();
	getchar();
}