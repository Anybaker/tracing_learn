#include <stdio.h>
#include <stdio.h>

//链表老生常谈 为以后的各种结构都提供了有别于数组的别样支撑

typedef struct node
{
    int data;
    struct node* next;
}node; //此处是提供别名 为struct node提供了类型同名

//链表的删除操作
node* delete_node(node* list,int goal)
{
    if(list == NULL)
    {
        printf("linked_list is empty!!!");return;
    }
    else
    {
        node* p = list,*pre = list; //这里p,pre都是地址 所以操作p,pre等价于操作list
        while(p->data != goal && p->next != NULL) //要么找到了目标就在p这个node；要么已经找到倒数第一个了还没找到
        {
            //确保pre永远必p领先一个身位 也就是pre记录p的当前状态
            pre = p;
            p = p->next;
            //p已经找到了的时候pre还是p之前的状态
        }
        if(p->data == goal)//如果是因为找到了目标退出
        {
            if(p == list){list = p->next;}//如果第一个就是
            else
            {
                pre->next = p->next;
            }
            free(p);//拜拜咯
        }
        else//一直都没有找到
        {
            printf("goal is not found!!!\n");
        }
    }
    return list;


}

//链表的逆序添加
int main()
{
    node* list = NULL; //list指向一片空域 但他是一个node类型
    node* n = malloc(sizeof(node));//为一节点分配足够容纳node节点所需的空间 实际上这一步创建了三个方框 一处地址 一处data 一处next指针
    n->data=1;
    n->next=list;
    list = n;//将list与n暂且等价 因为list才是我长期关注的
    node* nn = malloc(sizeof(node));
    nn->data=2;
    nn->next = list;//让nnnext先等于list 即将nn与n进行拼接
    list = nn;//再让list指向nn 这样可以将延申链表仍旧储存在长期量list中

    for(int i=3;i<9;i++)
    {
        node* n = malloc(sizeof(node));
        if(n==NULL)
        {
            return 1;
        }
        n->data=i;
        n->next=list; //新的下一个指向要排在它前面的node
        list = n;//对角线相等
    }

    //从头结点开始打印链表
    node* ptr = list;
    while (ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    delete_node(list,4);
    node* ptr_ = list;
    while (ptr_ != NULL)
    {
        printf("%d",ptr_->data);
        ptr_ = ptr_->next;
    }

}