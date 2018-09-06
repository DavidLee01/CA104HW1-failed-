#include <cstddef>
#include "simpleCharManager.h"



simpleCharManager::simpleCharManager(){
for(int i=0; i<BUF_SIZE; i++){
		buffer[i] = '\0';
	}
}

simpleCharManager::~simpleCharManager(){}
             
char* simpleCharManager::alloc_chars(int n){
    if(n> BUF_SIZE){
    	return NULL;
    }
    else{
        	for(int i=0; i<BUF_SIZE; i++){
        		if(buffer[i] == '\0'){
        			for(int j=i; j<i+n; j++){
        				buffer[j] = ' ';
        			}
        			return buffer+i;
        		}
        	
        	}
        }
    return NULL;    
    }


void simpleCharManager::free_chars(char* p){
	for(int i=0; i<BUF_SIZE; i++){
		if(buffer[i] == p[0]){
			for(int j=i; j<BUF_SIZE; j++){
				buffer[j] = '\0';
			}
		}
	}
}         




