#include <iostream>

using namespace std;
struct Stack{
	int x; 
	Stack *Next, *Head; 
};


void Add(int x, Stack *&St){
	Stack *temp = new Stack;
	temp->x = x; 
	temp->Next = St->Head; 
	St->Head = temp; 
}



void Clear(Stack *St){
	while (St->Head != NULL) {
		Stack *temp = St->Head->Next;
		delete St->Head; 
		St->Head = temp; 
	}
}

int main(){
	Stack *St = new Stack; 
	St->Head = NULL; 
	for (int i = 0;i<10;i++) 
		Add(i, St); 
	Clear(St); 
	delete St->Head;
	delete St;
}
