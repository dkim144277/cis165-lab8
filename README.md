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
* Winning [1, 2, 3, 4, 5], Player [1, 2, 3, 5, 5] = 3 matches
* Winning [9, 3, 0, 0, 6], Player [7, 6, 5, 4, 3] = 3 matches
Actual results:
1. 5 matches
2. 0 matches
3. 3 matches
4. 4 matches
5. 0 matches, every digit is between 0-9 and there don't seem to be any matches based on the actual numbers shown
# code explanations
* How does the random expression keep every digit between 0 and 9?
> I used `int randomNum = rand() % 9`, with 9 being the upper limit to the randomly generated number
* Why does a matching digit in another position not count?
> Because the loop that checks matching numbers checks by index number, so number 1 of the winning numbers and number 1 of the player's numbers, number 2... and so on
* Trace the count through the example arrays.
> 1: 7 = match, 4 = match, 9 = match, 1 = match, 3 = match. 2: none match. 3: 1 = match, 2 = no match, 3 = match, 3 = no match, 3 = match. 4: 1 = match, 2 = match, 3 = match, 5 = no match, 5 = match. 5: none match.
* Why do array loops stop before SIZE, and what did your fixed tests establish?
> The size of an array is offset by 1 because indexing begins at 0, so if an array has a size of 5 then the last index number isn't 5, but 4. So we need to stop the loop before the array's size constant. The fixed tests established that the code correctly checks each element for a given size for an array without skipping any elements
