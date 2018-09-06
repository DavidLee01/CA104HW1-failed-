#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
  string file = argv[1];
  string line;
  fstream myfile;
  
  int counter = 0;
  
  myfile.open (file.c_str());
  myfile >> counter;

  string *arr;
  arr = new string[counter];

  for(int i=0; i<counter; i++){  
    myfile >> line;
    arr[i] = line;
  }
    
  for(int i=counter-1; i>=0; i--){
    cout << arr[i] << endl;
  }
  myfile.close();
  return 0;
}