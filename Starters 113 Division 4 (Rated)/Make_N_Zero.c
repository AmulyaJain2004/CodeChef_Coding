#include <stdio.h>

int check (int n)
{
    if (n%3==0||n%4==0)
	  {
	      printf("yes\n"); 
	  }
	   else 
	  {
	      int flag = 0;
	      for (int j =1; j<= n;j++)
	      {
	          for(int k=1; k<=n; k++)
	          {
	              int c = (j*3)+(k*4);
	              if (n%c==0)
	              {
	                  printf("yes\n");
	                  flag =1;
	                  break;
	              }
	          }
	          if (flag == 1)
	          {
	              break;
	          }
	      }
	      if (flag ==0)
	      {
	          printf ("no\n");
	      }
	  }
    return 0;
}

int main() 
{
	int t;
	scanf("%d",&t);
	for (int i =0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    check (n);
	}
	return 0;
}
