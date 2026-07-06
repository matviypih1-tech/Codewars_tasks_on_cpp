#include <string>


int digital_root(int n)
{
  while (n >= 10){
    int res = 0;
    

    while (n > 0){
      res += n % 10;
      n = n / 10;
      
    }
  n = res;
    
  }
  return n;
  
}