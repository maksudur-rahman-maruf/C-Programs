
#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;

int main()
{
    create (20);
    create (30);
    create (40);

    delete_specified();

    display();

}

void create(int item)
    {
   struct node *ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {


   if(head==NULL)
   {
       ptr->next = NULL;
       ptr->prev=NULL;
       ptr->data=item;
       head=ptr;
   }
   else
   {
       ptr->data=item;printf("\nPress 0 to insert more ?\n");
       ptr->prev=NULL;
       ptr->next = head;
       head->prev=ptr;
       head=ptr;
   }
    printf("\nNode Inserted\n");
}

}

void delete_specified( )
{
    struct node *ptr, *temp;
    int val;
    printf("Enter the value");
    scanf("%d",&val);
    temp = head;
    while(temp -> data != val)
    temp = temp -> next;
    if(temp -> next == NULL)
    {
        printf("\nCan't delete\n");
    }
    else if(temp -> next -> next == NULL)
    {
        temp ->next = NULL;
        printf("\nNode Deleted\n");
    }
    else
    {
        ptr = temp -> next;
        temp -> next = ptr -> next;
        ptr -> next -> prev = temp;
        free(ptr);
        printf("\nNode Deleted\n");
    }
}

void display()
{
    struct node *ptr;
    printf("\n printing values...\n");
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);

        ptr=ptr->next;
    }
}
