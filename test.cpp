#include <iostream>
using namespace std;
int main(){
	while(true){
	double a,b;
	char c;
	cin>>a>>c>>b;
	switch(c){
		case '+':cout<<a+b; break;
		case '-':cout<<a-b;break;
		case '*':cout<<a*b; break;
		case '/':cout<<a/b; break;
	}
	cout<<'\n';}
}
