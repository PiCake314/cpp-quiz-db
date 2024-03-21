#include <iostream>

int main(){
	char str[3] = "Pie";
	std::cout << str;
}
//: What is the output of the following code?
/*
# "Pie"
# garbage value
# segmentation fault
@ compile time error
*/
//: The string "Pie" has an implicit null terminator, making it 4 characters long. However, the array is only 3 characters long.