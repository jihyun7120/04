#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x, m, s;
    printf("input the second: ");
    scanf("%i", &x);
    
    m = x/60;
    s = x%60;
    
    printf("The time is %i:%i", m, s);
    
    
  
  system("PAUSE");	
  return 0;
}
