#include<stdio.h>
#include<stdlib.h>    
struct node 
{
    int info;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;
struct node *tail=NULL;
void create(struct node *);
void display(struct node *);
void InsertatBeg(struct node **head,struct node **tail);
void InsertatEnd(struct node **head,struct node **tail);
void InsertatPosition(struct node *ptr);
void DeleteatBeg(struct node *ptr);
void DeletefromEnd(struct node *ptr);
int main()
{
    int ch,item;
    while(1)
{
    printf("\n Enter 1:create 2:display 3:InsertatBeg 4:InsertatEnd 5:InsertatPosition 6: DeleteatBeg 7: DeletefromEnd 0:Exit \n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: create(head); break;
        case 2: display(head); break;
        case 3: InsertatBeg(head,tail); break;
        case 4: InsertatEnd(head,tail); break;
        case 5: InsertatPosition(head); break;
        case 6: DeleteatBeg(head); break;
        case 7: DeletefromEnd(head); break;
        case 0: exit(1); break;
        default : printf("Wrong choice!");
    }
}    

    return 0;

} 
void create(struct node *ptr)
{
     struct node *temp;
     int data;
     temp=(struct node *)malloc(sizeof(struct node));
     printf("enter info:");
     scanf("%d",&data);
     temp->prev=NULL;
     temp->info=data;
     temp->next=NULL;
     if(head==NULL && tail==NULL)
     {
        head=tail=temp;
     }
     else
     {
        ptr=head=tail;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
     }
     printf("Node Created Successfully...");
}

void display(struct node *ptr)   
    {
    if(head==NULL && tail==NULL)
    printf("Empty Linked list");
    else {
    printf("\nLinked list is: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
   }
}

void InsertatBeg(struct node **head,struct node **tail)
    {
        struct node *temp;
        int data;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("enter info:");
        scanf("%d",&data);
        temp->info=data;
        //temp->next=NULL;
        //temp->next=ptr;
        //*head=*tail= temp;
        if(*head==NULL)
        {
            temp->next=temp->prev=NULL;
            *head=*tail=temp;
        }
        else
        {
            temp->prev=NULL;
            temp->next=*head;
            (*head)->prev=temp;
            *head=temp;
        }
        printf("Node Inserted succesfully..");
    }

void InsertatEnd(struct node **head,struct node **tail)
{
     struct node *temp;
     int data;
     temp=(struct node *)malloc(sizeof(struct node));
     printf("enter info:");
     scanf("%d",&data);
     temp->info=data;
     //temp->next=NULL;
     if(*head==NULL)
     {
        temp->next=temp->prev=NULL;
        *head=*tail=temp;
     }
     else
     {
        temp->next=NULL;
        temp->prev=*tail;
        (*tail)->next=temp;
        *tail=temp;
     }
     printf("Node Inserted Successfully...");
}

void InsertatPosition(struct node *ptr)
{
    struct node *temp;
    int data,i,pos;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter info:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;

    printf("Enter position at which you want to insert:");
    scanf("%d",&pos);
    i=1;
    while(i<pos-1)
    {
        ptr=ptr->next;
        i++;
    }

    temp->next=ptr->next;
    ptr->next=temp;
    printf("Node Inserted Successfully at this position");

}

void DeleteatBeg(struct node *ptr)
{
    if(temp==NULL)
    printf("No element remains for deletion.. Linked List underflow..");
    
    else 
    {
        head=ptr->next;
        free(ptr);
        printf("Node Deleted successfully..");
    }
}

void DeletefromEnd(struct node *temp)
{
    struct node *preptr;
    if(temp==NULL)
    printf("List Underflow...");
    else if(temp->next==NULL)
    {
        tail=NULL;
        printf("Node Deleted...");
        free(temp);
    }
    else 
    {
        while(temp->next!=NULL)
        {
            pretemp=temp;
            temp=temp->next;
        }
        preptr->next=NULL;
        printf("\n Node Deleted Successfully...\n");
        free(ptr);
    }
}