#include <stdio.h>

int main() 
{
	int T;
	scanf("%d",&T);
	
	for (int i =0; i<T; i++)
	{
	    int X,N;
	    scanf("%d %d",&X,&N);
	    if ((N - (X*100)) < 0)
	    {
	        printf("0\n");
	    }
	    else if ((N - (X*100))%100 == 0)
	    {
	        int required = (N - (X*100))/100; 
	        printf("%d\n",required);
	    }
	    else if ((N - (X*100))%100 != 0)
	    {
	        int required = (N - (X*100))/100 + 1; 
	        printf("%d\n",required);
	    }
	}
	return 0;
}
