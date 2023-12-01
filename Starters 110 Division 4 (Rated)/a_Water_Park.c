#include <stdio.h>
int main() 
{
	int W,H;
	scanf("%d %d",&W,&H);
	
	if ((W>=60)&&(H<=130))
	{
	    printf("YES");
	}
	else 
	{
	    printf("NO");
	}
	return 0;
}
