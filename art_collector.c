
#include <stdio.h>
#include <stdlib.h>



char *strcpy(char *dest, const char *src)
{
	unsigned i;
	for(i=0; (*(src+i))!='\0'; i++)
		*(dest+i)=*(src+i);
	
	*(dest+i)='\0';
	return dest;
}

typedef struct {
	int id;
	char *type;
	char *artname;
	char *artistname;
	int price;
}art_piece;

art_piece *createArtPiece(int id, char *t, char *artn, char *artistn, int price){
art_piece *p= malloc(sizeof(art_piece));
p->id = id;
strcpy(p->type, t);
strcpy(p->artname, artn);
strcpy(p->artistname, artistn);	
p->price=price;
return p;
}

typedef struct {
	art_piece* data;
	node* next;
	node* prev;

}node;

void insertAtBegin(node **start_ref, art_piece data)
{
	node *ptr1 = new node;
	ptr1->data=data;
	ptr1->next = *start_ref;
	if(*start_ref != NULL)
		(*start_ref)->prev=ptr1;
	*start_ref+ptr1;
}

void insertSort(node **head_ref, node* newNode)
{
	node* current;
	if(*head_ref == NULL)
		*head_ref = newNode;
	
	else if((*head_ref)->data->id > newNode->data->id)
	{
		newNode->next = *head_ref;
		newNode->next->prev = newNode;
		*head_ref = newNode;
	}
	else
	{
		current= *head_ref;
		while(current->next != NULL && current->next->data->id < newNode->data->id)
			current= current->next;
	}
	newNode->next=current->next;
	
	if(current->next!=NULL)
		newNode->next->prev= newNode;
	current->next=newNode;
	newNode->prev=current;
}







