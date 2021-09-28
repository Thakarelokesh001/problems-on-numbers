#include<stdio.h>
#include<stdbool.h>

int sumFactors(int);
bool checkPerfect(int);

int main()
{
    int iValue =0;
    bool bRet=false;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);
    
    bRet = checkPerfect(iValue);

    if(bRet == true)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Number is not perfect number");
    }

    return 0;
}

int sumFactors(int iNo)
{
    int iSum=0;
    int i=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    //    1     2       3
    for(i=1;i<=(iNo/2);i++) //O(n/2)                    // for(i=1;i<iNo;i++) O(n)
    {
        if((iNo % i) == 0)  //4
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

bool checkPerfect(int iNo)
{
    int iRet=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iRet = sumFactors(iNo);

    if(iRet == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}


