#pragma once
#include<iostream>
using namespace std;
class List {
private:
	struct LinkList {
		int data;
		LinkList* next;
	};
	LinkList* head;
	int length = 0;
public:
	List();
	~List();
	void Sequential_Insert(int);
	int Sequential_Delete();
	void InsertAt_Location(int, int);
	int DeleteAt_Location(int);
	void ShowList();
	int ShowLength();
};
