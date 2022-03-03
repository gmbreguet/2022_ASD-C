#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//------------------------------------------------------
void f(int i) {
   cout << i << endl;
   if (i == 0) // cas trivial
      return;
   f(i-1);  // i => cas trivial
   cout << i << endl;
}

//------------------------------------------------------
int main () {

   f(3);

   return EXIT_SUCCESS;
}  // main

