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
      return;
    }

  current = head;


  while (current->next != NULL)
    current = current->next;


  current->next = link;
}

void
size_of_list ()
{
  int size = 0;

  if (head == NULL)
    {
      printf ("List size : %d ", size);
      return;
    }

  current = head;
  size = 1;
  while (current->next != NULL)
    {
      current = current->next;
      size++;
    }
  printf ("List size : %d ", size);
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

  size_of_list ();
  return 0;
}
