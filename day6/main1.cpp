# include <iostream>


int main() {
          int a{10};
          int b, c, d, e, f, g, h;
          a += 5; // a = a + 5 
          b=a;
          std :: cout << "The value of b is: " << b << std::endl;
          a -= 3; // a = a - 3
          c = a;
          std :: cout << "The value of c is: " << c << std::endl;

          a *= 2; // a = a * 2
          d = a;
          std :: cout << "The value of d is: " << d << std::endl;

          a /= 4; // a = a / 4
          e = a;
          std :: cout << "The value of e is: " << e << std::endl;

          a %= 3; // a = a % 3
          f = a;
          std :: cout << "The value of f is: " << f << std::endl;

          a++; // a = a + 1
          g = a;
          std :: cout << "The value of g is: " << g << std::endl;

          a--; // a = a - 1
          h = a;
          std :: cout << "The value of h is: " << h << std::endl;

          std :: cout << "The final value of a is: " << a << std::endl;

          return 0;
}