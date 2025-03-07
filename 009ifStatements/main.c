#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    // if statement = Do some code if a condition is true.
    //                 If the condition is false, don't do it.


    // Example 1
    int age = 0;

    printf("Enter you age: ");
    scanf("%d", &age);

    if(age >= 65){
        printf("You are a senior citizen;");
    }
    else if(age < 0){
        printf("You haven't been born yet");
    }
    else if(age == 0){
        printf("You are a new-born!");
    }
    else if(age >= 18){
        printf("You're an adult!");
    }
    else{
        printf("You are a child!");
    }


    // Example 2
    bool isStudent = false;
    int temp;

    printf("Are you a studnet? (0 = false, 1 = true): ");
    scanf("%d", &temp);

    isStudent = temp;

    if (isStudent){
        printf("You are a student\n");
    }
    else{
        printf("You are NOT a student\n");
    }

    // Example 3
    char name[50] = "";

    printf("Enter you name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';

    if (strlen(name) == 0)
    {
        printf("You did not enter your name");
    }
    else{
        printf("Hello %s\n", name);
    }
    
    
    


    return 0;
}