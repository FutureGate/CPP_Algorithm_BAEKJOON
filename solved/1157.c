#include <stdio.h>
#include <string.h>

int main(void)
{
	int freq[26];
	char text[1000001];
	char result = '\0';
	
	int i=0, index, len;
	
	scanf("%s", text);
	
	for(i=0; i<26; i++) {
		freq[i] = 0;
	}
	
	len = strlen(text);
	
	for(i=0; i<len; i++) {
		if(('a' <= text[i]) && (text[i] <= 'z'))
			text[i] -= 32;
		
		freq[text[i] - 'A']++;
	}
	
	index = 0;
	
	for(i=0; i<26; i++) {
		if(freq[i] > freq[index])
			index = i;
	}
	
	for(i=0; i<26; i++) {
		if(i == index)
			continue;
		else if(freq[i] == freq[index]) {
			result = '?';
		}
	}
	
	if(result != '?')
		result = 'A' + index;
	
	printf("%c", result);
}
