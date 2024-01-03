#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int x,y,z;
	for (int i=0; i<t; i++)
	{
	    scanf("%d %d %d",&x,&y,&z);
	    int total = x*y*2;
	    printf("%d\n",z/total);
	}

}
