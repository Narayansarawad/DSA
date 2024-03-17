//c program to calculate the distance travelled by audi car
/*Name:Narayan
  Roll no:1761
  Division:Q
  Date:23/12/2022
  */
  #include<stdio.h>
  int main()
  {
      int mileage;
      printf("Enter worth of petrol and petrol price\n");
      float worth_of_petrol,petrol_price,fuel,distance;
      mileage=14;
      scanf("%f%f",&worth_of_petrol,&petrol_price);
      fuel=worth_of_petrol/petrol_price;
      distance=fuel*mileage;
      printf("Distance is %f\n",distance);
      if(distance>=100)
      {
      printf("yes.car can travel upto 100 kms\n");
      }
      else
      {
      printf("no.car cannot travel upto 100 kms\n");
      }
      return 0;
  }
