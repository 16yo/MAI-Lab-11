#include <stdio.h>
#include <inttypes.h>

#include "option.h"
#include "string.h"

int main() {
	
	string s;
	option r_ = construct_from_char_pointer(&s, "Hello World!\n");

	if (err(r_))
		print_error(r_);
	else
		print(s);

	return 0;
}