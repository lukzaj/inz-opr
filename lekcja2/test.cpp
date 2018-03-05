#include "TLibrary.h"

int main()
{
	TLibrary lib("yyy");
	lib.setData("aaa", "bbb");
	lib.printData();
	return 0;
}
