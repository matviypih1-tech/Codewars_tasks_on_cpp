#include <string>

using namespace std;

int getCount(const string& inputStr){
  int count = 0;
  for (char i :inputStr ){
    if (i == 'a' || i == 'i' || i == 'e' || i == 'u' || i == 'o'){
      count ++;
    }
  }
  return count;
}