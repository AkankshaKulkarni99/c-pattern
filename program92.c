// problems on pattern printing
//  input 7  
// op # # # # # # #

// ip 3
// op # # #

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the frequency of symbol..");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}