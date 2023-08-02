// problems on pattern printing
//  input 7  
// op 7 * 6 * 5 * 4 * 3 * 2 * 1 *

// ip 3
// op 3 * 2 * 1 *

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
    printf("%d\t*\t",iCnt);    // imp change
    }
    printf("\n");
}
int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}