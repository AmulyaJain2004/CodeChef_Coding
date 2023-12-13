#include <stdio.h>
#include <math.h>

int main() {
	// your code goes here
	int T,N,K;
    scanf("%d",&T);
	for (int i =0; i<T; i++)
	{
	    scanf("%d %d", &N, &K);
	    double share = N/(K+1) ;
        double given_share = floor(share);

        int summ = given_share*K;
        int net_pay = N - summ ;
        printf("%d\n",net_pay);
	}
	return 0;
}
