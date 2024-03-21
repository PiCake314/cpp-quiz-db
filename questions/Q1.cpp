int main(){
	;
	{}
	{};
	[]{};
	[](){};
	[](){}();
	{{}[]{};};
	{}{}{}{}{}
	[](){{}}();
	{{}[](){}();};
	[](){{};{}{};}();
}
//: Does the following code compile?
/*
@ yes
# no
# wtf
*/
//: Lambdas, scopes, scopes inside lambdas, and lambdas inside scopes!