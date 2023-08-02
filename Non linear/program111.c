// problems on non linear pattern printing  time com Nsquaqre
// ip 
// row 3
//colm 5

/*
     * * * * *
     * * * * *
     * * * * *
  
*/    


#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i = 0; 
 int j = 0;        // 2 loop sathi varaiable la  // i and j mhnje iCnt

 for(i = 1; i <= iRow; i++)        // outer loop
 {
     for(j = 1; j <= iCol; j++)     //inner loop
     {
          printf("*\t");
     }
     printf("\n");
 }
}

int main()
{
 int iValue1 = 0;
 int iValue2 = 0;

 printf("Enter number of rows : \n");
 scanf("%d",&iValue1);

 printf("Enter number of Columns : \n");
 scanf("%d",&iValue2);

 Display(iValue1,iValue2);
 

    
    
    return 0;
}