#include <stdio.h>
#include <stdlib.h>
long long int Input();
void PrintStep(long long int n, long long int step);
void CollatzConjecture(long long int n);
void Statistics(long long int steps, long long int value);
int main()
{
    long long int in;
    in = Input();
    CollatzConjecture(in);
    return 0;
}
void Statistics(long long int steps, long long int value) // makes final statistics display
{
    printf("\n--- Statistics ---\n");
    printf("Total Steps: %lld\n", steps);
    printf("Highest Value: %lld\n", value);
}
void CollatzConjecture(long long int n)
{
    /* this function calculates the collatze conjecture
    calculates steps and final total steps that is sent to statistics
    calculates max value reached during collatz conjecture calculation
    */
    static long long int step = 0, max = 0;

    do
    {
        step++;
        if (max < n)
            max = n;
        int temp = n % 2;
        switch (temp)
        {
        case 0:
            n = n / 2;
            PrintStep(n, step);
            break;
        case 1:
            n = (n * 3) + 1;
            PrintStep(n, step);
            break;
        }
        if (step > 10000)
        {
            printf("Calculations stopped to prevent infinite loop.\n");
            exit(EXIT_FAILURE);
        }
    } while (n != 1);
    Statistics(step, max);
}
long long int Input()
{
    // takes the input value for CollatzeConjecture to use
    long long int integer;
    do
    {
        printf("Enter starting number: ");
        scanf("%lld", &integer);
        if (integer < 1)
            printf("Try again..\n");
    } while (integer < 1);
    return integer;
}
void PrintStep(long long int a, long long step)
{
    // prints each step number and value 
    printf("Step %lld: %lld\n", step, a);
}