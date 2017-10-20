/*
Given a linked list of size N and a key, your task is to complete the function insertInMiddle(), that should insert the key in the middle of the linked list.

*/

#include <stdio.h>
#include <stdlib.h>

struct Node{

	int data;
	struct Node* next;
}
typedef Node;
Node* CreatLinkList(int n,Node* head){
	Node* new;
	new=(Node*)malloc(sizeof(Node)); 
	new->data=n;
	new->next=NULL;
	head=new;

return head;
}
Node* InsertNthKey(int nth,int value, Node *head){

Node *new,*temp;
new=(Node*)malloc(sizeof(Node)); 
new->data=value;
int i;
temp=head;
for(i=0;i<nth;i++){
	head=head->next;
	}
 
	new->next=head->next;
	head->next=new;
return temp;
}


int main(){
Node *new, *head,*temp;

int test;
scanf("%d",&test);

while(test--){
head=NULL;
int n,size,data;
scanf("%d",&size);
for(n=0;n<size;n++){
scanf("%d",&data);
head=CreatLinkList(data,head);
}
int value;
scanf("%d",&value);
head=InsertNthKey(((size/2)),value,head);	
	temp=head;
	while (temp!=NULL){
		printf("linked data= %d\n",temp->data);
		temp=temp->next;
	}
}


return 0;

}