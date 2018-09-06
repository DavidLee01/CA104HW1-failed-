#include <iostream>

using namespace std;

int main(){
	int n = 5;
	for(int i=0; i<10; i++){
		int k = 0;
		while (k < n){
			k++;
		}
		if(i == (10)){
			cout << k << endl;
		}
	}

}