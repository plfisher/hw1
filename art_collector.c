
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

typedef struct  {
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
	art_piece *data;
	node *next;
	node *prev;

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

void sort(node *start)
{
	int swapper, i;
	node *ptr1;
	node *lptr = NULL;
	
	if(start==NULL)
		return;
	do
	{
		swapped=0;
		ptr1=start;
		while(ptr1->next != lptr)
		{
			if(ptr1->data->id > ptr1->next->data->id)
			{
				swap(ptr1->data, ptr1->next->data);
				swapped=1;
			}
			ptr1=ptr1->next;
		}
		lptr = ptr1;
	}
	while (swapped);
}







