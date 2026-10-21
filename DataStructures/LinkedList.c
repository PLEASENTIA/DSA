#include<stdio.h>
#include <stdlib.h>
struct Node{
	int key;
	struct Node *next;
};
void InsertBeginning(struct Node **root);
void InsertEnd(struct Node **root);
void InsertAfterElement(struct Node **root);
void IterateDisplay(struct Node *root);
void Deallocate(struct Node **root);
int main(void){
	struct Node *root=NULL;
	while(1){
		int choice;
		printf("\n1 InsertBeginning\n2 InsertEnd\n3 InsertAfterElement\n4 IterateDisplay\n5 Deallocate all\n6 ExitProgram\nEnter your choice: ");
		fflush(stdout);
		if((scanf("%d", &choice))!=1){
			printf("Enter only one choice! Try again.\n");
			int ch;
			while((ch=getchar())!='\n' && ch!=EOF){}
		}else{
			switch(choice){
				case 1: InsertBeginning(&root);
					break;
				case 2: InsertEnd(&root);
					break;
				case 3: InsertAfterElement(&root);
					break;
				case 4: IterateDisplay(root);
					break;
				case 5: Deallocate(&root);
					break;
				case 6: Deallocate(&root);
					exit(0);
					break;
				default: printf("Enter the available choices.\n");
			}
		}
	}
	return 0;
}
void InsertEnd(struct Node **root){
	struct Node *new_node=malloc(sizeof(struct Node));
	if(new_node==NULL){
		printf("New node allocation failed. Try again!\n");
		return;
	}
	int value;
	printf("Enter value: \n");
	fflush(stdout);
	if((scanf("%d", &value))!=1){
		free(new_node);
		printf("Invalid Input\n");
		int ch;
		while((ch=getchar())!='\n' && ch!=EOF){}
	}else{
		new_node->key=value;
		new_node->next=NULL;
		if(*root==NULL){
			*root=new_node;
			return;
		}
		struct Node *curr=*root;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=new_node;
	}
}
void IterateDisplay(struct Node *root){
	struct Node *curr=root;
	while(curr!=NULL){
		printf("%d->", curr->key);
		curr=curr->next;
	}
	printf("NULL\n");
}
void Deallocate(struct Node **root){
	struct Node *curr=*root;
	while(curr!=NULL){
		struct Node *aux=curr;
		curr=curr->next;
		free(aux);
	}
	*root=NULL;
}
void InsertBeginning(struct Node **root){
	struct Node *new_node=malloc(sizeof(struct Node));
	if(new_node==NULL){
		printf("New node allocation failed. Try again!\n");
		return;
	}
	int value;
	printf("Enter value: \n");
	fflush(stdout);
	if((scanf("%d", &value))!=1){
		free(new_node);
		printf("Invalid Input\n");
		int ch;
		while((ch=getchar())!='\n' && ch!=EOF){}
	}else{
		new_node->key=value;
		new_node->next=*root;

		*root=new_node;
	}
}
void InsertAfterElement(struct Node **root){
	if(*root==NULL){
		printf("Linked List is Empty.\n");
		return;
	}
	struct Node *new_node=malloc(sizeof(struct Node));
	if(new_node==NULL){
		printf("New node allocation failed. Try again!\n");
		return;
	}
	int value, elemafter;
	printf("Enter value:");
	fflush(stdout);
	if((scanf("%d", &value))!=1){
		free(new_node);
		printf("Invalid Input.\n");
		int ch;
		while((ch=getchar())!='\n' && ch!=EOF){}
		return;
	}else{
		new_node->key=value;
	}
	printf("Enter element to insert after:");
	fflush(stdout);
	if((scanf("%d", &elemafter))!=1){
		free(new_node);
		printf("Invalid Input.\n");
		int ch;
		while((ch=getchar())!='\n' && ch!=EOF){}
		return;
	}else{
		new_node->next=NULL;
		struct Node *curr=*root;
		while(curr!=NULL && curr->key!=elemafter){
			curr=curr->next;
		}
		if(curr==NULL){
			printf("Element not found.\n");
			free(new_node);
			return;
		}
		new_node->next=curr->next;
		curr->next=new_node;
	}
}
