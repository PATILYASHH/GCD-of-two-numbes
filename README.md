# GCD Calculator

This is a simple C program to calculate the Greatest Common Divisor (GCD) of two integers using the Euclidean algorithm.

## Getting Started

To run this program, you need to have a C compiler installed on your system. You can compile and run the program using the following commands:

```bash
gcc gcd.c -o gcd
./gcd
```
Follow the on-screen prompts to enter the values of two integers, and the program will output their GCD.

## How It Works

The program uses the Euclidean algorithm to find the Greatest Common Divisor (GCD) of two integers `a` and `b`:

1. **Input**: 
   - The user is prompted to input the values of `a` and `b`.
   
2. **Validation**:
   - If `a` is greater than or equal to `b`, the program proceeds to calculate the GCD. 
   - If `a` is less than `b`, the user is prompted to re-enter the values ensuring `a` is greater than or equal to `b`.

3. **GCD Calculation**:
   - If `a` is greater than or equal to `b`, the program enters a `while` loop.
   - Within the loop, it calculates the remainder `r` of `a` divided by `b` (`r = a % b`) and assigns the value of `b` to `a` and the value of `r` to `b`.
   - This process repeats until `b` becomes zero, at which point the value of `a` represents the GCD of the original `a` and `b`.

4. **Output**:
   - The program then outputs the calculated GCD of `a` and `b`.

5. **Restart**:
   - If `a` is less than `b`, the program uses a `goto` statement to return to the beginning of the input process, allowing the user to re-enter the values with `a` greater than or equal to `b`.

This approach ensures accurate GCD calculation regardless of the initial input values and handles cases where `a` is less than `b` by guiding the user appropriately.
