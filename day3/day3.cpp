#include<iostream>

int main() {
          /*
          interger : số nguyên : int , short , long 
          floating point : số thực : float , double 
          charater : ký tự : char
          boolean : logic : bool
          */

          int number {100}; // số nguyên - 4 byte
          double height {1.75}; // số thực - 8 byte
          char grade {'A'}; // ký tự - 1 byte

          std::cout << "The number is: " << number << std::endl;
          std ::cout << "The height is: " << height << std::endl;
          std::cout << "The grade is: " << grade << std::endl;
          return 0;

}