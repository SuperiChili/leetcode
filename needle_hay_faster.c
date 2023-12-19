#include <string.h>
#include <stdio.h>

int strStr(char* haystack, char* needle) 
{
    int len_needle = strlen(needle);
    int len_heystack = strlen(haystack);
    int i = 0;
    int j;

    while (i + len_needle <= len_heystack)
    {
        j = len_needle - 1;
        while (j >= 0 && haystack[i + j] == needle[j])
        {
            j--;
        }
        if (j == -1)
            return (i);
        i++;
    }
    return (-1);
}

int main(void)
{
	int result;

	result = strStr("leetcodeleetbo", "l");
	printf("%d\n", result);
}