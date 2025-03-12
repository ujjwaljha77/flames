# FLAMES Relationship Calculator

## Introduction
FLAMES is a popular game used to determine the relationship between two people based on their names. This program takes two names as input, removes common letters, counts the remaining unique letters, and iterates through the FLAMES acronym to determine the relationship.

## How It Works
1. Remove common letters from the two names.
2. Count the number of remaining unique letters.
3. Use this count to iterate through "FLAMES" cyclically, removing letters at each step until one remains.
4. The final letter determines the relationship:
   - F - Friends
   - L - Love
   - A - Affectionate
   - M - Marriage
   - E - Enemies
   - S - Siblings

## Example
### Input:
```
rohit
riya
```
### Process:
- Common letters: **r, i** (removed)
- Remaining unique letters: o, h, t, y, a (Count = 5)
- Iterating through FLAMES:
  1. Remove E
  2. Remove M
  3. Remove S
  4. Remove L
  5. Remove A
- Final letter: F (Friends)

### Output:
```
Friends
```


## How to Run
1. Compile the program using a C++ compiler:
   ```
   g++ flames.cpp -o flames
   ```
2. Run the executable:
   ```
   ./flames
   ```
3. Enter two names when prompted.
4. The program will output the relationship type.

## Test Cases
### Example 1
Input:
```
ujjwal
bhumika
```
Output:
```
Enemies
```

### Example 2
Input:
```
rahul
riya
```
Output:
```
Friends
```

