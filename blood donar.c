#include<stdio.h>
struct details
{
    char name[20],place[20],blood_type[2],donate_status;
    long contact_no;
};
void read_details(struct details *ptr1)
{
    printf("Enter name=");
    scanf("%s",ptr1->name);
    printf("\nEnter place=");
    scanf("%s",ptr1->place);
    printf("\nEnter blood type=");
    scanf("%s",ptr1->blood_type);
    printf("\nEnter contact number=");
    scanf("%ld",&ptr1->contact_no);
    printf("\nEnter donation status=");
    scanf(" %c",&ptr1->donate_status);
}
void display_details(struct details *ptr1)
{
    printf("The details of the donar are\n");
    printf("Name - %s\n",ptr1->name);
    printf("Place - %s\n",ptr1->place);
    printf("Contact number - %ld\n",ptr1->contact_no);
    printf("Blood type - %s\n",ptr1->blood_type);
    printf("Donation status - %c\n",ptr1->donate_status);
}

int main()
{
   struct details p1;
   struct details *ptr1;
   ptr1=&p1;
   read_details(ptr1);
   display_details(ptr1);
   return 0;

}
