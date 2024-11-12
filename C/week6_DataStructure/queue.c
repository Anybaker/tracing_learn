#include <stdio.h>
//dequeue可以进行改进返回一个de掉的值 在stack中使用了

//queue是一种数据结构 有数组与链表两种实现方式、
/*数组实现方式需要了解 循环数组 取模等重要概念
对于其内存恒定占有以及地址指向读取的特点要了解*/
//牺牲一个元素的思想 牺牲的哪一个？其实就是rear指向的元素 这也是FIFO特性的原因
//因为读取只需要使用front rear实际只起到添加和计数的功能
#define max 11//目标为10个元素
#define true 1
#define false 0

//定义一个队列
typedef struct queue
{
    int arr[max];
    int front;
    int rear;
}queue;

//初始化
int init(struct queue* Q)
{
    Q->front=Q->rear=0;
    printf("%d\n",Q->rear);

}
//判断队列是否已满 由舍弃一个元素的思想可得 当rear&front相邻时 队列就已满
//值得思考：front->0 rear->max-1时；rear于front左相邻；rear于front右相邻
int is_full(struct queue* Q)
{
    if((Q->rear+1)%max==Q->front){return 1;}
    else{return 0;}
}

//判断队列是否为空
int is_empty(queue* Q)
{
    if(Q->rear == Q->front){return 1;}
    else{return 0;}
}

//添加元素
//首先判断；然后当前rear赋值；rear取模式前进
void enqueue(struct queue*Q,int add)
{
    if(is_full(Q)){printf("queue is full\n");}
    Q->arr[Q->rear]=add;
    Q->rear=(Q->rear+1)%max;
}

//删除元素
int dequeue(queue* Q)
{
    if(is_empty(Q)){printf("queue is empty");return;}
    Q->front=(Q->front+1)%max;
}

//遍历队列
int traverse(queue Q)
{
    int i=Q.front;
    while(i != Q.rear)//此时同样满足舍弃一个元素 因为并不会输出rear指向的元素
    {
        printf("%d",Q.arr[i]);
        i = (i+1)%max;

    }
}

//队列长度
int get_length(queue Q)
{
    return (Q.rear+max-Q.front)%max;//同样符合舍弃一个元素 因为最长长度为max-1
}

int main()
{
    struct queue Q;
    init(&Q);
    for(int i=0;i<max-1;i++){
            enqueue(&Q,i);
            printf("%d\n",Q.rear);
    }



}