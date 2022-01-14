#include"Header.h"
int List::Sequential_Delete() {
	int num;
	LinkList* delNode;
	delNode = head;
	head = head->next;
	num = delNode->data;
	delete delNode;
	--length;
	return num;
}