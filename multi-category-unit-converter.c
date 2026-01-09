#include <stdio.h>
// --- UNIT CONVERTER ---
// 1. Temperature
// 2. Mass
// 3. Length
// 4. Exit
// Select category: 2

// --- MASS CONVERTER ---
// 1. Kg to Pounds
// 2. Pounds to Kg
// Select conversion: 1

// Enter mass in Kg: 10
// Result: 10.00 Kg is equal to 22.05 Pounds.

// ... (Program returns to Main Menu) ...
// Temperature funnctions
float FahToCel(float a);
float CelToFah(float a);
float KelToCel(float a);
float CelToKel(float a);
float FahToKel(float a);
float KelToFah(float a);

void PrintMenu();
void TemperatureConversion();
void MassConversion();
void LengthConversion();
int main()
{
    do
    {
        int category = 0;
        PrintMenu();
        printf("Select the category: ");
        scanf("%d", &category);
        switch (category)
        {
        case 1:
            TemperatureConversion();
            // done this part for temperature..
            break;
        case 2:
            MassConversion();
            // Mass conversion done
            break;
        case 3:
            LengthConversion();
            // Length conversion done
            break;
        case 4:
            return 0;
        }
    } while (1);

    return 0;
}
float FahToCel(float a)
{
    return ((a - 32) / 1.8);
}
float CelToFah(float a)
{
    return ((a * 1.8) + 32);
}
float KelToCel(float a)
{
    return (a - 273.15);
}
float CelToKel(float a)
{
    return (a + 273.15);
}
float FahToKel(float a)
{
    return (FahToCel(a) + 273.15);
}
float KelToFah(float a)
{
    return CelToFah(KelToCel(a));
}
void PrintMenu()
{
    printf("\n\t--- Unit Converter ---\n\t1. Temperature\n\t2. Mass\n\t3. Length\n\t4. Exit\n");
}
void TemperatureConversion()
{
    printf("\n\t--- Temperature Converter ---\n");
    printf("\t1. Celsius to Fahrenheit\n\t2. Fahrenheit to Celcius\n\t");
    printf("3. Celsius to Kelvin\n\t4. Kelvin to Celsius\n\t");
    printf("5. Fahrenheit to Kelvin\n\t6. Kelvin to Fahrenheit\n");
    printf("Select conversion: ");
    int option;
    float temperature;
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        printf("\n\nResult: %.2f Celsius equal to %.2f Fahrenheit\n\n", temperature, CelToFah(temperature));
        break;
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        printf("\n\nResult: %.2f Fahrenheit equal to %.2f Celsius\n\n", temperature, FahToCel(temperature));
        break;
    case 3:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        printf("\n\nResult: %.2f Celsius equal to %.2f Kelvin\n\n", temperature, CelToKel(temperature));
        break;
    case 4:
        printf("Enter temperature in Kelvin: ");
        scanf("%f", &temperature);
        if (temperature < 0)
        {
            printf("Invalid input...\n");
        }
        else
        {
            printf("\n\nResult: %.2f Kelvin equal to %.2f Celsius\n\n", temperature, KelToCel(temperature));
        }
        break;
    case 5:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        printf("\n\nResult: %.2f Fahrenheit equal to %.2f Kelvin\n\n", temperature, FahToKel(temperature));
        break;
    case 6:
        printf("Enter temperature in Kelvin: ");
        scanf("%f", &temperature);
        if (temperature < 0)
        {
            printf("Invalid input...\n");
        }
        else
        {
            printf("\n\nResult: %.2f Kelvin equal to %.2f Fahrenheit\n\n", temperature, KelToFah(temperature));
        }
        break;
    }
}
void MassConversion()
{
    printf("\n\t--- Mass Converter ---\n");
    printf("\t1. Kg to Pound\n");
    printf("\t2. Pound to Kg\n");
    printf("Select conversion: ");
    int option, mass, mass2;
    scanf("%d", &option);
    printf("Enter the mass in Kg: ");
    scanf("%f", &mass);
    if (mass < 0)
    {
        printf("Invalid input...\n");
    }
    else
    {
        switch (option)
        {
        case 1:
            mass2 = mass * 2.20462;
            printf("Result: %.2f Kg equal to %.2f Pound\n\n", mass, mass2);
            break;
        case 2:
            mass2 = mass / 2.20462;
            printf("Result: %.2f Pound equal to %.2f Kg\n\n", mass, mass2);
            break;
        }
    }
}
void LengthConversion()
{
    printf("\n--- Length Converter ---\n");
    printf("\t1. Meter to Feet\n");
    printf("\t2. Feet to Meter\n");
    printf("Select conversion: ");
    int option;
    float length;
    scanf("%d", &option);
    printf("Enter length in Length: ");
    scanf("%f", &length);
    if (length < 0)
    {
        printf("Invalid input...\n");
    }
    else
    {
        switch (option)
        {
        case 1:
            printf("Result: %.2f Meter equal to %.2f Feet\n\n", length, (length * 3.28084));
            break;
        case 2:
            printf("Result: %.2f Feet equal to %.2f Meter\n\n", length, (length / 3.28084));
            break;
        }
    }
}