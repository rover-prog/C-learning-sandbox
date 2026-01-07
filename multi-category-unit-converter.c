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

int main()
{
    int category = 0;

    do
    {
        printf("--- Unit Converter ---\n");
        printf("1. Temperature\n");
        printf("2. Mass\n");
        printf("3. Length\n");
        printf("4. Exit\n");

        printf("Select the category: ");
        scanf("%d", &category);

        if (category == 1)
        {
            printf("\n--- Temperature Converter ---\n");

            printf("\t1. Celsius to Fahrenheit\n");
            printf("\t2. Fahrenheit to Celcius\n");
            printf("\t3. Celsius to Kelvin\n");
            printf("\t4. Kelvin to Celsius\n");
            printf("\t5. Fahrenheit to Kelvin\n");
            printf("\t6. Kelvin to Fahrenheit\n");

            printf("Select conversion: ");
            int conversion;
            scanf("%d", &conversion);
            switch (conversion)
            {
            case 1:
                printf("Enter temperature in Celsius: ");
                float cel, fah;
                scanf("%f", &cel);
                fah = (cel * 1.8) + 32;
                printf("Result: %.2f Celsius equal to %.2f Fahrenheit\n\n", cel, fah);
                break;
            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &fah);
                cel = (fah - 32) / 1.8;
                printf("Result: %.2f Fahrenheit equal to %.2f Celsius\n\n", fah, cel);
                break;
            case 3:
                printf("Enter temperature in Celsius: ");
                float kel;
                scanf("%f", &cel);
                kel = cel + 273.15;
                printf("Result: %.2f Celsius equal to %.2f Kelvin\n\n", cel, kel);
                break;
            case 4:
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &kel);
                cel = kel - 273.15;
                printf("Result: %.2f Kelvin equal to %.2f Celsius\n\n", kel, cel);
                break;
            case 5:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &fah);
                kel = ((fah - 32) / 1.8) + 273.15;
                printf("Result: %.2f Fahrenheit equal to %.2f Kelvin\n\n", fah, kel);
                break;
            case 6:
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &kel);
                fah = (kel - 273.15) * 1.8 + 32;
                printf("Result: %.2f Kelvin equal to %.2f Fahrenheit\n\n", kel, fah);
                break;
            default:
                printf("Not valid input....\n\n");
                break;
            }
            // done this part for temperature..
        }
        else if (category == 2)
        {
            printf("\n--- Mass Converter ---\n");

            printf("\t1. Kg to Pound\n");
            printf("\t2. Pound to Kg\n");

            printf("Select conversion: ");
            int conversion;
            scanf("%d", &conversion);
            switch (conversion)
            {
            case 1:
                printf("Enter the mass in Kg: ");
                float kg, pound;
                scanf("%f", &kg);
                if (kg < 0)
                {
                    printf("Invalid input...\n\n");
                    break;
                }
                else
                {
                    pound = kg * 2.20462;
                }
                printf("Result: %.2f Kg equal to %.2f Pound\n\n", kg, pound);
                break;
            case 2:
                printf("Enter the mass in Pound: ");
                scanf("%f", &pound);
                if (pound < 0)
                {
                    printf("Invalid input...\n\n");
                    break;
                }
                else
                {
                    kg = pound / 2.20462;
                }
                printf("Result: %.2f Pound equal to %.2f Kg\n\n", pound, kg);
                break;
            default:
                printf("Input is invalid...\n\n");
                break;
            }
        }
        else if (category == 3)
        {
            printf("\n--- Length Converter ---\n");

            printf("\t1. Meter to Feet\n");
            printf("\t2. Feet to Meter\n");
            printf("Select conversion: ");
            int choise;
            scanf("%d", &choise);
            switch (choise)
            {
            case 1:
                printf("Enter length in Meter: ");
                float meter, ft;
                scanf("%f", &meter);
                ft = meter * 3.28084;
                printf("Result: %.2f Meter equal to %.2f Feet\n\n", meter, ft);
                break;
            case 2:
                printf("Enter length in Feet: ");
                scanf("%f", &ft);
                meter = ft / 3.28084;
                printf("Result: %.2f Feet equal to %.2f Meter\n\n", ft, meter);
                break;
            default:
                printf("Invalid input ...\n\n");
                break;
            }
        }
        else if (category == 4)
        {
            printf("Exiting ...\n");
            break;
        }
    } while (category != 4);
    
    return 0;
}