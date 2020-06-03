#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>

using namespace std;
void check(char c[],int n)
{
    int i;
    stack<char>s;
    for(i=0; i<n; i++)
    {
        if(c[i]=='('|| c[i]=='{' || c[i]=='[')
        {
            s.push(c[i]);
        }
        else if(c[i]==')' && s.top()=='(')
        {
            s.pop();
        }
        else if(c[i]=='}' && s.top()=='{')
        {
            s.pop();
        }
        else if(c[i]==']' && s.top()=='[')
        {
            s.pop();
        }

    }

    if(s.empty()==true )
    {
        cout<<" balanced";
    }
    else
    {
        cout<<" not balanced";
    }

}

int main()
{
    char c[100];
    int i,n;
    cout<<"enter the expression";
    gets(c);
    n=strlen(c);
    check(c,n);
}
