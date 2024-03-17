#include<stdio.h>
struct complex
{
    float real,imaginary;
};
int main()
{
    struct complex C1,C2,C3;
    struct complex *ptr1,*ptr2,*ptr3;
    ptr1=&C1;
    ptr2=&C2;
    ptr3=&C3;
    read_number(ptr1);
    read_number(ptr2);
    add_number(ptr1,ptr2,ptr3);
    display_number(ptr1);
    display_number(ptr2);
    display_number(ptr3);
    return 0;
}
void read_number(struct complex *p1)
{
    printf("enter a complex number\n");
    scanf("%f%f",&p1->real,&p1->imaginary);
}
void display_number(struct complex *p2)
{
    printf("the complex number is\n");
    printf("%f+%f i\n",p2->real,p2->imaginary);
}
void add_number(struct complex *ptr1,struct complex *ptr2,struct complex *ptr3)
{
    ptr3->real=ptr1->real+ptr2->real;
    ptr3->imaginary=ptr1->imaginary+ptr2->imaginary;
}
