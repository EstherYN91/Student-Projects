#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// declare all functions and variables
string p1, p2;
int i, sum1, sum2;
bool p1alph(void), p2alph(void);
int scorechar(char c);

int main(void)
{
    do
    {
        p1 = get_string("Player 1: ");
        p1alph();
    }
    while (p1alph() == 0);

    if (p1alph() == 1)
    {
        sum1 = 0;
        for (i = 0; i < strlen(p1); i++)
        {
            sum1 = sum1 + scorechar(p1[i]);
        }
    }

    do
    {
        p2 = get_string("Player 2: ");
        p2alph();
    }
    while (p2alph() == 0);

    if (p2alph() == 1)
    {
        sum2 = 0;

        for (i = 0; i < strlen(p2); i++)
        {
            sum2 = sum2 + scorechar(p2[i]);
        }
    }

    if (sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum2 > sum1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// check all characters of player 1 input if alphabetical
bool p1alph(void)
{
    for (i = 0; p1[i] != '\0'; i++)
    {
        if (!isalpha(p1[i]))
        {
            p1[i] = p1[i + 1];
        }
    }
    return true;
}

// check all characters of player 2 input if alphabetical
bool p2alph(void)
{
    for (i = 0; p2[i] != '\0'; i++)
    {
        if (!isalpha(p2[i]))
        {
            p2[i] = p2[i + 1];
        }
    }
    return true;
}

// assign a score to player 1 and 2 character inputs
int scorechar(char c)
{
    switch (c)
    {
        case 'A':
        case 'a':
            return 1;
        case 'B':
        case 'b':
            return 3;
        case 'C':
        case 'c':
            return 3;
        case 'D':
        case 'd':
            return 2;
        case 'E':
        case 'e':
            return 1;
        case 'F':
        case 'f':
            return 4;
        case 'G':
        case 'g':
            return 2;
        case 'H':
        case 'h':
            return 4;
        case 'I':
        case 'i':
            return 1;
            break;
        case 'J':
        case 'j':
            return 8;
        case 'K':
        case 'k':
            return 5;
            break;
        case 'L':
        case 'l':
            return 1;
        case 'M':
        case 'm':
            return 3;
            break;
        case 'N':
        case 'n':
            return 1;
        case 'O':
        case 'o':
            return 1;
        case 'P':
        case 'p':
            return 3;
        case 'Q':
        case 'q':
            return 10;
        case 'R':
        case 'r':
            return 1;
        case 'S':
        case 's':
            return 1;
        case 'T':
        case 't':
            return 1;
        case 'U':
        case 'u':
            return 1;
        case 'V':
        case 'v':
            return 4;
        case 'W':
        case 'w':
            return 4;
        case 'X':
        case 'x':
            return 8;
        case 'Y':
        case 'y':
            return 4;
        case 'Z':
        case 'z':
            return 10;
    }
    return 0;
}
