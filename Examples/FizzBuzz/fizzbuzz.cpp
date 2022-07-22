#include <iostream> 
using namespace std;

int main()
{
  for(int i = 1; i <= 100; i++)
  {
  if(i% 3 == 0 && i % 5 == 0) {
    cout << "FizzBuzz" << endl;
  } else if(i % 3 == 0) {
  } else if(i % 5 == 0) { 
  } else {
    cout <<"number="<<i<< endl;
  } 
  }
  return 0;
}