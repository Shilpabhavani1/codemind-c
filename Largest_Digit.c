#include<stdio.h>
int main()
{
    int n,r,large=0;
    scanf("%d",&n);
    while(n>10)
    {
        r=n%10;
        n=n/10;
        if(large<r)
        {
            large=r;
            
        }
        else
{
    large=large;
    
}
}
if(n<10)
{
    r=n%10;
    n=n/10;
    if(large<r)
    {
        large=r;
    }
    else
{
    large=large;
}
}
printf("%d",large);
        
    
}