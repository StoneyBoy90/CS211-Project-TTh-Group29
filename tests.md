# Left Movement Tests

- Tested before random insertion, with insert_random commented out

Starting: 0 2 0 2 0; Expected: 4 0 0 0 0; Result: 4 0 0 0 0; Passed.
Starting: 2 2 2 0 0; Expected: 4 2 0 0 0; Result: 4 2 0 0 0; Passed.
Starting: 2 2 2 2 2; Expected: 4 4 2 0 0; Result: 4 4 2 0 0; Passed.
Starting: 2 2 4 0 0; Expected: 4 4 0 0 0; Result: 4 4 0 0 0; Passed.
Starting: 4 4 8 8 0; Expected: 8 16 0 0 0; Result: 8 16 0 0 0; Passed.
Starting: 2 4 8 0 0; Expected: 2 4 8 0 0; Result: 2 4 8 0 0; Passed.

- Scoring, move counting, and random insertion have not been tested yet.

# Scoring Tests

- Scoring was tested for multiple merges and an unchanged move.

Starting: 44880, Score: 0; Move: left; Expected: 8 16 0 0 0, Score 24; Actual 8 16 0 0 0, Score 24; Passed.
Starting: 8 16 0 0 0, Score: 24; Move: left; Expected: no change, Score 24; Actual: no change, Score 24; Passed.

- Move counting and random insertion have not been tested yet.

# Moves Tests

Starting: 4 4 8 8 0, Score: 0, Moves: 0; Input: l; Expecting: 8 16 0 0 0, Score: 24, Moves: 1; Actual: 8 16 0 0 0, Score 24, Moves 1; Passed.
Input 1 again; Expected: no change, Score: 24, Moves: 1; Actual: no change, Score: 24, Moves: 1; Passed.

- Random insertion has not been tested yet.

# Random Insertion Tests

Successful Move: Starting: 4 4 8 8 0, other rows 0; Expected: 8 16 0 0 0, Random 2, Score: 24, Moves: 1; Actual: 8 16 0 0 0, Random 2 in row 3 col 5, Score: 24, Moves: 1; Passed.
No Change: Starting: 2 4 8 0 0, other rows 0; Expected: same board, no random, Score: 0, Moves: 0; Actual: same board, no random, Score: 0, Moves: 0; Passed.
Starting: 0 2 0 4 0, other rows 0, Score: 0; Moves: 0; Input: 1; Expected: 2 4 0 0 0, Random 2, Score: 0, Moves: 1; Actual: 2 4 0 0 0, Random 2 in row 3 col 5, Score: 0, Moves: 1; Passed.
