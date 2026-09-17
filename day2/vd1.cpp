#include <iostream> 
/*1. Tai sao lai phai include thu vien iostream
 vi cout duoc dinh nghia trong thu vien nay
2. Tai sao lai khai bao namesapce std vi cout duoc dinh nghia trong namespace std */ 

using namespace std;
// day la comment 1 dong 

#define PI 3.14 // day la comment 1 dong
#define MAX 100 // day la comment 1 dong
int main()
{
          /* This is a multi-line comment
             It can span multiple lines
          */
          int age {5};
          cout << "Tuoi cua ban la bao nhieu : " << age << endl;
          cout << "Gia tri cua PI la : " << PI << endl;
          return 0;
}
