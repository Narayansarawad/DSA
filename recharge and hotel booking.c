#include<stdio.h>

typedef struct
{
    long mobile_no;
    float amt;
    char nw_type[20];
    long t_id;
    int d,m,y;
    int h,mn,s;
}R;

typedef struct
{
    char hname[20],place[20],room_tp[20],pname[20];
    float price;
    int days;

}H;

void rd_recharge(R *rptr)
{
    printf("enter the details of recharge\n");
    printf("Mobile no,amount,nw type,t id,date,time\n");
    scanf("%ld%f%s%ld%d%d%d%d%d%d",&rptr->mobile_no,&rptr->amt,rptr->nw_type,&rptr->t_id,&rptr->d,&rptr->m,&rptr->y,&rptr->h,&rptr->mn,&rptr->s);
    printf("\n");
}
void dp_recharge(R *rptr)
{
    printf("mobile_no\tamount\tnwtype\ttid\t\tdate\t\ttime\n");
    printf("%ld\t%0.2f\t%s\t%ld\t%d:%d:%d\t%d:%d:%d\n",rptr->mobile_no,rptr->amt,rptr->nw_type,rptr->t_id,rptr->d,rptr->m,rptr->y,rptr->h,rptr->mn,rptr->s);
    printf("\n");
}


void rd_hotel(H *ph)
{
    printf("enter the details of hotel booking\n");
    printf("enter hname,place,room_type,pname,price,days\n");
    scanf("%s%s%s%s%f%d",ph->hname,ph->place,ph->room_tp,ph->pname,&ph->price,&ph->days);
    printf("\n");
}
void dp_hotel(H *ph)
{
    printf("hmane\tplace\troom_ty\tpname\tprice\tdays\n");
    printf("%s\t%s\t%s\t%s\t%0.2f\t%d\n",ph->hname,ph->place,ph->room_tp,ph->pname,ph->price,ph->days);
}


int main()
{
    R *rptr;
    rptr=(R *)malloc(sizeof(R));
    H *ph;
    ph=(H *)malloc(sizeof(H));

    rd_recharge(rptr);
    dp_recharge(rptr);
    rd_hotel(ph);
    dp_hotel(ph);

    free(rptr);
    free(ph);
    return 0;
}
