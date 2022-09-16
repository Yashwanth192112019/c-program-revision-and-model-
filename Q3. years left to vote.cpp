#include <stdio.h>
int main()
{
  int vote_age;

  printf("Input the age of the candidate : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("Sorry, You are not eligible for voting.\n");
       printf("You would be able vote after %d year.\n",18-vote_age);
     }
  else
     printf("Congratulation! You are eligible for voting.\n");
}

