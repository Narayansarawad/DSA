#include<stdio.h>
typedef struct satellite
{
    char s_name[20],s_status[20];
    float s_speed;
    int s_launch,s_lifetime;
}S;
void read(S *ps,int n)
{
    int i;
    printf("Enter the satellite details\n");
    printf("S name,s launch,s speed,s lifetime,s status\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%f%d%s",ps->s_name,&ps->s_launch,&ps->s_speed,&ps->s_lifetime,ps->s_status);
        ps++;
    }
}
void display(S *ps,int n)
{
    int i;
    printf("The satellite details are");
    printf("S name\ts launch\ts speed\ts lifetime\ts status\n");
    for(i=0;i<n;i++)
    {
        printf("%s%d%f%d%s\n",ps->s_name,ps->s_launch,ps->s_speed,ps->s_lifetime,ps->s_status);
        ps++;
    }
}
void selection_sort(S *ps,int n)
{
    S temp;
    int i,j,min_index;
    for(int i=0;i<n;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(((ps+j)->s_launch<(ps+min_index)->s_launch))
                min_index=j;
        }
        temp=*(ps+j);
        *(ps+j)=*(ps+min_index);
        *(ps+min_index)=temp;
    }
}
void search(S *ps,int n,char uname[20])
{
    int i;
    int status=0,index=0;
    for(i=0;i<n;i++)
    {
        if(strcmp((ps+i)->s_status,uname)==0)
         {
             status=1;
             index=i;
             break;
         }

    }
    if(status==1)
         {
              printf("%s\t%d\t%f\t%d\t%s\n",(ps+index)->s_name,(ps+index)->s_launch,(ps+index)->s_speed,(ps+index)->s_lifetime,(ps+index)->s_status);
         }
}
int main()
{
    int n;
    S *ps;
    char uname[20];
    printf("Enter the no of satellite details\n");
    scanf("%d",&n);
    ps=(S*)malloc(n*sizeof(S));
    read(ps,n);
    display(ps,n);
    selection_sort(ps,n);
    display(ps,n);
    printf("Enter the status name\n");
    scanf("%s",uname);
    search(ps,n,uname);
    free(ps);
    return 0;
}
/*sputnik
1980
3.5
40
working
isro
2000
6.7
65
notworking
*/
