//c program for sum and average of 3 subject
/*Name:Narayan
  Roll no:1761
  Division:Q
  Date:26/12/2022
  */
  #include<stdio.h>
  int main()
  {
      int marks1,marks2,marks3;
      float average_marks,total_marks;
      printf("enter the marks of 3 subjects\n");
      scanf("%d%d%d",&marks1,&marks2,&marks3);
      total_marks=marks1+marks2+marks3;
      average_marks=total_marks/3;
      printf("Total marks in %f\n",total_marks);
      printf("average marks is %f\n",average_marks);
      return 0;
  }
