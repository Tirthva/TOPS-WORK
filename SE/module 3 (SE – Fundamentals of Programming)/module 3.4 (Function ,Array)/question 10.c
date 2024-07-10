#include <stdio.h>

int isPalindrome(int num) {
    int originalnum = num;
    int reversenum = 0;

    while (num > 0) {
        reversenum = reversenum * 10 + num % 10;
        num /= 10;
    }

    if (originalnum == reversenum)
        return 1;
    else
        return 0; 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}

