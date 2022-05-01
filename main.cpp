#include "mainlib.cpp"

using std::stringstream;
using std::string;

ColorChar::ColorChar(){
	c=0;
	val.font=0;
	val.background=0;
	val.attr=0;
}

/*
ColorChar::ColorChar(char c){
	this->c=c;
};

ColorChar::ColorChar(char c,int font){
	ColorChar(c);
	val.font=font;
};

ColorChar::ColorChar(char c,int font,int background){
	ColorChar(c,font);
	val.background=background;
};
*/
ColorChar::ColorChar(char c,int font = 0,int background = 0,int attr = 0){
	//ColorChar(c,font,background);
	this->c=c;
	val.font=font;
	val.background=background;
	val.attr=attr;
}

int ColorChar::show(){
	stringstream ss;
	if(!(val.font>=0&&val.font<=9&&val.background>=0&&val.background<=9)){
		throw "out of range";
	}
	ss<<"\033[3"<<val.font<<";4"<<val.background;
	for(int i=1,id=1;i!=(1<<10);i<<=1,++id){
		if(i&val.attr){
			ss<<';'<<id;
		}
	}
	ss<<"m%c\033[0m";
	string s;
	ss>>s;
	//printf("%s\n",s.c_str());
	return printf(s.c_str(),c);
};

int show(char c,int font = 8 ,int background = 8,int attr = 0){
	ColorChar ch(c,font,background,attr);
	return ch.show();
}
