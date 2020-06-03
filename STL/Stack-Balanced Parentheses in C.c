
#include<stdio.h>

void checkParentheses(char* string) // char string[]
{
    int i;
    int n = 0;
    int top = -1;
    n = strlen(string);
    char *stack = (char*)calloc(n, sizeof(char));

    for ( i = 0; i < n; i++)
    {
        if (string[i] == '{' || string[i] == '[' || string[i] == '(')
        {
            stack[++top] = string[i];
        }
        else if (string[i] == '}' || string[i] == ']' || string[i] == ')')
        {
            if (top == -1)
            {
                printf("Parentheses are unbalanced\n");
                return;
            }
            else if (stack[top] == '{')
            {
                if (string[i] == '}')
                    top--;
                else
                {
                    printf("Parentheses are unbalanced\n");
                    return;
                }
            }
            else if (stack[top] == '[')
            {
                if (string[i] == ']')
                    top--;
                else
                {
                    printf("Parentheses are unbalanced\n");
                    return;
                }
            }
            else if (stack[top] == '(')
            {
                if (string[i] == ')')
                    top--;
                else
                {
                    printf("Parentheses are unbalanced\n");
                    return;
                }
            }
        }
    }
    if (top == -1 ) printf("Parentheses are balanced\n");
    else  printf("Parentheses are not balanced\n");
}


int main()
{
    char c[100];
    int i,n;
    printf("enter the expression");
    gets(c);

    checkParentheses(c);


}
