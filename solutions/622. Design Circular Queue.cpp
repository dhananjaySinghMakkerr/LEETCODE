class MyCircularQueue {
public:
    int front;
    int rear;
    int sze;
    int* q;
    MyCircularQueue(int k) {
        q=new int[k];
        front=-1;
        rear=-1;
        sze=k;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        if(front==-1&&rear==-1)
        {
            rear=0;
            q[rear]=value;
            front=0;
            return true;
        }
        q[(rear+1)%sze]=value;
        rear=(rear+1)%sze;
        return true;
        
    }
    bool deQueue() {
        if(front==-1&&rear==-1)
            return false;
        if(front==rear)
        {
            front=-1;
            rear=-1;
            return true;
        }
        front=(front+1)%sze;
        return true;
    }
    
    int Front() {
        if(front!=-1)
            return q[front];
