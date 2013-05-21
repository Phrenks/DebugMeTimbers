#include <iostream>
#include "DebugMeTimbers.hpp"

using namespace std;

void test_print(){
  cout << "Test print" << endl;
}

void test_print_int(int number){
  cout << "Test print integer: " << number << endl;
}

int main(){
  /* Define test names and if they will be executed */
  add("Print test", true);
  add("Print int test", true);
  add("Print group", false);


  /* Some of your code here */

  debug("Print test", test_print());

  /* Maybe some more code here, they don't need to be together */

  debug("Print int test", test_print_int(3));
  debug("Print group", cout << "Will not print" << endl);

  /* And possibly maybe some here too */

  debug("Print group", cout << "Will not print either" << endl);

  return 0;
}
