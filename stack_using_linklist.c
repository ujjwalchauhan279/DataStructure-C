//-------------------STACK USING LINKLIST-----------------

#include<stdio.h>
#include<stdlib.h>

//------------------USERDEFINED DATATYPE------------------
struct node {
	int data;
	struct node *next;
};
struct node* top=NULL;

//-----------------------PUSH-----------------------------
void push() {
	struct node*temp;
	if(top==NULL) {
		temp=(struct node*)malloc(sizeof(struct node));
		if(temp==NULL) {
			printf("memory full");
		}
		else {
			printf("Enter data of node to be inserted: ");
			scanf("%d",&temp->data);
			temp->next=NULL;
			top=temp;
		}
	}
	else {
		temp=(struct node*)malloc(sizeof(struct node));
		if(temp==NULL) {
			printf("memory full");
		}
		else {
			printf("Enter data of node to be inserted: ");
			scanf("%d",&temp->data);
			temp->next=top;
			top=temp;
		}
	}
}

//---------------------DISPLAY----------------------------
void display() {
	struct node*temp;
	temp=top;
	if(top==NULL) {
		printf("---------------STACK IS EMPTY----------------\n");
	}
	else {
		printf("\nTOP-->");
		while(temp!=NULL) {
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n\n");
	}
}

//------------------------POP------------------------------
void pop() {
	struct node*temp;
	temp=top;
	if(top==NULL) {
		printf("--------------STACK IS EMPTY--------------\n");
	}
	else {
		top=temp->next;
		free(temp);
		printf("-----------------DELETED SUCCESSFULLY-----------\n");
	}
}

//----------------------PEEK------------------------------
void peek() {
	if(top==NULL) {
		printf("--------------STACK IS EMPTY--------------\n");
	}
	else {
		printf("%d\n",top->data);
	}
}

//-------------------MAIN---------------------------------
void main() {
	int choice;
	while(1) {
		printf("1. TO PUSH\n2. TO DISPLAY\n3. TO POP\n4. TO PEEK\n5. EXIT\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
		case 1:
			push();
			break;
		case 2:
			display();
			break;
		case 3:
			pop();
			break;
		case 4:
			peek();
			break;
		case 5:
			printf("----------------------Exit Succesfully----------------");
			exit(0);
		default:
			printf("----------------Invalid Choice,try again!!-----------\n");
		}
	}
}