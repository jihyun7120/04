#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  
    int x;
    int hour, min, sec;
    
    printf("input the second: ");
    scanf("%i", &x); 
    
    hour = x / 3600;
    min = (x%3600) / 60;
    sec = x % 60;
    
    printf("The time for %i second is %i:%i:%i", x, hour, min, sec);
  
    
  system("PAUSE");	
  return 0;
}
