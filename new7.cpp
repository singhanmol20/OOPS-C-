#include <iostream>

using namespace std;

int main() {
   int var1 = 5, var2 = 5;

   // 5 is displayed
   // Then, var1 is increased to 6.
   cout << var1++ << endl;

   // var2 is increased to 6
   // Then, it is displayed.
   cout << ++var1 << endl;

   return 0;
}
