#include<stdio.h>
#include<stdlib.h>
int n,stack[100],top=-1;

void push() {
	if(top==n-1) {
		printf("STACK IS  FULL\n");
	}
	else {
		int data;
		printf("enter element to be inserted: ");
		scanf("%d",&data);
		top++;
		stack[top]=data; 
	}
}

void pop() {
	if(top==-1) {
		printf("STACK IS EMPTY\n");
	}
	else {
		int popped_element=stack[top];
		top--;
		printf("POPPED SUCCESSFULLY\n");
	}
}

void peek() {
	if(top==-1) {
		printf("STACK IS EMPTY\n");
	}
	else {
		printf("%d\n",stack[top]);
	}
}

void display() {
	if(top==-1) {
		printf("STACK IS EMPTY\n");
	}
	else {
		printf("STACK: ");
		for(int i=top; i>=0; i--) {
			printf("%d  ",stack[i]);
		}
	}
}


void main() {
	int choice;
	printf("enter size of stack: ");
	scanf("%d",&n);
	while(1) {
		printf("\n1. push\n2. pop\n3. peek\n4. display\n5. exit\nenter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
		case 1:
			push();
			break;
		case 2:
			pop();
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