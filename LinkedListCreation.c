/*
Title: Linked list creation in C
Author: Ashish Kumar
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

//A function to display all the nodes of the linked list
void showLL(struct node* r) //r for root or head pointer
{
    if(r==NULL)
        {
            printf("Empty. Nothing to print");
            return;  
        }
    r=r->next;    
    while(r!=NULL)
    {
        printf("%d\n",r->data);
        r=r->next;
    }    
}
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *first=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));

    //defining the head node
    head->next = first;

    //defining the first node
    first->data= 50;
    first->next=NULL;

    //defining the second node
    second->data= -50;
    second->next=NULL;

    //calling the function to display the nodes
    showLL(head);
    return 0;
}