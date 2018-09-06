#include <iostream>
#include <stdlib.h>
#include "flexCharManager.h"
using namespace std;

int main(int argc, char *argv[])
{
  flexCharManager simplest_mem_manager;

  simplest_mem_manager flexCharManager();

  simpleCharManager memMan1, memMan2, Rmem1, memMan3,initial;
  char* w1 = memMan1.alloc_chars(5);
  char* w2 = memMan2.alloc_chars(6);
  char* w3 = memMan3.alloc_chars(10);
  w1[0] = 'H';
  w1[1] = 'e';
  w1[2] = 'l';
  w1[3] = 'l';
  w1[4] = 'o';
  w1[5] = ' ';
  
  w2[0]='w';
  w2[1]='o';
  w2[2]='r';
  w2[3]='l';
  w2[4]='d';
  w2[5]='!';
  w2[6]='\n';

  for(int i=0; i<7; i++){
  	cout << w1[i];
  }
  for(int i=0; i<7; i++){
  	cout << w2[i];
  }

  Rmem1.free_chars(w2);

  w3[0]='m';
  w3[1]='o';
  w3[2]='o';
  w3[3]='n';
  w3[4]='!';
  w3[5]=' ';
  w3[6]='B';
  w3[7]='y';
  w3[8]='e';
  w3[9]='.';
  w3[10]='\n';
  for(int i=0; i<7; i++){
  	cout << w1[i];
  }
  for(int i=0; i<11; i++){
  	cout << w3[i];
  }
  
  

 

  /*write driver code as described in the assignment to replace this */
  
  
  return 0;
}

