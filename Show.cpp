#include"Header.h"
void List::ShowList() {
	int i = 1;
	LinkList* triverse = head;
	while (triverse != NULL) {
		cout <<"Element "<<i<<" : " << triverse->data << endl;
		i++;
		triverse = triverse->next;
	}
}