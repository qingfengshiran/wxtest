
#include <iostream>
#include <stdio.h>

int main()
{
   std::cout<<"Hello word!"<<std::endl;
   char a = '2';
   char *p = &a;
   std::cout<<*p<<std::endl;
   printf("%p\n", p);
   std::cout<<p<<std::endl;   
   return 0;
}
