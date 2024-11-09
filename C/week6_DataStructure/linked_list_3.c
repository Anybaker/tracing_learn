#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

//链表的排序添加
int main()
{
    node* list = NULL;
    for(int i=0;i<9;i++)
    {
        node* n = malloc(sizeof(node));
        if(n==NULL){return 1;}
        n->data = i;
        n->next = NULL;

        if(list == NULL){list = n;}
        else if(n->data < list->data)
        {
            n->next = list;
            list = n;
        }//为了确保由小到大排序且利用列表每次仅添加一个数据的特性 如果出现了更小的数字 就把他逆向排序
        else
        {
            for(node* ptr=list;ptr != NULL;ptr = ptr->next)//创建一个临时指针指向最初的node 确保ptr不是倒数第一个
            {
                if(ptr->next == NULL) //找到了最后一个node 那就让他连接上我的新节点吧！
                {
                    ptr->next = n;
                    break;
                }

                if(n->data < ptr->next->data)//这个是要插入到中间 实际如果像咱们这样从零从头开始是用不到这个滴
                {
                    n->next=ptr->next; //相当于是list 只不过list不存在list->next去表示它指向的 list本身就表示它所指向的
                    ptr->next = n;//我更新过来咯
                }
            }
        }
    }
    //printf("%d",list->data);
    node* ptr = list;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
}