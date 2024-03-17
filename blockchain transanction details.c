#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct transaction
{
    char sname[20],rname[20];
    float amount;
    int time;
    long t_id;
}T;
void read(T *pt,int n)
{
    int i;
    printf("Enter transaction details\n");
    printf("sname,rname,amount,time,transaction id\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%f%d%ld",pt->sname,pt->rname,&pt->amount,&pt->time,&pt->t_id);
        pt++;
    }
}
void display(T *pt,int n)
{
    int i;
    printf("The transaction details are\n");
    printf("S name\tR name\tAmount\tTime\tTransacation id\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%f\t%d\t%ld\n",pt->sname,pt->rname,pt->amount,pt->time,pt->t_id);
        pt++;
    }
}
void selectionsort(T *pt,int n)
{
    T temp;
    int minindex,i,j;
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if((pt+j)->t_id<(pt+minindex)->t_id)
                minindex=j;
        }
        //swap i and minindex
        temp=*(pt+i);
        *(pt+i)=*(pt+minindex);
        *(pt+minindex)=temp;
    }
}
void search(T *pt,int n,char uname[20])
{
    int i;
    int s=0,index=0;
    for(i=0;i<n;i++)
    {
        if(strcmp((pt+i)->rname,uname)==0)
         {
             s=1;
             index=i;
             break;
         }

    }
    if(s==1)
         {
              printf("%s\t%s\t%f\t%d\t%ld\n",(pt+index)->sname,(pt+index)->rname,(pt+index)->amount,(pt+index)->time,(pt+index)->t_id);
         }
}
int main()
{
    int n;
    T *pt;
    char uname[20];
    printf("Enter the number of transaction details\n");
    scanf("%d",&n);
    pt=(T *)malloc(n*sizeof(T));
    read(pt,n);
    display(pt,n);
    selectionsort(pt,n);
    display(pt,n);
    printf("enter the user name\n");
    scanf("%s",uname);
    search(pt,n,uname);
    free(pt);
    return 0;
}
/*manju praveen 500 8 13687
virat dhoni 6 5 23
narayan sampad 50 91367 134*/

