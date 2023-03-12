#include "outer_define.h"

void SystemInit() {}
	
int main()
{
	init(HAVE_CURSOR);
	my_printf("hello\nworld");
	while(1);
}
