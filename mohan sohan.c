//c program to calculate the distance between mohan and sohan and time
/*Name:Narayan
  Roll no:1761
  Division:Q
  Date:23/12/2022
  */
  #include<stdio.h>
  #include<math.h>
  int main()
  {
      int x1,y1,x2,y2,speed;
      float distance,time,s;
      printf("Enter coordinates of mohan\n");
      scanf("%d%d",&x1,&y1);
      printf("Enter coordinates of sohan\n");
      scanf("%d%d",&x2,&y2);
      printf("Enter speed\n");
      scanf("%d",&speed);
      s=pow((x2-x1),2)+pow((y2-y1),2);
      distance=sqrt(s);
      time=distance/speed;
      printf("Distance is\t %f\n",distance);
      printf("Time is\t %f\n",time);
      return 0;
  }

