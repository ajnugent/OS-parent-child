#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */

  //cout << argv[1];
  int x = atoi(argv[1]);

  int i = 0;
  while(i< x){
      i++;
      cout << "Process: " <<getpid() << " ";
      cout<< i << "\n";

  }

  return 0;

}
