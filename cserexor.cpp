#include "std_lib_facilities.h"
int main() 
{ 
  int x = 3, y = 9; 
  x = x ^ y;  
  y = x ^ y;  
  x = x ^ y;   
  
cout<<"x: "<< x <<"\n";
cout<<"y: "<< y << "\n";
  
  return 0; 
} 
