#include <stdio.h>

int main() {

    // TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celcius = 0.0f;

    printf("Temperaturn Conversion Program\n");
    printf("C. Celsius to Farenheit\n");
    printf("F. Farenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahreheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C')
    {
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9/5) + 32;
        printf("%.2f ° Celsius is equals to %.2f ° Fahrenheit\n", celcius, fahrenheit);
    }
    else if (choice == 'F'){

        // F to C
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 5/9;
        printf("%.2f ° Fahrenheit is equals to %.2f ° Celsius\n", fahrenheit, celcius);
    }
    else{
        printf("Invalid choice! Please enter C or F\n");
    }
    

    return 0;
}