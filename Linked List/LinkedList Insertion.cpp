#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
};
struct node *head;


void begin_insert(int i);
void last_insert(int i);
void random_insert(int position, int data);
void display();


int main()
{
    for(int i=1;i<=5;i++)
    {
        begin_insert(i);
        //last_insert(i+10);
    }
    display();

    /// Enter the index position after which data should be inserted
    int position,data;
    cin>>position;
    cin>>data;
    random_insert(position,data);

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

void last_insert(int i)
{
    struct node *ptr,*temp;
    ptr = (struct node*)malloc(sizeof(struct node*));
    ptr->data = i;
    if(head==NULL)
    {
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
    }
}

void random_insert(int position,int data)
{
    struct node *ptr, *temp;
    ptr = (struct node*)malloc(sizeof(struct node*));
    ptr->data = data;

    temp = head;
    for(int i=0; i<position; i++)
    {
        temp = temp->next;
    }

    if(temp==NULL)
    {
        cout<<"Cant be Inserted!"<<endl;
        return;
    }
    else
    {
        ptr->next = temp->next;
        temp->next = ptr;
    }

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
