#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

//链表的顺序添加
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
        else
        {
            for(node* ptr=list;ptr != NULL;ptr = ptr->next)//创建一个临时指针指向最初的node
            {
                if(ptr->next == NULL) //找到了最后一个node 那就让他连接上我的新节点吧！
                {
                    ptr->next = n;
                    break;
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