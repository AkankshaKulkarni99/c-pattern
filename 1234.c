#include<stdio.h>

 void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
   
    
    if(iRow != iCol)
    {
        printf("Invalid");
        return;
    }
    
    for(i = iRow; i >= 1; i--)
    {
    for(j = 1; j <= iCol; j++)
    {
        if((i <= j))
        {
        printf("*\t"); 
        }
        else 
        {
            printf(" \t");
        }
    
    }
           printf("\n");
    }
    
}

int main()

{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter value of row");
    scanf("%d",&iValue1);

    printf("Enter value column");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}