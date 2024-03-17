#include<stdio.h>
//function prototype
void display_digits(int num);

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    display_digits(num); //function call
    return 0;
}
//function definition
void display_digits(int num)
{
    int rem;
    while(num!=0)
    {
        rem=num%10;
        printf("%d\n",rem);
        num=num/10;
    }
}
