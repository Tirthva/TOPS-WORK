#include <stdio.h>
void reverse(char *str, int index, 
			int n)
{

	if(index == n)
		return;

	char temp = str[index]; 

	
	reverse(str, index + 1, n); 
	printf("%c", temp);			 
}

int main() 
{
	char a[] = "Jay Shree Swaminarayan";
	int n = sizeof(a) / sizeof(a[0]);
	reverse(a, 0, n);

	return 0;
}

