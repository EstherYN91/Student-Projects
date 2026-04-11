# My Student Projects
This repository contains all the coding projects I worked on studying computing languages from different sources.

UPDATE: Due to academic policy of CS50x, I have decided not to openly share my code for CS50x assignments so as not to leak my solutions to any current students of CS50x. Instead, I will share my experience and what I learned working through each assignment. 

## General Lessons Learned:

This is actually the first time I ever coded in C or any other programming language and I don't even know all the features of any languages. It is both surprising and encouraging to know that I am capable of understanding programming language logic despite having a non-technical background. I am excited to embark on more complicated coding projects in the future. Some of the lessons I have learned:

* Code one part at a time. Break down the problem into different parts and make sure each part of the code works before proceeding to the next.
* Try to combine similar conditionals together where possible.
* Run the code through the mind to understand how it is working and whether there are any logic errors (that works for me)
* If in doubt of a code, printf() in C or print() in Python will help to check if the output is as intended.

## Languages:

**What was taught:** C, Python, Java, CSS, HTML, Flask

## Week 1 Assignment: Mario Less and More

Both problem sets involved defining a separate function that had a parameter which was determined by user input of the height. What was initially confusing for me was the orientation of the pyramid.

## Week 1 Assignment: Cash

This is just basic maths in calculating the amount of coins needed to satisfy a change inputted by the user. I used floor() to ensure that integer number of coins are used instead of a float value. Loops I used were do while and if, else if, else. 

## Week 1 Assignment: Credit

What was tedious about this was getting all the steps needed to check for a card's validity and type. New functions need to be written to check both the digits and validity using luhn's algorithm. One of the possible errors was not storing the inputted card number in a temporary container variable and hence changing the original user input while checking for validity and card type. 

## Week 2 Assignment: Scrabble

My logic in solving this is to eliminate any non alphabetical letters with isalpha() in a word using a function. Then using nested for loops, calculate the scores of each word by having two arrays with matching indexes for the alphabet and the score of that alphabet. Toupper() is also used to manage case sensitivity.

## Week 2 Assignment: Readability

This involves writing a bunch of new functions and using for loops to iterate through the text to check for words, sentences and letters. 

## Week 2 Assignment: Caesar

This is the first instance when I learned about argc and argv in main() and how to use malloc() to define a variable to store the encrypted text. I also learned to use atoi() in order to store the key as an integer. 

## Week 2 Assignment: Substitution

The key challenge in this assignment is to check that the cipher key inputted by the user is valid, ie. having 26 characters, all characters are alphabets and there are be no repeat alphabets. I wrote two boolean functions to check for all alphabets and no repeat alphabets and then wrote a third boolean function which uses those two functions to check that the cipher key fulfills all conditions using if statement. Then I finally wrote a function taking in two parameters (the character of the plaintext and the key) that encrypts the plaintext by matching the array indexes of each character in plaintext with the indexes of the cipher key (which also corresponds to the indexes of alphabets in chronological order). To ensure that lowercase and uppercase character is encrypted also as lower and uppercase, I used 2 for loops and toupper()/tolower(). 







