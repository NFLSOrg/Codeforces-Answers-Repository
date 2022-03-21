#include <stdio.h>
 
int main()
{
    long long ans;
    long long n;
    scanf("%I64d", &n);
    long long i;
    if(n%2==0)
        ans=((n/2)*((n/2)+1))-((n/2)*(n/2));
    else
        ans=(((n-1)/2)*(((n-1)/2)+1))-(((n+1)/2)*((n+1)/2));
    printf("%I64d\n", ans);
    return 0;
}
