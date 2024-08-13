
1. Display This Information using printf 
a. Your Name 
b. Your Birth date 
c. Your Age 
d. Your Address




#include <stdio.h>

int main() {
    
    char name[50];       
    char birthdate[20];  
    int age;
    char address[100];  
    printf("Enter your name: ");
    scanf("%49s", name); 
    printf("Enter your birth date (e.g., January 1, 2000): ");
    scanf("%19s", birthdate); 

    printf("Enter your age: ");
    scanf("%d", &age); 

    printf("Enter your address: ");
    scanf(" %[^\n]s", address); 
    printf("\nDisplaying Information:\n");
    printf("a. Your Name: %s\n", name);
    printf("b. Your Birth date: %s\n", birthdate);
    printf("c. Your Age: %d\n", age);
    printf("d. Your Address: %s\n", address);
    
    return 0;
}


