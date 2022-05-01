#include "mainlib.cpp"

using std::string;

int main(){
	show('a',5,6,3);
	puts("");
	/*char *str="hello";
	show(str,6,5,8);*/
	string str="hello";
	show(str.c_str(),str.length(),6,5,8);
}
