#include <iostream>
#include <string>

int main(){
    using std::operator""s;
    const auto s1 = "Hello"s;
    const auto s2 = "World"s;
    std::cout << (std::string::compare(s1, s2) == s1.compare(s2));
}

//: What is the output of the following code?
/*
# 15
# 0
@ -15
# Compile Time Error
*/
//: There is no such function such as "std::string::compare(std::string, std::string)"