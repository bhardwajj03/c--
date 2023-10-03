#include <stdio.h> 
#include<stdlib.h>
#define MAX 4
int stack[MAX], item;
int ch, top = -1, count = 0, status = 0;
void push(int stack[], int item)
{
    if (top == (MAX - 1))
        printf("\n\nStack is Overflow");
    else
    {
        stack[++top] = item;
        status++;
    }
}
int pop(int stack[])
{
    int ret;
    if (top == -1)
        printf("\n\nStack is Underflow");
    else
    {
        ret = stack[top--];
        status--;
        printf("\nPopped element is %d", ret);
    }
    return ret;
}


void display(int stack[])
{
    int i;
    printf("\nThe stack contents are:");
    if (top == -1)
        printf("\nStack is Empty");
    else
    {
        for (i = top; i >= 0; i--)
            printf("\n ------\n| %d |", stack[i]);
        printf("\n");
    }
}
void main()
{
    do
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. PUSH (Insert) in the Stack");
        printf("\n2. POP (Delete) from the Stack");
        printf("\n4. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter a element to be pushed: ");
            scanf("%d", &item);
            push(stack, item);
            display(stack);
            break;
        case 2:
            item = pop(stack);

            display(stack);
            break;
        
        case 3:
            exit(0);
            break;
        default:
 printf("\nEND OF EXECUTION");
        } 
    } while (ch !=4);
}