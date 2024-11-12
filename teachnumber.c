#include <stdio.h>
#include <math.h>
int main() 
{
    int n=0,s=0,cnt=0,nCopy=0,left=0,right=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    nCopy=n;
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    n=nCopy;
    if(cnt%2==0)
    {
        left=n/(int)pow(10,cnt/2);
        right=n%(int)pow(10,cnt/2);
        s=left+right;
        if((s*s)==nCopy)
        {
            printf("%d is a Tech Number",nCopy);
        }
        else
        {
            printf("%d is not a Tech Number",nCopy);
        }
        }
    else
    {
        printf("%d is not a Tech Number",nCopy);
    }
    return 0;
}