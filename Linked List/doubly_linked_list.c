#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    struct node *next;
    int item;
    
};

void append (struct node **s, int item){
    
    struct node *temp,*t;
    temp = (struct node *) malloc (sizeof (struct node));
    temp->item = item;
    temp->next = NULL;
    if((*s)==NULL){
        *s=temp;
        temp->prev = NULL;
    }
    t=(*s);
    while (t->next != NULL)
            t=t->next;
    t->next= temp;
    temp->prev = t;
    temp->next = NULL;
    free(t);
}
void insertatstart (struct node **s, int item){
    
    struct node *temp,*t;
    temp = (struct node *) malloc (sizeof (struct node));
    temp->item = item;
    if((*s)==NULL){
        *s=temp;
        temp->next = NULL;
        temp->prev=NULL;
    }
    t=(*s);
    t->prev= temp;
    temp->next= t->next;
    *s=temp;
    temp->prev=NULL;

    free(t);
}

void printlist(struct node **s){
    struct node *t;
    if((*s)== NULL){
        printf("list is empty\n");
        return;
    }
    t=(*s);
    while(t != NULL){
        printf("%d ",t->item);
        t=t->next;
    }
}
int menu(){
    int choice;
    
    printf("press 1 for insert at start\n");
    printf("press 2 for insert ar lasr\n");
    printf("press 3 for printing current list\n");
    printf("press 4 for exit\n");
    scanf("%d",&choice);
    return choice;
}
int main(){
    int item;
    struct node *start=NULL;
    while(1){
        switch (menu())
        {
            
            case 1:
                printf("enter the item to insert at start");
                scanf("%d",&item);
                insertatstart(&start,item);
                break;
            case 2:
                printf("enter the item to insert at last");
                scanf("%d",&item);
                append(&start,item);
                break;
            case 3:
                printf("printing the current list\n");
                printlist(&start);
                break;
            case 4:
                printf("exiting");
                exit(0);
        }
        
        
    }
    return 0;
}
   
 
   
   
   
   
   
   
   
