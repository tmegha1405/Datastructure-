#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node *LINK;
struct node *PREV;
};
struct node *header=NULL;

void insertFirst()
{
struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
printf("\n No space");
else
{
printf("Enter the element to be inserted:");
scanf("%d",&ptr->data);
ptr->LINK=NULL;
ptr->PREV=NULL;
if(header==NULL)
header=ptr;
else
{
ptr->LINK=header;
header->PREV=ptr;
}
printf("\n %d inserted into the list\n",ptr->data);
}
}

void insertLast()
{
struct node *temp,*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
ptr->LINK=NULL;
temp=header;
if(ptr==NULL)
printf("\n No space available");
else
{
while(temp->LINK!=NULL)
temp=temp->LINK;
printf("\n Enter the element to be inserted:");
scanf("%d",&ptr->data);
temp->LINK=ptr;
ptr->PREV=temp;
printf("\n%d inserted\n",ptr->data);
}
}

void insertLocation()
{
int key;
struct node*temp,*ptr,*nextnode;
ptr=(struct node*)malloc(sizeof(struct node*));
ptr->LINK=NULL;
printf("\nEnter the value of the node after which the new node to be inserted:");
scanf("%d",&key);
temp=header;
while(temp->data!=key)
{
temp=temp->LINK;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("The %d value not exist",key);
return;
}
if(temp->data==key)
{
if(ptr==NULL)

printf("\nNo space");
else
{
printf("\n Enter the element to be inserted:");
scanf("%d",&ptr->data);
temp->LINK=nextnode;
ptr=temp->LINK;
temp=ptr->PREV;
nextnode=ptr->LINK;
nextnode->PREV=ptr;
printf("\n%d inserted after %d\n",ptr->data,key);
}
}
}

void deletefirst()
{
struct node*temp;
temp=header;
header=temp->LINK;
header->PREV=NULL;
printf("%d deleted",temp->data);
free(temp);
}

void deletelast()
{
struct node*temp;
temp=header;
while(temp->LINK!=NULL)
{

temp=temp->LINK;
}
printf("\n%d deleted\n",temp->data);
free(temp);
temp->PREV->LINK=NULL;
}

void deletelocation()
{
struct node*temp;
int key;
printf("\nEnter the value of the node to be deleted:");
scanf("%d",&key);
temp=header;
while(temp->data!=key)
{
temp=temp->LINK;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("The %d value not exist",key);
return;
}
if(temp->data==key)
{
printf("\n%d deleted\n",temp->data);
if(temp==header)
{
temp->LINK->PREV=NULL;
temp->LINK=header;
free(temp);
}
else
{
temp->PREV->LINK=temp->LINK;
temp->LINK->PREV=temp->PREV;
free(temp);
}
}
}

void search()
{
struct node*temp;
int key,pos=0;
temp=header;
printf("\nEnter the element to be searched:");
scanf("%d",&key);
while(temp->data!=key)
{
temp=temp->LINK;
pos++;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("\n The %d value not exist ",key);
return;
}
if(temp->data==key)
{
printf("\n %d is available in location %d\n",key,pos++);
}
}

void display()
{
struct node *p;
if(header==NULL)
printf("\n List is empty");
else
{
printf("\nElements in the linked list:");
p=header;
while(p!=NULL)
{
printf("%d\t",p->data);
p=p->LINK;
}
}
}

void main()
{
int choice;
printf("\n Doubly linked list is:");
do
{
printf("\n\n1.Insert in beginning\n2.Insert at last\n3.Insert at any random location\n4.Delete from beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Display\n9.Exit\n");
printf("\n Enter a choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
insertFirst();
break;
case 2:
insertLast();
break;
case 3:
insertLocation();
break;
case 4:
deletefirst();
break;
case 5:
deletelast();
break;
case 6:
deletelocation();
break;
case 7:
search();
break;
case 8:
display();
break;
case 9:
exit(0);
default:
printf("\n Invalid option");
}
}
while(choice!=9);
}
