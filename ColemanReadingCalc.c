#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

string text;
int i, n, rgrade, grade(void);
int count_text = 0;
float count_c = 0, count_w = 0, count_s = 0, char_count(), words_count(), sen_count();
double avg_letter, avg_sen, avgletters(void), avgsen(void);

int main(void)
{
    text = get_string("Text: ");
    count_text = (int) strlen(text);
    count_c = char_count();
    count_w = words_count();
    count_s = sen_count();
    avgletters();
    avgsen();
    grade();

    if (rgrade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (rgrade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", rgrade);
    }
}

// calculate the grade letter of input text
int grade(void)
{
    rgrade = (int)round((0.0588 * avg_letter - 0.296 * avg_sen - 15.8));
    return rgrade;
}

// count the number of letters in a text
float char_count(void)
{
    for (i = 0, n = count_text; i < n; i++)
    {
        if (!ispunct(text[i]) && !isblank(text[i]))
        {
            count_c++;
        }
    }
    return count_c;
}

// count the number of words in a text
float words_count(void)
{
    char *word = strtok(text, " ");

    do
    {
        word = strtok(NULL, " ");
        count_w++;
    }
    while (word != NULL);
    return count_w;
}

// count the number of sentences in a text
float sen_count(void)
{
    for (i = 0, n = count_text; i < n; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count_s++;
        }
    }
    return count_s;
}

// compute average number of letters/characters per 100 words
double avgletters(void)
{

    avg_letter = count_c * 100 / count_w;
    return avg_letter;
}

// compute average number of sentences per 100 words
double avgsen(void) //* still in error
{

    avg_sen = count_s * 100 / count_w;
    return avg_sen;
}
