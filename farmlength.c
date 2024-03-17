#include<stdio.h>
#include<math.h>

int cangoforpicnic(int length,int width,int diameter)

{
    int areaofgrass;
    int timerequired;
    float radius = diameter/2.0;

    float areaofcircle= 3.14*radius*radius;

    areaofgrass=length*width-areaofcircle;

    timerequired= areaofgrass/3;
     if ((11-8)>timerequired)
     return 1;
     else
        return 0;
}
   int main()
   {
       int length,width,diameter;

       printf("Enter the length of farm: ");
       scanf("%d", &length);

        printf("Enter the width of farm: ");
        scanf("%d", &width);

       printf("Enter the diameter of home: ");
       scanf("%d", &diameter);

       if(canGoForPicnic(length, width, diameter))
       printf("Ram can go for the picnic\n");
       else
        printf("Ram cannot go for home");
       return 0;
   }
