#include <stdio.h> 
#include <stdlib.h>
struct Array
{
 int capacity;
 int lastindex;
 int *ptr;
};
struct Array* createarray(int cap)
{
    struct Array *arr;
    arr = (struct Array*) malloc (sizeof(struct Array));
    arr->capacity=cap;
    arr->lastindex=-1;
    arr->ptr=(int*)malloc (sizeof(int)*cap);
    return arr;
}
void appendvalue (struct Array* arr, int data)
{
    if(arr->capacity-1==arr->lastindex)
        printf("overflow");
    else{
        arr->lastindex+=1;
        arr->ptr[arr->lastindex]=data;
    }
}
int count(struct Array*arr)
{
    return arr->lastindex+1;
}

void deletevalue(struct Array* arr, int index)
{
    int i;
    if(arr->lastindex<0)
        printf("underflow");
    else if(index < 0 || index >arr->lastindex)
        printf("invalid index");
    else{
        for (i=index;i<arr->lastindex;i++)
            arr->ptr[i]=arr->ptr[i+1];
        arr->lastindex-=1;
    }
}
void setvalue(struct Array* arr, int index, int data)
{
    int i;
    if(index < 0 || index >arr->lastindex+1)
        printf("invalid index");
    else if(arr->capacity-1==arr->lastindex)
        printf("overflow");
    else{
        for (i=arr->lastindex;i>=index;i--)
            arr->ptr[i+1]=arr->ptr[i];
        arr->ptr[index]=data;
        arr->lastindex+=1;
    }
}

int get (struct Array*arr, int index)
{
    if(index < 0 || index >arr->lastindex)
        printf("invalid index");
    else
        return arr->ptr[index];
}

int menu()
{
    
    int choice;
    printf("\n 1. insert value\n2. append value\n3. print array value\n4. delete value\n 5. exit \n");
    scanf("%d",&choice);
    return choice;    
}    

int main(){
    
    int index,data,i;
    struct Array*arr;
    arr= createarray(10);
    while(1){
        switch(menu())
        {
            case 1:
                printf("enter index and data to insert");
                scanf("%d%d",&index,&data);
                setvalue(arr,index,data);
                break;
            case 2:
                printf("enter data to append");
                scanf("%d",&data);
                appendvalue(arr,data);
                break;
                
            case 3:
                printf("current array is:");
                for(i=0;i<count(arr);i++)
                    printf(" %d",get(arr,i));
                break;
            case 4:
                printf("enter index to delete value");
                scanf("%d",&index);
                deletevalue(arr,index);
                break;
            case 5:
                exit(0);
        }
    }
    
    return 0;
}













