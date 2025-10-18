#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

string ckey, ptext;
int i, j, index = -1;
bool ckeyalph(), ckeyrep();
char c, ctext[27], encrytext(char key);

int main(int argc, string argv[])
{

    ckey = argv[1];

    if(argc == 1 || argc > 2)
    {
        printf("Please provide one cipher key.\n");
        return 1;
    }
    
    if (strlen(ckey) != 26 || ckeyalph() == false || ckeyrep() == false)
    {
        printf("The cipher key is invalid. Please check that it has 26 alphabetical characters and no repeated alphabets.\n");
        return 1;
    }

    ptext = get_string("plaintext: ");

    for(i = 0; i < strlen(ptext); i++)
    {
        ctext[i] = encrytext(ptext[i]);

        if(!isalpha(ptext[i]) || ptext[i] == ' ')
        {
            ctext[i] = ptext[i];
        }
    }

    printf("%s\n", ctext);

    printf("ciphertext: %s\n", ctext);

    return 0;
}

// check if ckey is alphabetical
bool ckeyalph()
{
    for(i = 0; i < strlen(ckey); i++)
    {
        if(!isalpha(ckey[i]))
        {
            return false;
        }
    }
    return true;
}

// check if ckey has repeated characters
bool ckeyrep()
{
    for(i = 0; i < strlen(ckey); i++)
    {
        for(j = i + 1; j < strlen(ckey); j++)
        {
            if(ckey[i] == ckey[j] || toupper(ckey[i]) == toupper(ckey[j]) || tolower(ckey[i]) == tolower(ckey[j]))
            {
                return false;
            }
        }
    }
    return true;
}

// encrypt the plaintext using cipher key provided by user
char encrytext(char key)
{
    switch (key)
    {
        case 'A':
            index = 0;
            return toupper(ckey[index]);
        case 'a':
            index = 0;
            return tolower(ckey[index]);
        case 'B':
            index = 1;
            return toupper(ckey[index]);
        case 'b':
            index = 1;
            return tolower(ckey[index]);
        case 'C':
            index = 2;
            return toupper(ckey[index]);
        case 'c':
            index = 2;
            return tolower(ckey[index]);
        case 'D':
            index = 3;
            return toupper(ckey[index]);
        case 'd':
            index = 3;
            return tolower(ckey[index]);
        case 'E':
            index = 4;
            return toupper(ckey[index]);
        case 'e':
            index = 4;
            return tolower(ckey[index]);
        case 'F':
            index = 5;
            return toupper(ckey[index]);
        case 'f':
            index = 5;
            return tolower(ckey[index]);
        case 'G':
            index = 6;
            return toupper(ckey[index]);
        case 'g':
            index = 6;
            return tolower(ckey[index]);
        case 'H':
            index = 7;
            return toupper(ckey[index]);
        case 'h':
            index = 7;
            return tolower(ckey[index]);
        case 'I':
            index = 8;
            return toupper(ckey[index]);
        case 'i':
            index = 8;
            return tolower(ckey[index]);
        case 'J':
            index = 9;
            return toupper(ckey[index]);
        case 'j':
            index = 9;
            return tolower(ckey[index]);
        case 'K':
            index = 10;
            return toupper(ckey[index]);
        case 'k':
            index = 10;
            return tolower(ckey[index]);
        case 'L':
            index = 11;
            return toupper(ckey[index]);
        case 'l':
            index = 11;
            return tolower(ckey[index]);
        case 'M':
            index = 12;
            return toupper(ckey[index]);
        case 'm':
            index = 12;
            return tolower(ckey[index]);
        case 'N':
            index = 13;
            return toupper(ckey[index]);
        case 'n':
            index = 13;
            return tolower(ckey[index]);
        case 'O':
            index = 14;
            return toupper(ckey[index]);
        case 'o':
            index = 14;
            return tolower(ckey[index]);
        case 'P':
            index = 15;
            return toupper(ckey[index]);
        case 'p':
            index = 15;
            return tolower(ckey[index]);
        case 'Q':
            index = 16;
            return toupper(ckey[index]);
        case 'q':
            index = 16;
            return tolower(ckey[index]);
        case 'R':
            index = 17;
            return toupper(ckey[index]);
        case 'r':
            index = 17;
            return tolower(ckey[index]);
        case 'S':
            index = 18;
            return toupper(ckey[index]);
        case 's':
            index = 18;
            return tolower(ckey[index]);
        case 'T':
            index = 19;
            return toupper(ckey[index]);
        case 't':
            index = 19;
            return tolower(ckey[index]);
        case 'U':
            index = 20;
            return toupper(ckey[index]);
        case 'u':
            index = 20;
            return tolower(ckey[index]);
        case 'V':
            index = 21;
            return toupper(ckey[index]);
        case 'v':
            index = 21;
            return tolower(ckey[index]);
        case 'W':
            index = 22;
            return toupper(ckey[index]);
        case 'w':
            index = 22;
            return tolower(ckey[index]);
        case 'X':
            index = 23;
            return toupper(ckey[index]);
        case 'x':
            index = 23;
            return tolower(ckey[index]);
        case 'Y':
            index = 24;
            return toupper(ckey[index]);
        case 'y':
            index = 24;
            return tolower(ckey[index]);
        case 'Z':
            index = 25;
            return toupper(ckey[index]);
        case 'z':
            index = 25;
            return tolower(ckey[index]);
    }
    return 0;
}
