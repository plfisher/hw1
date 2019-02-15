
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
	art_piece *p;
	struct node *next;
	struct node *prev;

}node;





