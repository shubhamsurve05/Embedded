#include <stdio.h>
#include <stdlib.h>

struct node {
	   int data;
	      struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void insert(int data) {

struct node *link = (struct node*) malloc(sizeof(struct node));

         link->data = data;
            link->next = NULL;

                  if(head==NULL) {
                        head = link;
                              head->next = link;
                                    return;
                                       }

                                          current = head;

                                         
                                                while(current->next != head)
                                                      current = current->next;

        
                                                            current->next = link;

                                                               // Link the last node back to head
                                                                  link->next = head;
                                                                     
                                                                     }

                                                                     void update_data(int old, int new) {
                                                                        int pos = 0;
                                                                           
                                                                              if(head==NULL) {
                                                                                    printf("Linked List not initialized");
                                                                                          return;
                                                                                             } 

                                                                                               current = head;

                                                                                                   while(current->next!=head) {
                                                                                                         if(current->data == old) {
                                                                                                                  current->data = new;
                                                                                                                           printf("\n%d found at position %d, replaced with %d\n", old, pos, new);
                                                                                                                                    return;
                                                                                                                                          }
                                                                                                                                                current = current->next;
                                                                                                                                                      pos++;
                                                                                                                                                         }

                                                                                                                                                            if(current->data == old) {
                                                                                                                                                                  current->data = new;
                                                                                                                                                                        printf("\n%d found at position %d, replaced with %d\n", old, pos, new);
                                                                                                                                                                              return;
                                                                                                                                                                                 }      

                                                                                                                                                                                    printf("%d does not exist in the list\n", old);
                                                                                                                                                                                    }

                                                                                                                                                                                    //display the list
                                                                                                                                                                                  void printList() {
                                                                                                                                                                                      struct node *ptr = head;

                                                                                                                                                                                          printf("\n[head] =>");
                                                                                                                                                                                             
                                                                                                                                                                                                //start from the beginning
                                                                                                                                                                                                   while(ptr->next != head) {        
  																									   printf(" %d =>",ptr->data);
                                                                                                                                                                                                               ptr = ptr->next;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                     
                                                                                                                                                                                                                       printf(" %d =>",ptr->data);
                                                                                                                                                                                                                           printf(" [head]\n");
                                                                                                                                                                                                                           }

                                                                                                                                                                                                                           int main() {
                                                                                                                                                                                                                              insert(10);
                                                                                                                                                                                                                                 insert(20);
                                                                                                                                                                                                                                    insert(30);
                                                                                                                                                                                                                                       insert(1);
                                                                                                                                                                                                                                          insert(40);
                                                                                                                                                                                                                                             insert(56); 

                                                                                                                                                                                                                                                printList();
                                                                                                                                                                                                                                                   update_data(56,11);
                                                                                                                                                                                                                                                      printList();

                                                                                                                                                                                                                                                         return 0;
                                                                                                                                                                                                                                                         }
