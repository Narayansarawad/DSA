#include<stdio.h>
float additional_amount(char , int , int);
int main()
{
    float amount;
    int plan , n;
    char type;
    printf("Enter the type of sim\n");
    scanf("%c",&type);
    printf("Enter the type of internet plan used\n");
    scanf("%d",&plan);
    printf("Enter the additional MB of internet used\n");
    scanf("%d",&n);
    amount=additional_amount(type , plan , n);
    return 0;
}
float additional_amount(char type , int plan , int n)
{
    float amount;if(type=='V')
    {
        if(plan==499)
        {
        amount=n*0.50;
        printf("The additional amount is %f",amount);
        }
        else if(plan==599)
        {
        amount=n*0.40;
        printf("The additional amount is %f",amount);
        }

        else if(plan==699)
        {
        amount=n*0.35;
        printf("The additional is %f",amount);
        }
        else
        printf("Invalid input");
    }
    else if(type=='O')
    {
        if(plan==501)
        {
        amount=n*0.60;
        printf("The additional amount is %f",amount);
        }
        else if(plan==601)
        {
        amount=n*0.55;
        printf("The additional amount is %f",amount);
        }
        else if(plan==701)
        {
        amount=n*0.5;
        printf("The additional amount is %f",amount);
        }
        else
        printf("Invalid input");
    }
    else if(type=='D')
    {
        if(plan==509)
        {
        amount=n*1;
        printf("The additional amount is %f",amount);
        }
        else if(plan==609)
        {
        amount=n*0.90;
        printf("The additional amount is %f",amount);
        }
        else if(plan==709)
        {
        amount=n*0.80;
        printf("The additional amount is %f",amount);
        }
        else
        printf("Invalid input");
    }
    else
    printf("invalid input");
    return amount;
}
