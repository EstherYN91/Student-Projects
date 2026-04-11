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

The key element in this assignment is to check that the cipher key inputted by the user is valid, ie. having 26 characters, all characters are alphabets and there are no repeat alphabets. I wrote two boolean functions to check for all alphabets and no repeat alphabets and then wrote a third boolean function which uses those two functions to check that the cipher key fulfills all conditions using if statement. Then I finally wrote a function taking in two parameters (the character of the plaintext and the key) that encrypts the plaintext by matching the array indexes of each character in plaintext with the indexes of the cipher key (which also corresponds to the indexes of alphabets in chronological order). To ensure that lowercase and uppercase character is encrypted also as lower and uppercase, I used 2 for loops and toupper()/tolower(). 

## Week 3 Assignment: Sort

I compared the runtime for 5000 and 50000 between random, reversed and sorted and assigned the one with the shortest overall runtime to the algorithm that is known to be the fastest amongst merge, bubble and selection sort. I then compared the runtime between reversed and sorted and figured out which sorting algorithm would have a larger difference between the two. 

## Week 3 Assignment: Plurality

I learned how to use self defined datatype created using typedef struct. The vote function is relatively easy and just involves using strcmp() to determine if the vote is valid and the incrementing the votecount attribute of the datatype candidate. To find the largest vote, a for loop is written to compare the current largest votecount with the votecount of every candidate. Another for loop is used to print out the winner whose votecount matches teh largest votecount.   

## Week 3 Assignment: Runoff

Understanding the code provided was the key element in this, especially two dimensional array. 

The first part #define sets two constants MAX_VOTERS and MAX_CANDIDATES. The next 2d array preferences[MAX_VOTERS][MAX_CANDIDATES] that stores integers allows for recording every voter's preferences of candidates. MAX_VOTERS stores the index of each voter and MAX_CANDIDATES stores the index of the candidate which is the jth preference for that particular voter. A datatype called candidate is then created with three attributes, a string (or char*) name, an integer vote and a boolean eliminated. This datatype is then used to create a new array called candidates of size equivalent to MAX_CANDIDATES. Next, two integer variables called voter_count and candidate_count are created to record the number of voters and number of candidates respectively. The functions I had to work on are a boolean function called vote with arguments voter, rank and name, a function with no arguments or return value called tabulate, a boolean function that has no arguments called print_winner, a find_min function with no argument but returns an integer value, a boolean function called is_tie with min as argument and a function called eliminate with no return value but has the argument min. 

The main function now has two arguments, argc which is the number of command line arguments and argv, which contains the actual command line arguments inputted by the user. Argc < 2 checks to make sure that the user inputted at least 1 candidate name in the command line. The candidate_count is then recorded as argc - 1 because the argc includes the program as well. After checking that the number of candidates inputted by the user does not exceed MAX_CANDIDATES, the array called candidates is populated with the candidate names inputted by the user, the votes count is set to 0 and the eliminated status is set to false for every candidate. Voter_count is set to the number inputted by the user and checked to ensure that it does not exceed MAX_VOTERS. The votes from each voter for every candidate is then recorded using vote function into preferences array. The vote function takes in 3 arguments, the index of the voter, the preference rank of the voter and the name of the candidate voted which was stored in a string called name. The while loop is then run as long as the winner is not found. First, the votes for the non-eliminated candidates are tabulated using the tabulate function. Then the print_winner function is run to see if there is a winner. If the print_winner returns true, the while loop is stopped. Otherwise, the find_min function is run to find the least votes amongst existing candidates. The is_tie function is then run to see if there are ties amongst all the candidates. If the votes amongst all remaining candidates are all tied, everyone is printed as the winner. Otherwise the eliminate function is run with the minimum votes as the argument and the vote count for all candidates are set to 0. 

The vote function is written in a for loop using strcmp() and if there is a match between name voted and the candidate name, the preferences array is updated with the candidate index for every voter. For tabulate function, I used a nested for loop and if else statement to check if the eliminated status is true before increasing the votes count. For print_winner function, I iterated through the candidates and checked if the votes count is greater than 50% of the total voters. For find_min function, I initialized a variable to store the votes for the first candidate and then iterated through the non-eliminated candidates and updated the variable with the smallest votes count. For is_tie function, I iterated through the candidates and check if any votes count is above the minimum vote count. For eliminate function, I used a for loop to see if any candidate votes count happens to be the minimum vote count. 

## Week 3 Assignment: Tideman

Understanding the code provided was the key factor in solving this problem.

The first part #define sets one constant MAX. The next 2d array preferences[MAX][MAX] that stores integers allows for recording all the voters preferences of one candidate over another. The first [MAX] in preferences stores the index of the winner and the second [MAX] stores the index of the loser. A boolean function called locked is also a 2d array which updates for each pair of winner and loser, whether the locked status is true or false. A datatype called pair is then created with two attributes, an integer winner which stores a candidate index and an integer loser which stores a candidate index. This datatype is then used to create a new array called pairs of size equivalent to the total number of pairs possible amongst 9 candidates. A string array called candidates is also created with the size equal to MAX. Next, two integer variables called pair_count and candidate_count are created to record the number of pairs and number of candidates respectively. The functions I had to work on are a boolean function called vote with arguments rank, name and ranks array and five functions with no arguments or return value called record_preferences, add_pairs, sort_pairs, lock_pairs and print_winner.

The main function has two arguments, argc which is the number of command line arguments and argv, which contains the actual command line arguments inputted by the user. Argc < 2 checks to make sure that the user inputted at least 1 candidate name in the command line. The candidate_count is then recorded as argc - 1 because the argc includes the program as well. After checking that the number of candidates inputted by the user does not exceed MAX, the array called candidates is populated with the candidate names inputted by the user. For the locked array, all the status of pairs of candidates locked are set to false. Voter_count is set to the number inputted by the user. The votes from each voter for every candidate is then recorded using vote function into ranks array and the ranks array is then passed into record_preferences function. The vote function takes in 3 arguments, the preference rank of the voter, the name of the candidate voted which was stored in a string called name and the ranks array. Then add_pairs, sort_pairs, lock_pairs, print_winner are run one after another. 

The vote function is written in a for loop using strcmp() and if there is a match between name voted and the candidate name, the ranks array is updated with the candidate index for every voter. For record_preferences function, I used a nested for loop and incremented the count of preferences for a pair of candidates each time a voter preferred one candidate over another. For add_pairs function, I iterated through the candidates using nested for loops and checked if the preferences for each pair of candidate. If the number of voters who preferred A over B exceeds the number of voters who preferred B over A, the winner in pairs is recorded with the index of candidate A and loser is recorded with index of candidate B and pair_count is increased by 1, vice versa. For sort_pairs function, I first created a duplicate of pairs array as temporary container. Then I used nested for loops to iterate over all the pairs to compare the strength of preferences between a winner and loser in pairs and the preferences between the next winner and loser in pairs. Then I used bubble sort to shift the pair with greater strength of preferences to the left of the pairs array. To complete the lock_pairs function, I had to write a separate function with 2 arguments to check for cycle between a winner and loser to be locked. In the separate function, recursion is used to check that if there is a path from loser to winner. The base case is that if there is a path from loser to winner, there will be a cycle formed if winner is locked to loser. Then a for loop is written to iterate over all candidates to check that if there is a path from loser in current pair to any candidate, whether there is a path from the same candidate to the winner in current pair using the same function. If yes, there is a cycle if winner and loser is locked. The lock_pairs function is finally completed by iterating through all the pairs and checking if there is a cycle using the separate function written to check for cycles and the pairs are locked if the separate function returns false. The print_winner function is written whereby all the candidates are checked using nested for loops and each time a candidate is not the loser in a pair, the win count of that candidate is increased by 1. The winning count is updated if another candidate beats the current candidate win count in another if loop until all candidates are iterated through. The winner is the one with the highest win count. 

## Week 4 Assignment: Volume

This is the first time I learned to use file I/O functions like fread(), fwrite() and fclose().

To copy the header information from input to output, I initialized an unsigned 8-bit integer array with size equivalent to HEADER_SIZE to store what was read from input file. Then fread() and fwrite() are used. To read samples from the input file to output file while changing it by the factor, I initialized a signed 16-bit integer variable to store updated data and used a while loop to update the 16-bit sample read from input by the factor, stored each 16 bit updated data in the signed integer variable before writing the new samples into output. Again, fread() and fwrite() are used. After that, fclose() is used on both input and output files.  



