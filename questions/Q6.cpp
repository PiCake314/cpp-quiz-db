#include <iostream>

void print(int &x)        { std::cout << 1; }
void print(int &&x)       { std::cout << 2; }
void print(const int &x)  { std::cout << 3; }
void print(const int &&x) { std::cout << 4; }

int main(){
    int a = 3;
    print((const int)a);
    print((const int)1);
    print(4);
}
//: What is the output of the following code?
/*
# 342
@ 222
# 314
# 334
*/
//: 'const' type qualifier on return type has no effect for primitive types.