#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]);
int main()
{
	char word[1000] = "\0" ;
	scanf("%s",&word);
	isPalindrome(word);

}


void isPalindrome (char str[])
{
	int left = 0, right = strlen(str) - 1;
	if (left < right) 
	{
		if (str[left++] != str[right--])
		{
			printf("%s is not palindrome.", str);
			return;
		}
	}
	printf("%s is palindrome.", str);

}