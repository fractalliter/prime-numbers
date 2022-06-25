# Prime numbers in a range

Finding prime numbers in a range

## Prerequisites

* [CMake](https://cmake.org/download/)


## How to run

Install Cmake then go to the root of the project and run following commands:

```bash
cmake -S . -B build/
cd build
make
```

Then run *Primes* binary file in build directory like bellow:
```bash
./Primes
```
A message will pop up on the command line asking for a number and if you input a number then the prime numbers of the range will be printed to the screen

```bash
Enter a number: 
26
prime number 0
prime number 2
prime number 3
prime number 5
prime number 7
prime number 11
prime number 13
prime number 17
prime number 19
prime number 23
```