#include<stdio.h>

void DisplayTable(int);

int main()
{
    int iValue=0;
    
    printf("Enter Number to Display its table : \t");
    scanf("%d",&iValue);
    
    DisplayTable(iValue);
    
    return 0;
}

void DisplayTable(int iNo)
{
    int i=0;
    int iMul = 1;
    
    if(iNo ==0)
    {
        return;
    }
    
    if(iNo >0)
    {
    printf("Table of %d is\n",iNo);
    
    for(i=1;i<=10;i++)
    {
        iMul = iNo * i;
        printf("%d * %d = %d\n",iNo,i,iMul);
    }
    }
   
}

