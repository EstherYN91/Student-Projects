#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// declare all the variables
long numberinp;
int count = 0;
int sumdg = 0;
int countD();
string evalV();
int evalfd();
int evalf2d();

// main code
int main(void)
{
    do
    {
        numberinp = get_long("What is your card number? ");
    }
    while (numberinp < 1 || numberinp > 9999999999999999);

    int ndigits = countD();
    if (ndigits != 13 && ndigits != 15 && ndigits != 16)
    {
        printf("EOF\n");
    }

    string vdigits = evalV();
    int fdigit = evalfd();
    int f2digit = evalf2d();

    // checking for card

    bool found = false;

    if (fdigit == 4 && strcmp(vdigits, "true") == 0)
    {
        if (ndigits == 13 || ndigits == 16)
        {
            printf("VISA\n");
            found = true;
        }
    }
    if (found == false)
    {
        if ((f2digit == 34 && strcmp(vdigits, "true") == 0) ||
            (f2digit == 37 && strcmp(vdigits, "true") == 0))
        {
            if (ndigits == 15)
            {
                printf("AMEX\n");
                found = true;
            }
        }
    }

    if (found == false)
    {
        if ((f2digit == 51 || f2digit == 52 || f2digit == 53 || f2digit == 54 || f2digit == 55) &&
            strcmp(vdigits, "true") == 0)
        {
            if (ndigits == 16)
            {
                printf("MASTERCARD\n");
                found = true;
            }
        }
    }

    if (found == false)
    {
        printf("INVALID\n");
    }
}

// extract the first digit of user input
int FirstDigit()
{
    long checknumf = numberinp; // make a copy of the user inputted card number

    if (checknumf < 0)
    {
        checknumf = -checknumf;
    }
    // Repeatedly divide by 10 until only the first digit remains
    while (checknumf >= 10)
    {
        checknumf /= 10;
    }
    return checknumf;
}

// count the number of digits entered
int countD()
{
    long checknumd = numberinp; // make a copy of the user inputted card number

    if (checknumd < 0)
    {
        checknumd = -checknumd;
    }

    while (checknumd > 0)
    {
        checknumd = checknumd / 10;
        count++;
    }
    return count;
}

// using luhn's algorithm to check if user input is valid card number
string evalV()
{
    long checknumv = numberinp; // make a copy of the user inputted card number

    for (int i = 1; i <= count; i++)
    {

        int dg = checknumv % 10;

        if (i % 2 == 0)
        {
            dg = dg * 2;

            if (dg > 9)
            {
                dg = dg - 9;
            }
        }

        sumdg += dg;

        checknumv /= 10;
    }

    if (sumdg % 10 == 0)
    {
        return "true";
    }
    return "false";
}

// check for first digit
int evalfd()
{
    long firstd = numberinp; // make a copy of the user inputted card number

    for (int i = 1; i <= count; i++)
    {
        if (firstd < 0)
        {
            firstd = -firstd;
        }

        while (firstd >= 10)
        {
            firstd /= 10;
        }
    }
    return firstd;
}

// check for first two digits
int evalf2d()
{
    long first2d = numberinp; // make a copy of the user inputted card number

    for (int i = 1; i <= count; i++)
    {
        if (first2d < 100 && first2d >= 0)
        {
            break;
        }
        else
        {
            while (first2d >= 100)
            {
                first2d /= 10;
            }
        }
    }
    return first2d;
}
