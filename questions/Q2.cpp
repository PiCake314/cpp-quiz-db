#include <iostream>

int main(){
	bool b = true;
	std::cout << ++b;
}
//: What is the output of the following code?
/*
# 0
# 1
# 2
@ syntax error
*/
//: Bool increment got deprecated in C++17.