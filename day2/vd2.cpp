#include<iostream>

namespace A 
{
   int age {5};
}

namespace B
{
   double height {1.75};
}



int main()
{
 
   std::cout << "Tuoi cua ban la : " << A::age << " va chieu cao la : " << B::height << std::endl;

   return 0;
}