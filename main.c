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
    
    
  //����: 4�� ������ �������鼭 100���� ����������������� 
  //�Ǵ� 400���� ������ �������� ���� 
  
  system("PAUSE");	
  return 0;
}
