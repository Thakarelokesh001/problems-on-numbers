#include<stdio.h>

int Power(int,int);

int main()
{
    int iValue1 =0,iValue2=0,iRet=0;
    
    printf("Enter Base Number :\t");
    scanf("%d",&iValue1);
    
    printf("Enter Power Number:\t");
    scanf("%d",&iValue2);
    
    iRet = Power(iValue1,iValue2);
    printf("%d",iRet);
    
    return 0;
}

int Power(int base,int power)   //O(N)  Where N is the value of power.
{
    int iMult = 1;
    int iCnt=0;
    if(base<0)
    {
        base=-base;
    }
    if(power<0)
    {
        power=-power;
    }
    
    for(iCnt=1;iCnt<=power;iCnt++)
    {
        iMult = iMult * base;
    }
    
    return iMult;
}
