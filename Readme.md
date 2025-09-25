# ArrayAnalyzer

A comprehensive C program that performs detailed analysis on integer arrays, including prime number detection, odd/even classification, min/max identification, and statistical calculations.

## Features

- **Array Input**: Dynamic array size input with validation
- **Prime Number Detection**: Identifies whether each number is prime or not
- **Odd/Even Classification**: Determines if each number is odd or even
- **Min/Max Identification**: Finds and marks minimum and maximum values in the array
- **Statistical Analysis**: Calculates sum and average of all array elements
- **Formatted Output**: Clean tabular display of all analysis results

## Sample Output

```
Sr.    Number    Prime    Odd/Even    Min/Max
1      28        No       Even        
2      29        Yes      Odd         
3      11        Yes      Odd         Min
4      74        No       Even        
5      27        No       Odd         
6      96        No       Even        Max
7      47        Yes      Odd         
8      43        Yes      Odd         
9      64        No       Even        
10     50        No       Even        

Sum    519
Avg    51.9
```

## How It Works

### Core Functions

1. **`isPrime(int number)`**
   - Checks if a number is prime by testing divisibility
   - Returns `true` for prime numbers, `false` otherwise
   - Optimized to check divisors only up to `number/2`

2. **`isOdd(int num)`**
   - Determines if a number is odd using modulo operation
   - Returns `true` for odd numbers, `false` for even

3. **`minMax(int arr[], int size, int *min, int *max)`**
   - Finds minimum and maximum values in the array
   - Uses pointers to return multiple values
   - Single pass algorithm for efficiency

## Compilation and Usage

### Prerequisites
- GCC compiler or any C compiler
- Standard C library support

### Compilation
```bash
gcc -o arrayanalyzer arrayanalyzer.c
```

### Running the Program
```bash
./arrayanalyzer
```

### Usage Steps
1. Enter the size of the array when prompted
2. Input each array element one by one
3. View the comprehensive analysis table
4. See the calculated sum and average

## Input Validation

- Array size must be greater than 0
- Program handles invalid array sizes with re-prompting
- Robust input handling for array elements

## Technical Details

- **Language**: C
- **Memory Management**: Uses variable-length arrays (C99 feature)
- **Algorithm Complexity**: 
  - Prime checking: O(n/2) per number
  - Min/Max finding: O(n)
  - Overall: O(n²) due to prime checking for each element

## Code Structure

```
arrayanalyzer.c
├── isPrime()     - Prime number detection
├── isOdd()       - Odd/even classification  
├── minMax()      - Min/max finder
└── main()        - Program flow and I/O
```

## Future Enhancements

- [ ] Add input validation for non-integer inputs
- [ ] Implement median calculation
- [ ] Add support for floating-point arrays
- [ ] Include mode calculation
- [ ] Add file input/output capabilities
- [ ] Optimize prime checking algorithm (Sieve of Eratosthenes)

## Author

Created as part of a C programming assignment demonstrating:
- Function design and implementation
- Pointer usage and parameter passing
- Array manipulation and analysis
- Formatted output and user interaction

