#include<iostream>
#include<functional>

//A simple free function
int add(int a, int b) {
	return a+b;
}

//A functor

struct Multiply {
	int operator()(int a, int b){
		return a*b;
	}
};

int main() {
	//use std::function to store different callable objects
	std::function<int(int,int)> func;
	//assign a free function
	func = add;
	std::cout<<"ADD : " << func(3,4) << std::endl;

	//assigning a lambda function
	func = [] (int a, int b) {return a-b;};
	std::cout<<"Lambda subtract :" << func(12,10)<<std::endl;

	//assigning a functor
	
	func = Multiply();
	std::cout << "Multiply: "<< func(3,5)<<std::endl;

	return 0;
}
