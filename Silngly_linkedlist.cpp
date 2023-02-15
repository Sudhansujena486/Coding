#include<iostream>
#include<stdlib.h>
using namespace std;
class Node {
public:
	int data;
	Node* next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}

};
Node* insert(Node* &head,int data) {
	Node* node1=new Node(data);
	node1->next = head;
	head = node1;
}
void print(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data<<endl;
		temp = temp->next;
	}
  cout<<endl;
}
int main()
{

	Node* node2 = new Node(10);
	Node* head = node2;
	int ch;
	cout << "1:to enter data"<<endl;;
	cout << "2:to display data"<<endl;
	cout<<"3: to exit"<<endl;
	
	int num;
	do {
        cout << "enter chioce"<<endl;
	    cin >> ch;
		switch (ch) {
		case 1:
			cout << "enter num to be inserted"<<endl;
			cin >> num;
			insert(head,num);
            break;
		case 2:
			print(head);
            break;
        case 3:
          exit(0);
          break;
		default:
			cout << "invaid chioce";
		 
		}
	} while (ch != 5);
}