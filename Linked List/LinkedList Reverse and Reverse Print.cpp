#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
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
    ptr->next = head;
    head = ptr;

}

void reverse_list()
{
    struct node *current = head;
    struct node *prev = NULL;
    struct node *next = NULL;

    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
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

