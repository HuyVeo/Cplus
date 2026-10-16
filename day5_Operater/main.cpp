
#include <iostream>
#include <cmath>
int main() {
          // int a ;
          //  int my_var {200};
          // a=my_var;
          //  std :: cout<<"bao nhieu la: "<<a<<std :: endl;

          int a{10}; 
          int b{2};
          a++;
          std::cout << "a + b = " << a + b << std::endl;
          std::cout << "a - b = " << a - b << std::endl;
          std::cout << "a * b = " << a * b << std::endl;
          std::cout << "a / b = " << a / b << std::endl;
          std::cout << "a % b = " << a % b << std::endl;
          std ::cout << "a++ = " << a << std::endl;
          std::cout << "++a = " << ++a << std::endl;        
          std::cout << "phep chia "<< static_cast<double>(a) / b << std::endl;
          std :: cout << "luy thua cua a la: "<< std::pow(a,b)<<std :: endl;


    return 0;
}
