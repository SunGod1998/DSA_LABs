#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(int argc, char *argv[])
{
FILE* fptr = fopen("sampleInput.txt","r");

if(fptr==NULL){
  printf("\nFile could not be opened\n");
  exit(1);
}
struct linkedList *head=(struct linkedList*)malloc(sizeof(struct linkedList));
int temp;
while(1)
{
fscanf(fptr,"%d",&temp);
if(feof(fptr))
  break;
insertFirst(head,temp);
}
fclose(fptr);

printList(head);
deleteFirst(head);
printList(head);

if(search(head, 5))
printf("\n\nYes 5 is present in the list\n");
else
printf("\n\nNo 5 is not present in the list\n");

printf(" \n\n\n deleted element : %d\n",delete(head,5)->element);
printList(head);
printf("\n\n");

free(head);
return 0;
}
