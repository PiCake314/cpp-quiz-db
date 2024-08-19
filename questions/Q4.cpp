#include <iostream>

int main(){
	unsigned char arr[3][4][5] = {0};
	unsigned char **arr2 = arr[2];
    std::cout << (arr2[0][1] == arr[2][0][1]);
}
//: What is the output of the following code?
/*
# 0
# 1
# segmentation fault
@ compile time error
*/
//: The correct type is 'unsigned char(*arr2)[5]'.