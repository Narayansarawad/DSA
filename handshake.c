//c program to calculate the no of handshakes
/*Name:Narayan
  Roll no:1761
  Division:Q
  Date:23/12/2022
  */
  #include<stdio.h>
  int main()
{
   int people,handshakes;
   printf("Enter number of people in room");
   scanf("%d",&people);
   handshakes=(pow(people,2)-people)/2;
   printf("Number of handshakes=%d",handshakes);
   return 0;
}
