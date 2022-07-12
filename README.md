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

Then run *Primes* binary file in `build` directory like bellow:
```bash
./build/Primes -n 26 -l -p
```
Where: 
* `-n` is threshold number.
* `-l` is to show the length of the list.
* `-p` is to show the primes.

then the prime numbers of the range will be printed to the screen

```bash
Prime numbers: 
2
3
5
7
11
13
17
19
23
Number of primes = 9
```