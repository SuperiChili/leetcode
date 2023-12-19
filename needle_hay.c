#include <string.h>
#include <stdio.h>

int strStr(char* haystack, char* needle) 
{
    int len_needle = strlen(needle);
    int i = 0;
    int entry;
	int j;

    while (haystack[i])
    {
        entry = i;
		j = 0;
        while (needle[j] && haystack[i] == needle[j])
        {   
            i++;
            j++;
        }
        if (j == len_needle)
            return (entry);
        i = entry + 1;
    }
    return (-1);
}

int main(void)
{
	int result;

	result = strStr("leetcodeleeto", "leeto");
	printf("%d\n", result);
}