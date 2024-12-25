#include<iostream>
#include<stdlib.h>
void memory_leak () {
	std::cout<<"Memory leak called"<<std::endl;
	int* mem_ptr = (int*) malloc (5 * sizeof(int));
}

int main(int argc, char** args) {
	memory_leak();
	std::cout<<"Program finished"<<std::endl;
	return 0;
}
