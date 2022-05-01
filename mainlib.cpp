#include<string>
#include<sstream>

struct color{
	int font;
	int background;
	int attr;
};


class ColorChar{
public:
	ColorChar();
	ColorChar(char,int,int,int);
	int show();
private:
	color val;
	char c;
};

int show(char,int,int,int);
