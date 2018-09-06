#include <iostream>
#include <stdlib.h>
#include "flexCharManager.h"
using namespace std;

int main(){
  /*
  int s;
  char arr[10];
  char *meme = arr;
  for(int i=0; i<10; i++){
    arr[i] = 'a' + i;
  }
  cin >> s;

  Mem_Block *yeet;
  yeet = new Mem_Block(s, meme);
  for(int i=0; i<s; i++){
    yeet->physical_location[i] = 'b' + i;
  }
  cout << yeet->physical_location << endl;
  */
  int max = 100;
  int n;
  int u = 0;
  int start;
  //int k = 5;
  cin >> n;
  char *shit;
  shit = new char[n];
  char* yeet;
  yeet = new char[max];
  Mem_Block** fuck;
  Mem_Block* dear = new Mem_Block(n, yeet);
  
  for(int i=0; i<100; i++){
    yeet[i] = '0';
  }

  
   for(int i=0; i < max; i++){
    int k = 0;
    int j = i;
    while(yeet[j] == '0' && k<n){
      j++;
      k++;
    }

    if(k == n){
      start = i;
      break;
    }
  }

  

  for(int i=start; i < start+n; i++){
    dear->physical_location[i-start] = '1';
  }
  
  int four =0;
  int** ass;
  int* butt;
  butt = new int[3];
  ass = &butt;
  if(n > 3){
    while (n>3+four){
      butt = new int[3*four];
      four++;
    }
  }
  for(int i=0; i<n; i++){
    butt[i] = i;
  }
  for(int i=0; i<n; i++){
    cout << butt[i] << endl;
  }
  ass = &butt;
  for(int i=0; i<n; i++){
    ass[i] = &butt[i];
    cout << *ass[i] << endl;
    u++;
  }
  cout << sizeof(ass) << endl;
  


  fuck = &dear;
  cout << dear->size << endl;
  cout << sizeof(fuck) << endl;
  //dear->physical_location = shit;
  
  //cout << yeet << endl;
  //cout << &fuck << endl;
  //cout << &dear << endl;
  //cout << dear->size << endl;

//  for(int i=0; i<100; i++){
//    cout << yeet[i] << ' ';
//  }
  cout << endl;
  //delete shit;
  //delete yeet;
  delete[] shit;
  delete[] yeet;
  delete[] dear;
/*
  for(int i=0; i<n; i++){ 
    if(shit[i] == '1'){
      int j = 0;
      while(shit[i] == '1'){
        j++;
        i++;
      }
      if (j == k){
        for(int o = i; o < n; o++){
          cout << shit[o] <<  endl;
        } 
      }
      else{
        cout << "not enough" << endl;
      }
    }

  }
*/
  return 0;
}

