#include <iostream>
 
 using namespace std;
 
struct Queue {
	int val;  
	int size; 
	Queue *Head,*Tail,*Next;
        
};
 
void Add(int val, Queue *&k){
	int y = 0;
	Queue *temp = new Queue;
	temp->val = val;
	temp->Head =k->Next;
	temp->val=val;                
	if (k->Head!=NULL){            
		k->Tail->Next=temp;   
		k->Tail=temp;          
	} else k->Head=k->Tail=temp;      
	y++;	
	k->size=y;
	
}
void Clear(Queue *k){		
 
	Queue *temp=new Queue;
	int y = 0;
	while (temp!=k->Tail){
		temp=k->Head;
		k->Head=k->Head->Next; 
		delete temp;  
	}	
}
 
 
int main(){
 
 
	Queue *k = new Queue;  
	k->Head=NULL;  
	for (int i = 0; i < 10; i++)
		Add(i, k);
	Clear(k);
	delete k->Head;
		delete k;
   return 0;
}
