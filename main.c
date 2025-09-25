#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int year;
    int x;
     
    printf("input year: ");
    scanf("%i", &year);
    
    
    x = (year%4==0 && year%100!=0) || (year % 400 ==0);
    
    printf("is the year %i the leap year? : %i\n", year, x);
    
    
  //윤년: 4로 나누어 떨어지면서 100으로 나누어떨어지지않으면 
  //또는 400으로 나누어 떨어지면 윤년 
  
  system("PAUSE");	
  return 0;
}
