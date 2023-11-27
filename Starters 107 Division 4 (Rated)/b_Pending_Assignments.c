#include <stdio.h>
int check (int x,int y, int z)
{
    int c = x*y;
    int d = z*24*60;
    if (c<d)
    {
        return 1;  
    }
    else 
    {
        return 0;
    }
}
int main() {
    int testcases,x,y,z ;
    scanf("%d",&testcases);
    int num[testcases];
	for (int i =0 ; i <testcases; i++)
	{
	    scanf("%d %d %d", &x, &y, &z);
	    num[i]=check(x,y,z);
	}
	for (int i=0; i<testcases; i++)
	{
	    if (num[i]==1)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}
