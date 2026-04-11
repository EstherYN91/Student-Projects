# My Student Projects
This repository contains all the coding projects I worked on studying computing languages from different sources.

UPDATE: Due to academic policy of CS50x, I have decided not to openly share my code for CS50x assignments so as not to leak my solutions to any current students of CS50x. Instead, I will share my experience and what I learned working through each assignment. 

## General Lessons Learned:

This is actually the first time I ever coded in C or any other programming language and I don't even know all the features of any languages. It is both surprising and encouraging to know that I am capable of understanding programming language logic despite having a non-technical background. I am excited to embark on more complicated coding projects in the future. Some of the lessons I have learned:

* Code one part at a time. Break down the problem into different parts and make sure each part of the code works before proceeding to the next.
* Try to combine similar conditionals together where possible.
* Run the code through the mind to understand how it is working and whether there are any logic errors (that works for me).
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

## Week 4 Assignment: Recover

The key challenge in this assignment is checking the first 4 8-bits to see if it is the starting of a jpeg file. Something new I had to research on was bitwise AND operator in order to read if the last byte of the first four bytes indicates a jpeg file. I also had to learn how to use sprintf() and how to set the format of the string to 3 digits integer.

To copy the forensic image into jpeg files, an unsigned 8-bit integer array of size 512 bytes is created. A file pointer needs to be created and malloced memory of 8 bytes. An empty FILE also needs to be created to write jpeg data into and the name of the file needs to formatted with sprintf. A while loop is used to fread the contents of the forensic image into the integer array of size 512 bytes, first checking the first 4 bytes for jpeg signature, if there is already a jpeg file open, close the jpeg or else set the open status to yes. Then format the filename using sptintf and then open the file to write mode using fopen. Then if the open status of jpeg file is yes, fwrite what is read into the integer array into the currently opened file. Repeat this until everything is read and then close all the files. Finally, the allocated memory should be freed.   

## Week 4 Assignment: Filter Less and More

Primary mistake I made in this problem is storing the calculated values into the pixel values before all calculations are done, essentially changing the pixel values in future calculations. Another mistake is storing a value bigger than 255 in temporary containers that are defined as BYTES. The solutions I used consisted of nested for loops and if loops and ensuring that round() is used to ensure that floating values are converted to integers. For functions like blur and edges, I grouped the pixels into those at the edges, those at the corners and those in the middle portion and wrote separate code for them. The rest is about just plugging in the formulas specified in the problem set and ensuring the calculation formulas are correct.

## Week 5 Assignment: Inheritance

This isn't much of a practise other than understanding how to use arrow operator (->) and what the code is about. New things to research about include #define _DEFAULT_SOURCE which gives access to Unix/BSD Functions like srandom(). The code also defines a struct inside a struct called person which has a pointer to a person array called parents and an array of characters which stores 2 alleles. Four functions are then defined: 1) create_family with argument number of generations to create which creates a struct of person data type and points to it, 2) print_family which takes 2 arguments, the pointer to the last generation of a family denoted by *p and the starting generation and prints each generation one by one recursively from child to parents to grandparents, 3) free_family which takes the pointer to the last generation of a family denoted by *p as argument and recursively frees memory for the parents before freeing memory for the person, 4) random_allele which uses the random() function to generate a random allele from A, B and O.

## Week 5 Assignment: Speller

This problem set introduced writing header files and then including them in main program. I learned a new function called getrusage() which is undefined at the start. Before using the calculate function to calculate the time needed, the getrusage function is used to get the time before and after running an event. In calculate function, I learned what ru_utime.tv_sec is: the seconds it took for a process to run in user mode and ru_stime.tv_sec: the seconds it took for a process to run in system mode. The reason calculate and getrusage is undefined is to prevent the student from defining their own versions of the function and the calculate function calculates the total runtime which includes time in user and system modes. 

The hardest part about this problem set is writing the hash function and indexing the linked list. The pointers to memory also needs to be carefully assigned. The best hash function I was able to write so far is storing the words of a dictionary based on the first four alphabets of a word. I am planning to write a hash function that stores only one word in each bucket whiolly on my own in the future if time allows. The load function is written to store all the words in the dictionary into the hash table. The dictionary is first opened and stored in a FILE pointer. A buffer that stores the characters of each word is then created and allocated memory using malloc. fscanf is then used to read every string (word) of the dictionary into the buffer, if fscanf has not reached the end of the dictionary, a new word is created with memory allocated. Then strcpy is used to read the contents of the buffer into the word attribute of the new word, and an has index is assigned to this word using hash function. With the hash function returning the index, the index of the hash table stores this new word if there is nothing in that index. Otherwise, the next pointer of the new word points to the current word stored at at that index and the table pointer points at the new word (so words at stored at the beginning of the table index). Word count is finally incremented. The FILE is finally closed after all the words are added to hash table and the buffer memory is freed. The size function simply returns the word count previously incremented in load function. The unload funcction is written with for and while loops which iterates through all the indexes of the hash table, assigns a pointer to the next node and frees the memory of the current node until all memory of nodes are freed. 

## Week 6 Assignment: Hello in Python

This problem set taught me how to initialize a variable in Python and format a print statement. The main difference between Python and C is that variables in Python does not need to specify data type and placeholders are in {} in Python using f" " for format string. 

## Week 6 Assignment: Mario Less and More in Python

I learned how to use while and for loops in Python and how the + can be used to concatenate non integer elements to print in print function while the number of elements in print statement can be changed with arithmetic operators like *. I also learned that the end value of print function can be set to have space or the default is to have no space.

## Week 6 Assignment: Cash in Python

I separated the change into four conditions and used while loops to calculate the number of each coin type needed for the change. I used the round function to restrict any calculations of new change value to 2 decimal digits. 

## Week 6 Assignment: Credit in Python

I defined four functions to count the number of digits, extract the first digit, extract the first two digits and check if the card number is valid. In order to count and extract the digits, I had to convert the card number into a string using str() and then use slicing operation [:x] to retrieve x elements from the string. To determine if the card number is valid using luhn's algorithm, I separated the digits of the card number from the last digit to the first based on its position in the card number and appended it to one of two variables using append(). To print the correct card type, I set a status for card found to False and then use nested if statements to determine if the card is a certain type before setting the status for found to True. 

## Week 6 Assignment: Readability in Python

I learned that a global variable must be stated as global when used in a function and that function is defined using def function(). The function then needs to be run after the definition. I also learned what OOP means, which is that functions are related to objects or variables. An example is to use split() with the string variable.  

## Week 6 Assignment: DNA in Python

The given function longest_match has two parameters: the DNA sequence and the STR subsequence. A for loop is run  over the entire length of the DNA sequence and a while loop is run to determine if there is a match between the start and end of the DNA substring and STR sequence. If there is a match, count is increased by 1 and the new start of the substring is at the end of STR sequence found. The longest_run variable is updated continuously with the higher of count and longest_run. 

To use command line argument in Python, sys needs to be imported. There is no argc in python so the number of command line arguments is calculated using len() function. To read the database file of people's STR counts into a variable, I initialized a list and then used the I/O functions in Python and csv.DictReader to append the data row by row into the list. To read the DNA sequence that must be identified into a variable, the read() function is used on the file that is opened. To find the longest match of each STR in the DNA sequence, I extracted the keys of the database file using keys() and stored them in a variable. I also initialised a dictionary to store the key value pairs of the longest match for each subsequence/STR. Then the elements in the list of keys are iterated from the first STR to the last, for every key which represents the STR/subsequence, the longest match is calculated using the DNA sequence file and STR and the dictionary is updated with key value pairs with the STR/subsequence as the key and the longest match value as the value in string format. To check the database for matching profiles, another dictionary is initialised and a duplicate of the database file is copied using copy.deepcopy(). For every element in the duplicate of database file, the first key is extracted using next(iter()) and removed using pop(). Then the remaining parts of the element is stored in the new dictionary initialized. Then the two dictionaries that store the key value pairs of STR:longest match value and the STR:count for each person is compared to see if there is a match. If a match is found for any key, the value of the "name" key from the database file is stored in a variable and printed. 

## Week 7 Assignment: Movies

A bunch of SQL keywords are used in this problem set: SELECT, FROM, WHERE, ORDER BY, COUNT(), LIKE, AVG(), JOIN-ON, DISTINCT, DESC, LIMIT, HAVING, IN, <>.

## Week 7 Assignment: Songs

A bunch of SQL keywords are used in this problem set: SELECT, FROM, WHERE, ORDER BY, AND, AVG(), DESC, LIKE, LIMIT, IN.

## Week 7 Assignment: Fiftyville

Steps I took in sequence to solve this using SQL queries: 
1) Check out the description of the crime scene reports for related to the theft of CS50 duck
2) Retrieve the transcript of interviews related to the theft of CS50 duck from witnesses
3) Retrieve the possible license_plate of the thief of CS50 duck based on witness testimony from Ruth
4) Retrieve the possible bank account number of the thief of CS50 duck based on witness testimony from Eugene
5) Retrieve the flight id of the earliest flight out of Fiftyville on 29 July 2025 possibly linking to the thief of CS50 duck based on witness testimony from Raymond
6) Retrieve the caller phone number on 28 July 2025 that lasted for less than 60 secs that could link to the thief of CS50 duck based on witness testimony from Raymond
7) Retrieve the person_id from bank accounts that matches the bank accounts that withdrew on 28 July 2025 on Leggett Street
8) Retrieve the list of people's names, phone_number, passport_number and license_plate from people tables that could be the thief
9) Retrieve the passport_number of people associated with the flight_id that could carry the thief
10) Retrieve the names of people who were on flight carrying the thief
11) Comparing the list of names from people tables and names of people on flight carrying the thief, the thief is narrowed down to four possible names. After the caller information queried on line 20, one person is eliminated as a possible thief. Comparing the license plates that are associated with the possible thief, the thief is found.
12) Find the accomplice of thief
13) Find the city that thief escaped to

