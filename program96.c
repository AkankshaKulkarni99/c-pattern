// problems on pattern printing
//  input 7  
// op 0 1 2 3 4 5 6 7 

// ip 3
// op 1 2 3

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
    printf("%d\t",iCnt-1);    // imp change
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