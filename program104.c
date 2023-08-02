// problems on pattern printing
//  input 7  
// op 2 4 6 8 10 12 14

// ip 3
// 2 4 6 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    

        //  1                     2         3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    printf("%d\t",iCnt * 2);    // imp change    //4
                                      
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