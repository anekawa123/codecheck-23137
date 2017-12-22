#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char *argv[])
{
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  assert(argc > 1);
  printf("Hello %s!", argv[1]);
  return 0;
}
