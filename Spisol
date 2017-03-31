#include <iostream>
using namespace std;
struct Node {
	int val;
	Node* next;
	Node* prev;
	Node(){
		next= NULL;
		prev = NULL;
		val = 0;
	}
	Node(int val){
		next = NULL;
		prev = NULL;
		this-> val = val;
	}
	Node(int val, Node* prev){
		this-> prev = prev;
		next=NULL;
		this->val = val;
	}
};
struct List{
	Node* first;
	Node* last;
	List(){
		cout << "List constructor" << endl;
		first = last = NULL;
	}
	void add(int val){
		if(first==NULL){
			first=last=new Node(val);
		}	else{
			
				Node* n = new Node(val,last);
				last-> next=n;
				last = n;
				
			}
	}
	~List() {
		Node*cur = first;
		cout << "List diss" << endl;
		while(cur!=NULL){
			Node*t = cur->next;
			delete cur;
			cur = t;
		}
	}
			
	void print() {
		Node* cur = first;
		while(cur !=NULL){
			cout << cur->val << endl;
			cur = cur->next;
		}
	}
};


int main() {
	List  *list = new List();
	for(int i = 0; i<10; i++){
		list->add(i);
	}
	list->print();
	delete list;
	cout << "dsds" << endl;
	system("pause");
	
	return 0;
	}
