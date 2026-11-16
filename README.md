# cis165-lab8
# how to run
To run `lottery.cpp`, download the file from the repository to your computer. Then, using onlinegdb.com, click on the "Upload File" at the top left of the programming window, and upload the file you downloaded. Set the language using the dropdown to C++ 17. Press F9 on your keyboard or "Run" at the top of the screen.
# plan for the program
## lottery.cpp
1. Declare the 2 arrays as well as constants for their sizes
2. Generate the 5 winning numbers with a for loop
3. Use another for loop to ask the player to enter their own 5 numbers
4. Use another for loop to compare the player's numbers to the winning numbers, if the numbers match then increment the number of matches
5. Show the winning numbers, the player's numbers, and the number of matches
# test runs
Inputs and expected results:
* Winning [7, 4, 9, 1, 3], Player [7, 4, 9, 1, 3] = 5 matches
* Winning [7, 4, 9, 1, 3], Player [0, 0, 0, 0, 0] = 0 matches
* Winning [1, 1, 2, 2, 3], Player [1, 2, 2, 3, 3] = 3 matches
  
Actual results:
1. 5 matches
2. 0 matches
3. 3 matches

# code explanations
