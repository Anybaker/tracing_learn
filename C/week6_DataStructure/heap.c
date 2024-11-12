#include <stdio.h>
#include <stdbool.h>
//栈（stack）是一种比queue更好理解的数据结构
//由于LILO 其代码实现会更加简单

#define max 50

//创建stack
typedef struct stack
{
    int data[max];
    int top;//栈顶指针
}stack;

//初始化stack
void init(struct stack* S)
{
    S->top=-1;
}

//判断栈是否为空
_Bool is_empty(stack S)
{
    if(S.top==-1){printf("stack is empty");return true;}
    else{return false;}
}

//加入元素即入栈
void push(stack* S,int e)
{
    if(S->top==max-1){printf("OVERFLOW!!!");}
    else
    {
        S->top++;
        S->data[S->top]=e;
    }
}

//删除元素即出栈 且返回被删除的元素 一开始选用的为int类型 但容易出错 改为双参
/*int delete(stack*S)
{
    if(S->top==-1){printf("EmptyStack!!!");return;}
    else
    {
        int i=S->top;
        S->top--;
        return  S->data[i]; 
    }
}*/
void pop(stack*S,int* get)
{
    if(S->top==-1){printf("EmptyStack!!!");return;}
    else
    {
        *get=S->data[S->top];
        S->top--; 
    }
}

//读取栈顶元素
void get_top(stack* S,int* get)
{
    if(S->top==-1){printf("EmptyStack!!!");return;}
    *get=S->data[S->top];
}

//遍历栈元素
void traverse(stack* S)
{
    if(S->top==-1){printf("EmptyStack!!!");return;}
    for(int i=S->top;i>=0;i--){printf("%d",S->data[i]);}
}

//共享栈 未自己编写 简单
/*/*两栈共享空间结构*/

/* #define MAXSIZE 50  //定义栈中元素的最大个数
typedef int ElemType;   //ElemType的类型根据实际情况而定，这里假定为int
/*两栈共享空间结构*/
typedef struct{
	ElemType data[MAXSIZE];
	int top0;	//栈0栈顶指针
	int top1;	//栈1栈顶指针
}SqDoubleStack;
/*插入元素e为新的栈顶元素*/
Status Push(SqDoubleStack *S, Elemtype e, int stackNumber){
    if(S->top0+1 == S->top1){   //栈满
        return ERROR;
    }
    if(stackNumber == 0){   //栈0有元素进栈
        S->data[++S->top0] = e; //若栈0则先top0+1后给数组元素赋值
    }else if(satckNumber == 1){ //栈1有元素进栈
        S->data[--S->top1] = e; //若栈1则先top1-1后给数组元素赋值
    }
    return OK;
} */
