//c program to calculate simple interest
/*Name:Narayan
  Roll no:1761
  Division:Q
  Date:26/12/2022
  */
  #include<stdio.h>
  int main()
  {
      int time;
      float amount,rate,si,total;
      printf("enter the amount to deposit\n");
      scanf("%f",&amount);
      printf("enter the rate of interest\n");
      scanf("%f",&rate);
      printf("enter the time in years\n");
      scanf("%d",&time);
      si=(amount*rate*time)/100;
      total=si+amount;
      printf("Simple interest is%f\n",si);
      printf("Total amount is%f\n",total);
      return 0;
  }
