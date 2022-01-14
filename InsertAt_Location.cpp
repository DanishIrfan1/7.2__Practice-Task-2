#include"Header.h"
void List::InsertAt_Location(int element, int location) {
	LinkList *newNode = new LinkList;
	LinkList* triverse = head;
	newNode->data = element;
	if (location <= length && location> 0) {
		for (int i = 0; i < location-1; i++) {
			triverse = triverse->next;
		}
		newNode->next = triverse->next;
		triverse->next = newNode;
		length++;
	}
	else if (location == 0) {
		Sequential_Insert(element);
	}
	else
		cout << "Location is not valid" << endl;
	
	
}