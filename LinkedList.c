#include <stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;//next pointer stores address of next node
};
struct Node* HEAD = NULL;
struct Node* TAIL = NULL;

void createLL() {
    struct Node* P;
    P = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data in LL (or enter -1 to stop): ");
    scanf("%d", &P->data);

    if (P->data == -1) {
        free(P); // Free the memory for the node if -1 is entered
        return;
    }

    if (HEAD == NULL) {
        HEAD = P;
        P->next = NULL;
        TAIL = P;
    } else {
        TAIL->next = P;
        P->next = NULL;
        TAIL = P;
    }

    createLL(); // Recursively call createLL to keep adding nodes
}

struct Node* insertFront(struct Node* HEAD,int info){
struct Node*new;//new node pointer
new=(struct Node*)malloc(sizeof(struct Node));
new->data=info;
new->next=HEAD;
HEAD=new;
return HEAD;
};
void Traverse(struct Node*HEAD){
if(HEAD==NULL){
    printf("Linked List empty. \n");
}else{
struct Node*ptr;
ptr=HEAD;//head ka address ptr ko dedo
while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next; //ptr ko next ka address dedo
}
}
}
int main(){
 printf("Enter elements for the linked list:\n");
    createLL();
    Traverse(HEAD);
    int info;
    printf("Enter data for new node at front: ");
    scanf("%d",&info);
 HEAD = insertFront(HEAD, info);
    Traverse(HEAD);
}
