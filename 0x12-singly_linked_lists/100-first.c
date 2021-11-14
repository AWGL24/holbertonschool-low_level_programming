#include <stdio.h>
/**
 * premain - funs before main
 *
 */
void __atribute__ ((constructor)) premain()
{
	printf("You're beat ! and yet, you must allow\n"
			"I bore my house upon my back!\n");
}
