#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//------------------------------------------------------
// https://stackoverflow.com/questions/20244743/pass-iterator-as-a-function-parameter
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

   return EXIT_SUCCESS;
}  // main

