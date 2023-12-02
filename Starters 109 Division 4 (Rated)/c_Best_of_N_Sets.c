#include <stdio.h>

int func(int set,int s,int t)
{
    int sum = s+t;
    
    if (s>t)
    {
        for (int i=set; i>0;i-=2)
        {
            int win_chance = t+(i-sum);
            if ((win_chance - t)==1)
            {
                if ((win_chance <s))
                {
                    printf("%d\n",i);
                    return 0;
                }
                else
                {
                    continue;
                }
                
            }
            else
            {
                if (win_chance <s)
                {
                    printf("%d\n",i);
                    return 0;
                }
                
            }
        }
    }
    else
    {
        for (int i=set; i>0;i-=2)
        {
            int win_chance = s+(i-sum);
            if ((win_chance-s)==1)
            {
                if ((win_chance <t))
                {
                    printf("%d\n",i);
                    return 0;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                if (win_chance <t)
                {
                    printf("%d\n",i);
                    return 0;
                }
            }
        }
        
    }
    return 0;
}

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	int* ptr = (int*)malloc(2 * sizeof(int));
    for (int i=0; i<T; i++)
    {
       for(int j=0; j< 2; j++)
        {
            scanf("%d", &ptr[j]);
        }
        int N;
        if (ptr[0]>ptr[1])// sonu > titu
        {
            N=ptr[0]+ptr[1]+(ptr[0]-ptr[1]+1);
            func(N,ptr[0],ptr[1]);
        }
        else
        {
            N=ptr[0]+ptr[1]+(ptr[1]-ptr[0]+1);
            func(N,ptr[0],ptr[1]);
        }
    }
    
	return 0;
}
