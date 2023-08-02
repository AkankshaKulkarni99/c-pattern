// problems on pattern printing
//  input 5 
// op -5 -4 -3 -2 -1



#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
                                
    for(iCnt = -iNo; iCnt < 0; iCnt++)        // imp
    {
       printf("%d\t",iCnt);       
                                      
    }
    
 
}
int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}