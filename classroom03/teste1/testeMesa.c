#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int a=3, b=6, c=10;
  float x=6.8, y=5.3, average;
  char letter='s', result, varlog;
      
  result = ((x > 6.0) && (y > 6.0));
  printf("\nresult: %d",result);

  result = ((x > 5.0) || (y > 9.0));
  printf("\nresult: %d",result);

  result = (!(x > 6.0) && !(y > 6.0));
  printf("\nresult: %d",result);

  result = (!(x > 6.0) || (y > 5.0));
  printf("\nresult: %d",result);

  result = !((x > 6.0) || (y > 5.0));
  printf("\nresult: %d",result);

  result = ( ((a+b+c)/3) > (pow(x,2) + c/3 + c%3) );
  printf("\nresult: %d",result);

  result = ((letter == 'S') && (letter == 's'));
  printf("\nresult: %d",result);

  result = ((letter != 'S') || (letter != 's'));
  printf("\nresult: %d",result);

  result = ((letter == 'S') || (letter == 's'));
  printf("\nresult: %d",result);

  result = ((letter != 'N') || (letter != 'n'));
  printf("\nresult: %d",result);

  result = (!(letter == 'N') || (letter == 'n'));
  printf("\nresult: %d",result);

  result = ((letter >= 'A' && letter <='Z') && !(letter >= 'a' && letter <='z'));
  printf("\nresult: %d",result);

  if (letter == 's')
    average = (x+y)/2;
  else average = (a+b)/2;
  printf("\naverage: %.2f",average);
  
  if ((letter!='N') && (letter!='n'))
    result = 1;
  else result = 0;  
  printf("\nresult: %d",result);
  
  average = (x+y)/2.0;
  if (!(average <= 6.0))
    result = 1;
  else result = ((x+y*2)/3) > 6.0;
  printf("\nresult: %d",result);


  varlog = !(0x00);
  varlog = varlog && ((x >= 6.0) || (y >= 6.0));
  if (!varlog)
    result = 1;
  else result = 0;  
  printf("\nresult: %d",result);

  a = a + 5; //a = 8
  b = b + c; //b = 16
  if (a > b) //8>16 FALSE
    a = (int)(x + 0.5);
  else a = (int)y; // a = 5 (int)
  average = (a+b)/2; //5 + 16 / 2 = 10.5
  if (a < 6.0) // 5 < 6
    a = (int)x; // a = 6
  b = 6;  // b = 6
  printf("\naverage: %.2f",average);
  printf("\na: %d",a);
  printf("\nb: %d",b);
  

}    
