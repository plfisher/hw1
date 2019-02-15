
#include <stdio.h>
#include <stdlib.h>

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
p->type= strdup(t);
p->artname=strdup(artn);
p->artistname=strdup(artistn);
p->price=price;
return p;
}
typedef struct {
	art_piece *p;
	struct node *next;
	struct node *prev;

}node;



