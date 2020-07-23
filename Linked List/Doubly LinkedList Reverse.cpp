#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
   struct node *prev;
};
struct node *head;


void begin_insert(int i);
void reverse_print(struct node *head);
void reverse_list();
void display();


int main()
{
    for(int i=1;i<=5;i++)
    {
        begin_insert(i);
        //last_insert(i+10);
    }

    display();

    cout<<"Print it on reverse order :"<<endl;
    reverse_print(head);

    cout<<"Reversing the list "<<endl;
    reverse_list();

    display();


}

void begin_insert(int i)
{
    struct node *ptr;
    ///int data;
    ptr = (struct node*)malloc(sizeof(struct node*));

    ///cin>>data;
    ptr->data = i;
    if(head == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
    }
    else
    {
        ptr->next = head;
        ptr->prev = NULL;
        head->prev = ptr;
        head = ptr;
    }

}

void reverse_list()
{
    struct node *current = head;
    struct node *temp = NULL;
    struct node *ptr = NULL;

    while(current!=NULL)
    {
        ptr = current;
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        current = current->prev;
    }

    head = ptr;
}

void reverse_print(struct node *head)
{
    if(head==NULL)
        return;

    reverse_print(head->next);

    cout<<head->data<<endl;

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


