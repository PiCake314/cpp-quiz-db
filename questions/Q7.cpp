#include <iostream>

auto sub(auto... args) { return -(-args - ...); }

int main(){
	std::cout << sub(3, 14, 1, 5, 9);
}

//: What is the output of the following code?
/*
# -2
@ -6
# -26
# 6
*/
//: The expression unfolds to -(-3 -(-14 - (-1 - (-5 - (-9)))))