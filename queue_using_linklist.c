// --------QUEUE USING LINKLIST--------
#include<stdio.h>
#include<stdlib.h>
//---------user defined datatype-------
struct node {
	int data;
	struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;

//-------------enqueue-------------
void enqueue() {
	struct node*temp;
	if(front==NULL) {
		temp=(struct node*)malloc(sizeof(struct node));
		if(temp==NULL) {
			printf("MEMORY FULL");
		}
		else {
			printf("Enter data of node to be inserted: ");
			scanf("%d",&temp->data);
			temp->next=NULL;
			front=temp;
			rear=temp;
		}
	}
	else {
		temp=(struct node*)malloc(sizeof(struct node));
		if(temp==NULL) {
			printf("MEMORY FULL");
		}
		else {
			printf("Enter data of node to be inserted: ");
			scanf("%d",&temp->data);
			temp->next=NULL;
			rear->next=temp;
			rear=temp;
		}
	}
}

//-----------Dequeue--------------
void dequeue() {
	if(front==NULL) {
		printf("--------QUEUE IS EMPTY-------\n");
	}
	else {
		struct node*temp;
		temp=front;
		front=temp->next;
		free(temp);
		printf("--------DEQUEUEED SUCCESSFULLY--------\n");
	}
}

//-----------peek-----------------
void peek() {
	if(front==NULL) {
		printf("--------QUEUE IS EMPTY-------\n");
	}
	else {
		printf("%d\n",front->data);
	}
}

//------------display------------
void display() {
	struct node*temp;
	temp=front;
	if(front==NULL) {
		printf("--------QUEUE IS EMPTY--------\n");
	}
	else {
		printf("FRONT-->");
		while(temp!=NULL) {
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("REAR\n");
	}
}

//---------------MAIN------------
void main() {
	int choice;
	while(1) {
		printf("1. Enqueue\n2. Display\n3. Dequeue\n4. Peek\n5. Exit\nChoose form above: ");
		scanf("%d",&choice);
		switch(choice) {
		case 1:
			enqueue();
			break;
		case 2:
			display();
			break;
		case 3:
			dequeue();
			break;
		case 4:
			peek();
			break;
		case 5:
			exit(0);
		default:
			printf("\t---Invalid choice,try again---\n");
		}
	}
}