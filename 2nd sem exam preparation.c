#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char name[20];
    int srn;
    float sgpa;
    struct node *link;
}*NODE;
NODE createnode()
{
    NODE  newnode;
    newnode=(NODE)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Memory not allocated\n");
    else
    {
        printf("Enter data\n");
        scanf("%s%d%f",newnode->name,&newnode->srn,&newnode->sgpa);
        newnode->link=NULL;
    }
    return newnode;
}
NODE insertend(NODE head)
{
    NODE newnode,cur;
    newnode=createnode();
    if(head==NULL)
        head=newnode;
    else
    {
        cur=head;
        while(cur->link!=NULL)
        {
            cur=cur->link;
        }
        cur->link=newnode;
    }
    return head;
}
NODE insertfront(NODE head)
{
    NODE newnode;
    newnode=createnode();
    if(head==NULL)
        head=newnode;
    else
    {
        newnode->link=head;
        head=newnode;

    }
    return newnode;

}
void display_list(NODE head)
{
    NODE cur;
    if(head==NULL)
        printf("List empty\n");
    else
    {
        cur=head;
        while(cur!=NULL)
        {
            printf("%s\t%d\t%0.2f\n",cur->name,cur->srn,cur->sgpa);
            cur=cur->link;
        }
    }
}
NODE deleteend(NODE head)
{
    NODE cur,pre;
    if(head==NULL)
    {
        printf("List empty/n");
    }
    else if(head->link==NULL)
    {
        printf("deleted %s\t%d\t%0.2f\n",head->name,head->srn,head->sgpa);
        free(head);
        head=NULL;
    }
    else
    {
        pre=NULL;
        cur=head;
        while(cur->link!=NULL)
        {
            pre=cur;
            cur=cur->link;

        }
        printf("deleted %s\t%\td%0.2f\n",cur->name,cur->srn,cur->sgpa);
        free(cur);
        pre->link=NULL;
    }
    return head;
}
NODE deletefront(NODE head)
{
    NODE cur;
    if(head==NULL)
    {
        printf("List empty\n");

    }
    else if(head->link==NULL)
    {
        printf("deleted %s\t%d\t%0.2f\n",head->name,head->srn,head->sgpa);
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        printf("deleted %s\t%d\t%0.2f\n",cur->name,cur->srn,cur->sgpa);
        head=head->link;
        free(cur);
    }
    return head;
}
NODE search_node(NODE head)
{
    NODE cur;
    int i,status=0;
      char key_srn[20];
    printf("Enter the srn number\n");
    scanf("%s",key_srn);
    cur=head;
    while(cur!=NULL)
    {
        if(strcmp(cur->srn,key_srn)==0)
        {
            status=1;
            break;
        }
        cur=cur->link;
    }
    if(status==1)
    {
        printf("Search succesful\n");
        printf("%s\t%d\t%0.2f\n",cur->name,cur->srn,cur->sgpa);
    }
    else
        printf("Search unsuccessful\n");
}
NODE displaysame_name(NODE head)
{
    NODE cur;
    char key_name[20];
    printf("Enter the name\n");
    scanf("%s",key_name);
    if(head==NULL)
        printf("list empty\n");
    else
    {
        cur=head;
        while(cur!=NULL)
        {
            if(strcmp(cur->name,key_name)==0)
             printf("%s\t%d\t%0.2f\n",cur->name,cur->srn,cur->sgpa);
        }
        cur=cur->link;
    }
}
int main()
{
    NODE head=NULL;
    while(1)
    {
        printf("1.insert end 2.insert front 3.display list 4.delete end 5.delete front 6.search node\n");
        printf("Enter your choice\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=insertend(head);
                   printf("Insert successful\n");
                   break;
            case 2:head=insertfront(head);
                   printf("Insert successful\n");
                   break;
            case 3:display_list(head);
                   break;
            case 4:head=deleteend(head);
                   break;
            case 5:deletefront(head);
                   break;
            case 6:head=search_node(head);
                   break;
            case 8:head=displaysame_name(head);
                   break;
            case 7:exit(0);
            default:printf("Invalid choice\n");
        }
    }
}
