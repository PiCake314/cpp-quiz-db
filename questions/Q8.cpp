#include <iostream>

struct Bit{
    int b : 2 = 1;
};

int main(){
	Bit bit;
    std::cout << ++bit.b;
}

//: What is the output of the following code?
/*
# -1
# -2
# Syntax Error
@ Undefined Behavior 
*/
//: Signed integer overflow is undefined behavior.