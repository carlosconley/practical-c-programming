#define ALLOCSIZE 10000

void strcat(char *s, char *t)
{
	while(*s++ != '\0')
		;
	--s;
	do
		*s++ = *t++;
	while(*t != '\0');
}
