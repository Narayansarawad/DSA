//c program to compute bonus
/*Name:Narayan
Roll no:1761
Divison:Q
*/
#include<stdio.h>
int main()
{
  char gender;
  float salary,bonus,new_salary;
printf("enter gender&salary of employoe\n");
scanf("%c%f",&gender,&salary);
if(gender=='m'||gender=='m');
{
if(salary<10000)
    {
    bonus=0.07*salary;
    new_salary=salary+bonus;
    printf("new salaryis %f\n",new_salary);
    }

    }
    if(gender=='F'||gender=='f');
    {
       bonus=0.05*salary;
       new_salary=salary+bonus;
       printf("new_salary is %f\n",new_salary);
       }
        if(gender=='F'||gender=='f')
       {
        if(salary<10000)
       {
       bonus=0.12*salary;
       new_salary=salary+bonus;
       printf("new_salary is %f\n",new_salary);
       }
    if(salary>10000)
       {
       bonus=0.10*salary;
       new_salary=salary+bonus;
       printf("new_salary is %f\n",new_salary);
       }
       }
       else
        printf("invalid input for gender\n");
       return 0;
}
