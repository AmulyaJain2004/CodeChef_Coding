#include <stdio.h>

int main(void) {
	// your code goes here
	int T,S;
	
	scanf("%d",&T);
	int temp[T];
	for (int i =0; i<T; i++)
	{
	    scanf("%d",&S);
	    temp[i]=S;
	    
	}
	for (int i =0; i<T; i++)
	{
	    printf("%d\n",(temp[i]*24000));
	    
	}
	return 0;
}

