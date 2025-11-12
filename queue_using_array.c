#include<stdio.h>
#include<stdlib.h>
int n,front=-1,rear=-1,queue[100];

void enqueue() {
	int data;
	if(rear==n-1) {
		printf("QUEUE IS FULL\n");
	}
	else {
		printf("enter data to be inserted: ");
		scanf("%d",&data);
		rear++;
		queue[rear]=data;
		if(front==-1) {
			front=0;
		}
	}
}

void dequeue() {
	if(front==-1||front>rear) {
		printf("QUEUE IS EMPTY\n");
	}
	else {
		int dequeued_element=queue[front];
		if(front==rear) {
			front=-1,rear=-1;
		}
		else {
			front++;
		}
		printf("DEQUEUED SUCCESSFULLY\n");
	}
}

void peek() {
	if(front==-1||front>rear) {
		printf("QUEUE IS EMPTY\n");
	}
	else {
		printf("%d\n",queue[front]);
	}
}

void display() {
	if(front==-1) {
		printf("QUEUE IS EMPTY\n");
	}
	else {
		for(int i=front; i<=rear; i++) {
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}

void main() {
	int choice;
	printf("enter size of queue: ");
	scanf("%d",&n);
	while(1) {
		printf("1. enqueue\n2. dequeue\n3. peek\n4. display\n5. exit\nenter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			exit(0);
		default:
			printf("INVALID CHOICE,TRY AGAIN\n");
		}
	}
}