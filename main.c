#include "outer_define.h"

void SystemInit() {}
	
int main()
{
	init(NO_CURSOR);
	my_printf("hello\nworld");
	while(1);
}
