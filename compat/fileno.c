#define COMPAT_CODE_FILENO
#include "../jutsu-compat-util.h"

int git_fileno(FILE *stream)
{
	return fileno(stream);
}
