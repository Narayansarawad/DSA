//modular c program for deciding travel packages
#include<stdio.h>
{
 //function prototype
 float travel_packages(char yatra,char packages);
 int main()
    {
    char yatra,packages;
    float charges;
    printf("Enter the type yatra and type of packages\n");
    printf("K-Karnataka special\nM-Manasarovara yatra\n");
    printf("P-Premium\tC-Classic\tB-Basic\n");
    scanf("%c%c",&yatra,&packages);
    if(yatra=='K'||yatra=='M'||yatra=='V'||yatra=='G')
    }
        //function call
        charges=travel_packages(yatra,packages);
        printf("Charges is%f\n",charges);
       {
    else
        printf("Invalid input for packages\n");
       }

}

