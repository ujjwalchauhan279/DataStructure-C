#include<stdio.h>
#include<stdlib.h>
//userdefined datatype
struct node {
	int data;
	struct node *next;
};
struct node *start=NULL;

//Create
void create() {
	if(start==NULL) {
		struct node*temp;
		temp=(struct node *)malloc(sizeof(struct node));
		if(temp==NULL) {
			printf("memory is full");
		}
		else {
			printf("Enter data of a node: ");
			scanf("%d",&temp->data);
			temp->next=NULL;
			start=temp;
		}
	}
	else {
		printf("\n---LIST ALREADY CREATED---\n\n");
	}
}

//Display
void display() {
	if(start==NULL) {
		printf("\n---LIST IS EMPTY---\n\n");
	}
	else {
		printf("\nSTART-->");
		struct node *temp;
		temp=start;
		while(temp!=NULL) {
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n\n");
	}
}

//insertatlast
void insertatlast() {
	if(start==NULL) {
		printf("\n---DO CREATION FIRST---\n\n");
	}
	else {
		struct node*temp,*temp1;
		temp=start;
		while(temp->next!=NULL) {
			temp=temp->next;
		}
		temp1=(struct node*)malloc(sizeof(struct node));
		if(temp1==NULL) {
			printf("memory is full");
		}
		else {
			printf("Enter data of node: ");
			scanf("%d",&temp1->data);
			temp1->next=NULL;
			temp->next=temp1;
		}
	}
}

//insertinfront
void insertinfront() {
	if(start==NULL) {
		printf("\n---DO CREATIONF FIRST---\n\n");
	}
	else {
		struct node*temp;
		temp=(struct node*)malloc(sizeof(struct node));
		if(temp==NULL) {
			printf("memory is full");
		}
		else {
			printf("Enter data of node: ");
			scanf("%d",&temp->data);
			temp->next=start;
			start=temp;
		}
	}
}

//insertinbetween
void insertinbetween() {
	if(start==NULL) {
		printf("\n---DO CREATION FIRST---");
	}
	else {
		struct node*temp,*temp1;
		int x;
		temp=start;
		temp1=(struct node*)malloc(sizeof(struct node));
		printf("Enter data of node after which node has to be inserted: ");
		scanf("%d",&x);
		while(temp->data!=x && temp!=NULL) {
			temp =temp->next;
		}
		if(temp==NULL){
		    printf("Element not found in the list"); 
		}
		if(temp==NULL) {
			printf("memory is full");
		}
		else {
			printf("Enter data of node: ");
			scanf("%d",&temp1->data);
			temp1->next=temp->next;
			temp->next=temp1;
		}
	}
}

//Insert
	void insert() {
		int choice;
		printf("1. Insert at last\n2. Insert inbetween\n3. Insert in front\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
		case 1:
			insertatlast();
			break;
		case 2:
			insertinbetween();
			break;
		case 3:
			insertinfront();
			break;
		default:
			printf("invalid choice");
		}
	}

// //Delete
void delete() {
	if(start==NULL) {
		printf("\n---CREATE LIST FIRST---\n\n");
	}
	else if(start->next==NULL){
	    free(start);
	    start=NULL;
	    printf("Deleted Successfully");
	}
	else {
		struct node*temp;
		temp=start;
		while(temp->next->next!=NULL) {
			temp=temp->next;
		}
		if(start->next=NULL){
		    free(temp);
		    start=NULL;
		}
		else{
		    temp->next=NULL;
		    free(temp->next);
		    printf("Deleted Successfully");
		}
	}
}



//main function
	void main() {
		int choice;
		while(1) {
			printf("1. Create node\n2. Insert node\n3. Display \n4. Delete node\n5. Exit\nEnter your choice: ");
			scanf("%d",&choice);
			switch(choice) {
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				display();
				break;
			case 4:
			    delete();
			    display();
				break;
			case 5:
				exit(0);
			default:
				printf("invalid choice,try again\n");
			}
		}
	}