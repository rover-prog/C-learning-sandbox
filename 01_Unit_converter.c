#include <stdio.h>

float TempConFn(float a, int b);
int AbsoluteTemperatureCheck(float a, int b);
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
        case 4: //This part is to terminate the program
            return 0;
        }
    } while (1);

    return 0;
}
float TempConFn(float a, int b) //This function converts the tempereture accordingly 
{
    switch (b)
    {
    case 1:
        return ((a * 1.8) + 32);
        break;
    case 2:
        return ((a - 32) / 1.8);
        break;
    case 3:
        return (a + 273.15);
        break;
    case 4:
        return (a - 273.15);
        break;
    case 5:
        return (TempConFn(a, 2) + 273.15);
        break;
    case 6:
        return TempConFn(TempConFn(a, 4), 1);
        break;
    default:
        return 0;
    }
}
int AbsoluteTemperatureCheck(float a, int b) //checking for the absolute values of tempereture
{
    if ((a < 0 && (b == 4 || b == 6)) || (a < -273.15 && (b == 1 || b == 3)) || (a < -459.67 && (b == 2 || b == 5)))
    {
        return -1;
    }
    else
    {
        return 1;
    }
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
    scanf("%d", &option);
    float temperature;
    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    if (AbsoluteTemperatureCheck(temperature, option) != -1)
    {
        switch (option)
        {
        case 1:
            printf("\n\nResult: %.2f Celsius equal to %.2f Fahrenheit\n\n", temperature, TempConFn(temperature, 1));
            break;
        case 2:
            printf("\n\nResult: %.2f Fahrenheit equal to %.2f Celsius\n\n", temperature, TempConFn(temperature, 2));
            break;
        case 3:
            printf("\n\nResult: %.2f Celsius equal to %.2f Kelvin\n\n", temperature, TempConFn(temperature, 3));
            break;
        case 4:
            printf("\n\nResult: %.2f Kelvin equal to %.2f Celsius\n\n", temperature, TempConFn(temperature, 4));
            break;
        case 5:
            printf("\n\nResult: %.2f Fahrenheit equal to %.2f Kelvin\n\n", temperature, TempConFn(temperature, 5));
            break;
        case 6:
            printf("\n\nResult: %.2f Kelvin equal to %.2f Fahrenheit\n\n", temperature, TempConFn(temperature, 6));
            break;
        }
    }
    else
    {
        printf("Invalid input...\n");
    }
}
void MassConversion()
{
    printf("\n\t--- Mass Converter ---\n");
    printf("\t1. Kg to Pound\n");
    printf("\t2. Pound to Kg\n");
    printf("Select conversion: ");
    int option;
    float mass, mass2;
    scanf("%d", &option);
    printf("Enter the mass: ");
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
    printf("Enter the length: ");
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