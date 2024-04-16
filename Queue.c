#include <stdio.h>
# define maxSize 5
int Q[maxSize];

 int front=-1;
 int rear=-1;
 int item;
 void Qinsert(){
  if(rear==maxSize-1){
    printf("Queue full");
  }else{
   if(front==-1){
    front =0;
    rear=0;
   }else{
     printf("Enter element: ");
     scanf("%d",&item);
     Q[rear]=item;
     rear++;
   }
  }
 }
 void Qdelete(){
  if(front==-1){
    printf("Queue is empty");
  }else{
   item=Q[front];
   printf("element %d is deleted\n",item);
   if(front==rear){
    front =-1;
    rear=-1;
   }
   else{
    front++;
   }
  }
 }
 int main(){
     printf("Enter elements in Queue.\n");
  for(int i=0;i<maxSize;i++){
    Qinsert();
  }
  for(int i=0;i<maxSize;i++){
    Qdelete();
  }
  return 0;
 }
