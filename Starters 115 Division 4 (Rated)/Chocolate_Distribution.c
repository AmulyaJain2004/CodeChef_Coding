#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for (int i = 0; i<t; i++)
	{
	    int n;
	    scanf("%d",&n);
	    int max = n;
	    int min;
	    if (n%2==0)
	    {
	        min = n/2;
	    }
	    else
	    {
	        min = n/2 + 1; 
	    }
	    printf("%d %d\n", min, max);
	}

}
