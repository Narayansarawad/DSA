#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct time
{
    int h;
    int min;
};

typedef struct solarsystem
{
    char pname[20];
    float diameter;
    int moons;
    struct time ot;
    struct time rt;
}SS;
void read(SS *,int n);
void display(SS *,int n);
void bp(SS *,int n);
void tm(SS *,int n);
void pt(SS *,int n);
int main()
{
    int n;
    SS *p;
    printf("enter the no of planets info to enter :\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("invalid input..\n");
        exit(0);
    }

    p=(SS *)malloc(n*sizeof(SS));
    read(p,n);
    printf("\n");
    disp(p,n);
    printf("\n");
    bp(p,n);
    printf("\n");
    tm(p,n);
    printf("\n");
    pt(p,n);
    free(p);

}
void read(SS *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter details of planet %d\n",i+1);
        scanf("%s%f%d%d%d%d%d",(p+i)->pname,&(p+i)->diameter,&(p+i)->moons,&(p+i)->ot.h,&(p+i)->ot.min,&(p+i)->rt.h,&(p+i)->rt.min);

    }
}
void disp(SS *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s\t%f\t%d\t%d:%d\t%d:%d",(p+i)->pname,(p+i)->diameter,(p+i)->moons,(p+i)->ot.h,(p+i)->ot.min,(p+i)->rt.h,(p+i)->rt.min);
    }
}
void bp(SS *p,int n)
{
    float max=0;
    int j;
    for(int i=0;i<n;i++)
    {
        if((p+i)->diameter > max)
        {
            max=(p+i)->diameter;
            j=i;
        }
    }
    printf("%s\t%f\t%d\t%d:%d\t%d:%d",(p+j)->pname,(p+j)->diameter,(p+j)->moons,(p+j)->ot.h,(p+j)->ot.min,(p+j)->rt.h,(p+j)->rt.min);
}
void tm(SS *p,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += (p+i)->moons;
    }
    printf("the total no of moons is :%d",sum);
}
void pt(SS *p,int n)
{
    char x[20];
    printf("enter the planet to search :\n");
    scanf("%s",x);
    for(int i=0;i<n;i++)
    {
        if(strcmp((p+i)->pname,x)==0)
        {
            printf("%s\t%f\t%d\t%d:%d\t%d:%d",(p+i)->pname,(p+i)->diameter,(p+i)->moons,(p+i)->ot.h,(p+i)->ot.min,(p+i)->rt.h,(p+i)->rt.min);
            exit(0);
        }
        else
        {
            printf("No planet found");
        }
    }
}
