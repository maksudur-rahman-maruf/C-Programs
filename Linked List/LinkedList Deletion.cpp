#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
};
struct node *head;


void begin_insert(int i);

void begin_delete();
void last_delete();
void random_delete(int position); /// The index position you want to delete?
void display();


int main()
{
    for(int i=1;i<=5;i++)
    {
        begin_insert(i);
        //last_insert(i+10);
    }
    display();

    ///begin_delete();
    ///last_delete();

    int position;
    cin>>position;
    random_delete(position);

    display();


}

void begin_insert(int i)
{
    struct node *ptr;
    ///int data;
    ptr = (struct node*)malloc(sizeof(struct node*));

    ///cin>>data;
    ptr->data = i;
    ptr->next = head;
    head = ptr;

}


void begin_delete()
{
    struct node *ptr;

    if(head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;
        head = head->next;
        free(ptr);

    }
}

void last_delete()
{
    struct node *ptr, *ptr1;

    if(head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        ptr = head;

        while(ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }

        ptr1->next = NULL;
        free(ptr);
    }

}

void random_delete(int position)
{
    struct node *ptr, *ptr1;
    ptr = head;

    /// corner case
    if(position==0)
    {
        begin_delete();
        return;
    }

    for(int i=0; i<position; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;
    }

    ptr1->next = ptr->next;
    free(ptr);
}

void display()
{
    struct node *ptr;
    ptr = head;

    cout<<"Displaying values: "<<endl;
    while(ptr != NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

