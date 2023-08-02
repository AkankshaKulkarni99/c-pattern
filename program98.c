// problems on pattern printing
//  input 7  
// op 

// ip 3
// op 1 2 3

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
    printf("%d\t",iCnt);    // imp change
    }
    printf("\n");
}
int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of Number : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}