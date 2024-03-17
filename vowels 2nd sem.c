#include<stdio.h>

int count_vowels(char name[100])
{
  int c=0,i;
  for(i=0;i<strlen(name);i++)
  {
  if(isalpha(name[i]))
  {
    switch(name[i])
    {
      case'a':
      case'e':
      case'i':
      case'o':
      case'u':c++;
              break;
    }
   }
  }
  return c;
}

int main()
{
  char name[100];
  printf("Enter name:");
  fgets(name,100,stdin);
  printf("Vowels count is %d\n",count_vowels(name));
  return 0;
}
