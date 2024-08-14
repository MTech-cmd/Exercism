#include "difference_of_squares.h"

int square(int n)
{
    return (n * n);
}

unsigned int sum_of_squares(unsigned int number)
{
    int n = number;
    int total = 0;
    int counter = 1;

    while (counter <= n)
    {
        total += square(counter);
        counter++;
    }

    return (total);
}

unsigned int square_of_sum(unsigned int number)
{
    int n = number;
    int total = 0;
    int counter = 1;

    while (counter <= n)
    {
        total += counter;
        counter++;
    }

    return (square(total));
}

unsigned int difference_of_squares(unsigned int number)
{
    int n = number;
    int sum_of_squares_total = sum_of_squares(n);
    int square_of_sum_total = square_of_sum(n);

    return (square_of_sum_total - sum_of_squares_total);
}

//#include "stdio.h"
// int main()
// {
//     printf("%i", sum_of_squares(1));
// }