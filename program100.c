// problems on pattern printing
//  input 7  
// op a b c d e f g

// ip 3
// op a b c 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

        //  1           2         3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    printf("%c\t",ch);    // imp change    //4
    ch++;                                  // ++ mule b c d e f g print honar
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