// problems on pattern printing
//  input 7  
// op A A A  A A 

// ip 3
// op A A A

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
    printf("A\t");
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