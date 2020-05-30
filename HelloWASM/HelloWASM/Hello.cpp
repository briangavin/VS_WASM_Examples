#include "emscripten.h"

void Hello()
{
	EM_ASM(
		alert('Hello');
	);

}
