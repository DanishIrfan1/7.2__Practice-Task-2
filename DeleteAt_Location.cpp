#include"Header.h"
int List::DeleteAt_Location(int location){
	LinkList* delNode;
	LinkList* triverse = head;
	if (location < length && location > 0) {
		for (int i = 0; i < location - 1; i++) {
			triverse = triverse->next;
		}
		delNode = triverse->next;
		triverse->next = triverse->next->next;
		int del;
		del = delNode->data;
		delete delNode;
		length--;
		return del;
	}

	else if (location == 0) {
		 Sequential_Delete();
	}
	else
		cout << "Location is not valid" << endl;
	
}