#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head,*temp;
struct node *newNode = malloc(sizeof(struct node));
printf("Enter data you want to insert:");
scanf("%d",&newnode->data);
newnode->next=0;
temp=head;

while(temp->next !=0)
{
    temp=temp->next;
}
temp->next=nenode;