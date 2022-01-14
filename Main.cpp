#include<iostream>
#include"Header.h"
using namespace std;
int main() {
	List obj;
	int elem, nodes, seqDel;
	char dec;
	cout << "How much you want to insert the Node?  ";   //For sequentially insertion
	cin >> nodes;
	cout << "Please Enter elements: " << endl;            
	for (int i = 0; i < nodes; i++) {
		cin >> elem;
		obj.Sequential_Insert(elem);
	}
	cout << "Your List" << endl;
	obj.ShowList();
	cout << "Length of LinkList is " << obj.ShowLength() << endl;
	system("pause");
	system("cls");
	


	cout << "Are you want to sequentially delete elements (if no then type 0) and how much? ";  //For sequentially deletion
	cin >> seqDel;
	if (seqDel != 0) {
		for (int i = 0; i < seqDel; i++) {
			cout << "Deleted Element: " << obj.Sequential_Delete() << endl;
		}
	}
	cout << "Your List" << endl;
	obj.ShowList();
	cout << "Length of LinkList is " << obj.ShowLength() << endl;
	system("pause");
	system("cls");
	


	cout << "Are you want to insert elements at any location  (y or n): ";  //insert at any location
	cin.get(dec);             //because if i use cin.get() at one time it is not properly working
	cin.get(dec);
	if (dec=='y'||dec=='Y') {
		cout << "Enter Location : ";
		cin >> nodes;
		cout << "Enter element : ";
		cin>> elem;
		obj.InsertAt_Location(elem, nodes);
		}
	cout << "Your List" << endl;
	obj.ShowList();
	cout << "Length of LinkList is " << obj.ShowLength() << endl;
	system("pause");
	system("cls");



	cout << "Are you want to Delete elements at any location  (y or n):  ";  //deletion at any location
	cin.get(dec); //because if i use cin.get() at one time it is not properly working
	cin.get(dec);
	if (dec == 'y' || dec == 'Y') {
		cout << "Enter Location:  ";
		cin >> nodes;
		obj.DeleteAt_Location(nodes);
	}
	cout << "Your List" << endl;
	obj.ShowList();
	cout << "Length of LinkList is " << obj.ShowLength() << endl;
	return 0;
	}

