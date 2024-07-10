#include <stdio.h>

void reverse_string(char str[]) {
    int length = strlen(str);
    int i;
    for ( i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int is_palindrome(char str[]) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }
    
}

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void print_employee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    reverse_string(str);
    printf("Reversed string: %s\n", str);

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    struct Employee employees[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    // Printing information for five employees
    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("\nDetails of Employee %d:\n", i + 1);
        print_employee(employees[i]);
    }

    return 0;
}

