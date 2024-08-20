int main(){
    [a = 0]<typename T>(T) mutable { return ++a; }<int>(0);
    [a = 0]<typename T>(T) mutable { return ++a; }.operator()<int>({});
    [a = 0]<typename T>(T) mutable { return ++a; }.template operator()<int>({});
}

//: Does the following code compile?
/*
# Yes. It's fine.
# Yes, but it's undefined behavior
@ No.
# I don't know...
*/
//: Can't specify template parameters without explicity calling ".operator()".