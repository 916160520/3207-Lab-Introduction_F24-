#include <stdlib.h>

char randchar()
{
	char chars[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int num = rand() % 26;
	return chars[num];
}