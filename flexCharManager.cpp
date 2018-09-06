#include "flexCharManager.h"

flexCharManager::flexCharManager(){
	for(int i=0; i<BUF_SIZE; i++){
		buffer[i] = '\0';
	}
}

flexCharManager::~flexCharManager(){
}
             
char* flexCharManager::alloc_chars(int n){
    //int u = 1;
    int start = 0;
    free_memory = 0;
    char* memory = buffer[BUF_SIZE];
    Mem_Block* initial = new Mem_Block(n, memory); //creation of initial mem_block
    if(n > BUF_SIZE){
		return NULL;
	}
    //finding total amount of free memory
    for(int i=0; i<BUF_SIZE; i++){
    	if(buffer[i] == '\0'){
    		free_memory++;
    	}
    }
    //return null if not enough free memory found
    if(n > free_memory){
    	return NULL;
    }
    //cheking buffer for space to creat new mem block
    for(int i=0; i < BUF_SIZE; i++){
    	int k = 0;
   		int j = i;
    	while(memory[j] == '\0' && k<n){
      		j++;
      		k++;
    	}
    	//found enough space in the memory array
    	if(k == n){
      		start = i;
        	break;
        }
        //not enough space found
       	if(i == (BUF_SIZE-1) && k != n){
       	 	return NULL;
       	}
    }
	//
	if(initial->physical_location[start] == '\0'){
		for(int i=0; i<n; i++){
			used_memory[i] = &initial[i];
		}
		used_mem_size = initial->size;
		return initial->physical_location + start;
		delete[] initial;
	}
	else{
		return NULL;
	}

    return NULL;
}

void flexCharManager::free_chars(char* p){
	for(int i=0; i<BUF_SIZE; i++){
		if(buffer[i] == p[0]){
			for(int j=i; j<used_mem_size; j++){
				buffer[j] = '\0';
			}
		}
	}

}         


