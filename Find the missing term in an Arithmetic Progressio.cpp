static long findMissing(std::vector<long> list)
{


    long long_n = list.size();
    
    long first = list.front(); 
    long last = list.back();
  
    long actsize;
  actsize = (((first + last)) * (long_n+1)) / 2 ;
  long real = 0 ;
  for (int i:list){
    real += i;
  }
  
  long res = actsize - real;
  return res;
  
}