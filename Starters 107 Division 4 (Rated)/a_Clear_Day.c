#include <stdio.h>

int main() {
    int sum =7,a,b;
    scanf("%d %d",&a,&b);
    if ( (a<=7) && (b<=7) && ((a+b)<=7) )
    {
        int daysleft = sum -a-b;
        printf("%d",daysleft);
        
    }
	return 0;
}
