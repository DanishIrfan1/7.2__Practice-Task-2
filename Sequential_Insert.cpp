#include"Header.h"
List::List() {
	head = NULL;
}
List::~List() {
	delete head;
}
void List::Sequential_Insert(int element) {
	LinkList* newNode;
	newNode = new LinkList;
	newNode->data = element;
	newNode->next = head;
	head = newNode;
	length++;
}