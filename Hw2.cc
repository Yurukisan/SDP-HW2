
 #include <iostream>
 #include <cstdlib>
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
  
 int main() {
     int random,result;
     std::srand(time(NULL));
     for(int i=0;i<6;i++)
     {
     std::cout <<rand()%10+1 << std::endl;
     }
 }