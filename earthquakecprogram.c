//Modular c program for determining earthquake by Ritcher scale number
#include<stdio.h>
int main()
{
    float earthquake_informaion,n;
    printf("Enter the Ritcher scale number\n");
    scanf("%f",&n);
    if(n<5.0)
    {
        printf("Little or no damage");
    }
    else if(n>=5.0 && n<5.5)
    {
        printf("Some damage");
    }
    else if(n>=5.5 && n<6.5)
    {
        printf("serious damage walls may crach or fall");
    }
    else if(n>=6.5 && n<7.5)
    {
        printf("Diaster house and buildings may collapse");
    }
    else if(n>=7.5)
    {
        printf("Catastrophe:Most buildings destroyed");
    }
    return 0;
}
