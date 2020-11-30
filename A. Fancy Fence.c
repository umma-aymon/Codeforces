#include<stdio.h>
int main()
{
    int t,a,an;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        an=360%(180-a);
        if(an)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
