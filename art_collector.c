
#include <stdio.h>
#include <stdlib.h>


int number(char* character);
int uppercase(char* character);
char* concat(char* char1, char* char2);

int stringequal(char* str1, char* str2)
{
	int i=0;
	while(str1+i==str2+i)
	{
		if(*(str1+i)=='\0'|| *(str2+i)=='\0')
			break;
		i++;
	}
	if(*(str1+i)=='\0' && *(str2+i)=='\0')
		return 0;
	else
		return -1;
}

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

struct node{
	art_piece* data;
	struct node* next;
	struct node* prev;

};


void insertSort(struct node **head_ref, struct node* newNode)
{
	struct node* current;
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

void readline(char* line) 
{
	char* type;
	type;
	int i=0;
	int id=0;
	char* idString;
	while(*(line+i)!='\0')
	{
	while(uppercase(line+i)==1)
	{
		type=concat(type, line+i);
		i++;
	}
	while(number(line+i)==1)
	{
		idString=concat(idString, line+i);
		i++;
	}
	if(stringequal(type, "BUY")==1)
	{
		
	}
	else if(stringequal(type, "UPDATE")==1)
	{
		
	}
	else if(stringequal(type, "SELL")==1)
	{
		
	}
	else
	{
	}
	}
	
	
}

int number(char* character)
{
	if(*character>='0' && *character <='9')
		return 1;
	else
		return 0;
}
int uppercase(char* character)
{
	if(*character>='a' && *character<='z')
		return 0;
	else
		return 1;
}

char* concat(char* char1, char* char2)
{
	
	int i;
	int j;
	int k;
	int l;
	
	for(i=0; *(char1+i)!='\0'; ++i);
	for(j=0; *(char2+j)!='\0';++j,++i);
	char* result;
	result=(char*) malloc(i);
	for(k=0; *(char1+k)!='\0'; ++k)
	{
		*(result+k)=*(char1+k);
	}
	for(l=0; *(char2+l)!='\0'; ++l)
	{
		*(result+i+l)=*(char2+l);
	}
return result;
}





