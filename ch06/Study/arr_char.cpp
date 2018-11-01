#include <iostream>
#include <stdio.h>
#include <string.h>

const int maxlen = 100; 
void append(char s[], int s_maxlength, const char t[]);

int main(int argc, char ** argv) {
	char greeting[] = "Hello";
	char y = 121; 
	std::cout << strlen(greeting) << std::endl;
	char string1[maxlen] = "Hello";
	char string2[] = "Baby"; 
	append(string1, maxlen, string2); 
	std::cout << string1 << std::endl; 
	return 0;
}

/**
@param s the string to which t is appended
@param s_maxlength the maximum length of s(not counting '\0')
@param t the string to append
*/
void append(char s[], int s_maxlength, const char t[]) {
	int i = strlen(s); 
	int j = 0; 
	s[i++] = ' '; 
	while (t[j] != '\0') 
		s[i++] = t[j++]; 
	s[i] = '\0';
}
