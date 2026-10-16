#include <iostream>

int main(){
          /* - Hiểu là sô nguyên biểu diễn dưới dang (0,1)
           * - Được sử dụng để biểu diễn các giá trị đúng/sai
           * - khi chúng ta dịch trái hoặc dịch phải - dịch k  0<=k<n
           * - Dịch trái : thì các bit được dịch sang trái k vị trí, các bit 0 được thêm vào bên phải
           * - Dịch phải : thì các bit được dịch sang phải k vị trí, các bit 0 được thêm vào bên trái
           */
          unsigned int a{10};
          unsigned int b ;
          unsigned int c ;

          b = (a << 2); // Dịch trái 2 vị trí
          std :: cout << "The value of b after left shift is: " << b << std::endl;
          // 00000000 00000000 00000000 00001010 day la 2^1+2^3=10
          // 00000000 00000000 00000000 00101000 day la 2^3+2^5=40

          c = (a >> 2); // Dịch phải 2 vị trí
          std :: cout << "The value of c after right shift is: " << c << std::endl;
          // 00000000 00000000 00000000 00001010 day la 2^1+2^3=10
          // 00000000 00000000 00000000 00000010 day la 2^1=2


          return 0;
}