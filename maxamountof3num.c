#include<stdio.h>
int main()
{

     int num1,num2,num3;
     printf("Enter the 3 number\n");
     scanf("%d %d %d&num1&num2&num3");
     if (num1>num2)
     {
     if(num1>num3)
       printf("%d is maximum \n",num1);
       else
       printf("%d is maximum\n",num3);

     }
       else
    {
    if (num2>num3)
       printf("%d is maximum \n",num2);
       else
       printf("%d is maximum \n",num3);
    }
    return 0;
    }
