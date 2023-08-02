// problems on pattern printing
//  input 7  
// op A B C D E F G 

// ip 3
// op A B C 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

        //  1                     2         3
    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
    printf("%c\t",ch);    // imp change    //4
                                      
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