#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{  
    int i;
    char a[100];
    printf("Enter the word with no space");
     gets(a);
    printf("\n\n\n\n\n\n");
    int x=strlen(a);
    char b[x];
    printf("total words %d",x);
    for( i=0;i<x;i++)
    {
        b[i]='_';
    }
      b[i]='\0';
  printf("%s",b);
  int lives = 6;
  while (lives != 0)
    {
      char t;
      int f = 0;
      printf ("\nenter a letter\n");
      scanf (" %c", &t);
      for (int i = 0; i < strlen (a); i++)
    	{
	      if (a[i] == t)
	      {
	        b[i] = t;
	        f++;
	      }
    	}
      if (strcmp (a, b) == 0)
      {
	     printf ("\nYou won!!! \n");
         printf("word is %s",b);
	     exit(0);
      }
      else if (f > 0)
	     printf ("\nyou are one step closer\n%s", b);
      else
	 {
	  lives--;
	  printf ("\nWrong!!!\n you have %d lives left\n ", lives);
	  printf("%s",b);
	 }
     if (lives <= 0)
       printf ("\nYou loose!!!");
    } 
  return 0;
}