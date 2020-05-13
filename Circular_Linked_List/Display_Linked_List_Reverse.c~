#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void
insert (int data)
{

  struct node *link = (struct node *) malloc (sizeof (struct node));

  link->data = data;
  link->next = NULL;


  if (head == NULL)
    {
      head = link;
      head->next = link;
      return;
    }

  current = head;


  while (current->next != head)
    current = current->next;


  current->next = link;


  link->next = head;

}


void
reverse_print (struct node *list)
{
  if (list->next == head)
    {
      printf (" %d =>", list->data);
      return;
    }
  reverse_print (list->next);
  printf (" %d =>", list->data);

}

int
main ()
{
  insert (10);
  insert (20);
  insert (30);
  insert (1);
  insert (40);
  insert (56);

  reverse_print (head);
  printf (" [head]\n");

  return 0;
}
