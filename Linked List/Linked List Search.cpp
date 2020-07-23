#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
};
struct node *head;


void begin_insert(int i);

void LinkedList_search();

void display();


int main()
{
    for(int i=1;i<=5;i++)
    {
        begin_insert(i);
        //last_insert(i+10);
    }
    display();

    LinkedList_search();

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

void LinkedList_search()
{
    struct node *ptr;
    ptr = head;

    int i=0, flag=0,data;
    cin>>data;

    while(ptr!=NULL)
    {
        if(ptr->data == data)
        {
            cout<<"Data is found at position "<<i+1<<endl;
            return;
        }

        i++;
        ptr = ptr->next;
    }

    cout<<"Data is not found!!"<<endl;

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

