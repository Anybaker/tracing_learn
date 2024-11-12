#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node* next;
}node;

int main(int argc,char* argv[])
{
    for(int i=1;i<argc;i++)
    {
        printf("argument%d:%s\n",i,argv[i]);
    }
    printf("\n");
    node* list = NULL;//initialize
    //int argv[3];
    /*for(int i=0;i<3;i++)
    {
        scanf("%d",&argv[i]);
    }*/
    for(int i=1;i<argc;i++)
    {
        int number = atoi(argv[i]);
        //int number = argv[i];
        node* n = malloc(sizeof(node));//n is a pointer(just tmp) to a node
        if (n == NULL)
        {
            //free memory thus far
            return 1;
        }
        n->number = number;
        n->next = list;//go to the current node
        list = n;//initial to the new
        

    }
        //print the whole number
        node* ptr = list;
        while(ptr != NULL)
        {
            printf("%i\n",ptr->number);
            ptr = ptr->next;
        }
}