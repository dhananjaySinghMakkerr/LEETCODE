​
​
​
typedef struct MinStack
{
    int data;
    struct MinStack* next;
} MinStack;
​
/** initialize your data structure here. */
​
MinStack* minStackCreate() 
{
    MinStack* top=(MinStack*)malloc(sizeof(MinStack));
    top->next=NULL;
    return top;
}
​
void minStackPush(MinStack* obj, int x) 
{
     MinStack* temp=(MinStack*)malloc(sizeof(MinStack));
      temp->data=x;
      temp->next=NULL;
   
       temp->next=obj->next;
        obj->next=temp;
    
    
}
​
void minStackPop(MinStack* obj)
{
    MinStack* t=NULL;
  if(obj->next==NULL)
  {
      printf("underflow");
  }
    else
    {
        t=obj->next;
        obj->next=obj->next->next;
        free(t);
    }
}
​
int minStackTop(MinStack* obj) 
{
