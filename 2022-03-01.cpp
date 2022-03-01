#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


//------------------------------------------------------
template<typename Iterator>
void f(Iterator& it) {
   cout << (*it) << endl;
   ++it;
   cout << (*it) << endl;
}
//------------------------------------------------------
int main () {

   vector<int> v = {1, 2, 3, 4};
   vector<int>::iterator it = v.begin();
   f(it);
   cout << (*it) << endl;

//   f(4);

   return EXIT_SUCCESS;
}  // main

