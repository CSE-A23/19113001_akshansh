#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i,j,k,check;
  char arr[100];
  clrscr();
  cout<<"\nEnter the word :";
  gets(arr);
  n=strlen(arr);
  for(i=0;i<n;i++)
  {
    if(n>=6&&n<=20)
    {
      if(arr[i]=='r')
      {
	      for(j=0;j<n;j++)
        {   if(arr[j]=='#'||arr[j]=='$'||arr[j]=='!'||arr[j]=='@')
	          {
                for(k=0;k<n;k++)
                {
	                  if(arr[k]!=' ')
	                  {
	                      printf("\nReeWord");
                        check=0;
	                  }
                }
	          }
        }
      }
    }
   }
  
  if(check !=0)
	  printf("Nay!");
 getch();
}
