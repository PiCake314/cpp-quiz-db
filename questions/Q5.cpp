#include <istream>

int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << 3[arr];
}
//: What is the output of the following code?
/*
# 3
@ 4
# segmentation fault
# syntax error
*/
//: The bracket operator translates to simple pointer addition. Addition is commutative, so '*(arr + 3)' is the same as '*(3 + arr)'.