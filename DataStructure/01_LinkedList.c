#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
void LinkedListCT(struct Node *ptr){     // CT means creation and traversal
       while(ptr!=NULL){
           printf("%d\n", ptr->data);
           ptr=ptr->Next;
       }
}
int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second =  (struct Node *)malloc(sizeof(struct Node));
    third =  (struct Node *)malloc(sizeof(struct Node));

     head->data = 7;
     head->Next = second;

     second->data = 11;
     second->Next = third;

     third->data = 19;
     third->Next = NULL;
     printf("LINKED LIST CREATED");
     LinkedListCT(head);
     

 return 0;
}
