#include<stdio.h>

float customer(char type,float size,float charge)
{
    switch (type)
    {
    case 'I':
             if(size==5)
             {
                charge=75.49+20+0.09+0.09;
             printf("%f",charge);
             }
             else if(size==14.2)
             {
                 charge=75.49+20+0.09+0.09;
                 printf("%f",charge);
             }
             else if(size==19)
             {
                 charge=95.50+20+0.12+0.12;
                 printf("%f",charge);
             }
             else
             {
                 printf("invalid input");
             }
             break;
    case 'B':
             if(size==5)
             {
                charge=77.50+20+0.09+0.09;
             printf("%f",charge);
             }
             else if(size==14.2)
             {
                 charge=77.50+20+0.09+0.09;
                 printf("%f",charge);
             }
             else if(size==19)
             {
                 charge=97.50+20+0.12+0.12;
                 printf("%f",charge);
             }
             else
             {
                 printf("invalid input");
             }
             break;
    case'H':
            if(size==5)
             {
                charge=79.50+20+0.09+0.09;
             printf("%f",charge);
             }
             else if(size==14.2)
             {
                 charge=79.50+20+0.09+0.09;
                 printf("%f",charge);
             }
             else if(size==19)
             {
                 charge=99.50+20+0.12+0.12;
                 printf("%f",charge);
             }
             else
             {
                 printf("invalid input");
             }
             break;
             default:
             {
                 printf("invalid input");
             }
             break;

    }
}
    int main()
    {
       char type;
       float size;
       float charge;
       float C;
       printf("Enter the gas station type\n");
       scanf("%c",&type);
       printf("Enter the gas tank size\n");
       scanf("%f",&size);
       C=customer(type,size,charge);
       printf("%f",C);
       return 0;
    }
