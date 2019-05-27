# CSI 2334 Final Project Sum19

This executable is compiled so that students in the Summer 2019 semester of CSI 2334 Intro to Computer Systems can practice disassembly of compiled executables.

## Getting Started

These instructions will get a copy of the project up and running on your local machine

### Prerequisites

There are no prerequisites for running the project except for [gcc](https://gcc.gnu.org/) to compile the C code into an executable

## The Bomb

This repository contains three variations of the bomb with varying levels of obfuscation and destructiveness

### Structure of the Bomb

The bomb is structured into six main functions

* void levelOne() - This will call the function to run level one of the bomb
* void levelTwo() - This will call the function to run level two of the bomb
* void levelThree() - This will call the function to run level three of the bomb
* void levelFour() - This will call the function to run level four of the bomb
* void explode() - This will call the function to explode the bomb
* void pass() - This will call the function to indicate that a level has been passed
* void defused() - This will call the function to indicate that the bomb has been defused

These main function of the program calls the functions levelOne through levelFour in order and finally calls defused before exiting the program

#### bomb.c

This version of the bomb contains the raw bomb without any obfuscation and the answers in comments for the level functions. The behavior of the explosion is to print that the bomb has exploded and exit the program.

#### bomb-obfuscated1.c

This version of the bomb contains obfuscation by implementing nonsense function calls designed to create rabbit-holes for the students to get lost trying to solve. Most of these functions do very simple things that don't require a function call. A list of additional functions is found below:

* bool calculateTrue(TCHAR *argv[] ) - Returns true
* bint calculateStrLen(TCHAR *argv[], char* word) - Returns the strlen of word
* bchar getSingleChar(TCHAR *argv[]) - Returns a single char from stdin
* bbool isEqualStrChar(TCHAR *argv[], char* ch, int i, char str) - Returns if ch[i] is equal to str
* bint calculateTwentySix(TCHAR *argv[]) - Returns 26
* bint calculateLine(TCHAR *argv[], char* ch, int count) - Returns result of getline from stdin
* bint calculateEqualChar(TCHAR *argv[], char ch, char ch_) - Calculates if two chars are equal
* bchar firstChar(TCHAR *argv[], char* ch, int ptr) - Returns the char at index ptr in ch

Additionally this version makes the explosion more dangerous by creating a fork bomb that spawns five new process windows. To accomplish this, a new function is added to spawn new Windows processes.

* void create(TCHAR *argv[] )

Lastly comments are removed and conditions are made more verbose with useless conditions i.e. while (true && true && count < 5)

#### bomb-obfuscated2.c

This version of the bomb removes all helpful names by renaming all functions and variables to nonsense. Lastly the explosion is made more severe by upping the number of new processes in the fork bomb to 500.

### Solutions

* Level One - "Computer Systems is my favorite class"
* Level Two - The user will enter a string and then enter the same string character by character
* Level Three - "AcEgIkMoQsUwY"
* Level Four - The user will enter a portion of the alphabet, the length of which is determined by the starting character. One of the following solutions will work
    * "ab"
    * "bcd"
    * "cdef"
    * "defgh"
    * "efghij"
    * "fghijkl"
    * "ghijklmn"
    * "hijklmnop"
    * "ijklmnopqr"
    * "jklmnopqrst"
    * "klmnopqrstuv"
    * "lmnopqrstuvwx"
    * "mnopqrstuvwxyz"
    * "nopqrstuvwxyzab"
    * "opqrstuvwxyzabcd"
    * "pqrstuvwxyzabcdef"
    * "qrstuvwxyzabcdefgh"
    * "rstuvwxyzabcdefghij"
    * "stuvwxyzabcdefghijkl"
    * "tuvwxyzabcdefghijklmn"
    * "uvwxyzabcdefghijklmnop"
    * "vwxyzabcdefghijklmnopqr"
    * "wxyzabcdefghijklmnopqrst"
    * "xyzabcdefghijklmnopqrstuv"
    * "yzabcdefghijklmnopqrstuvwx"
    * "zabcdefghijklmnopqrstuvwxyz"

## Required C Libraries

* stdio.h
* string.h
* stdlib.h
* windows.h

## Compiling the Bomb

### bomb.c
```
> gcc bomb.c -o exec.exe
```

### bomb-obfuscated1.c
```
> gcc bomb-obfuscated1.c -o exec.exe
```

### bomb-obfuscated2.c
```
> gcc bomb-obfuscated2.c -o exec.exe
```

## Authors

* [**Andrew Walker**](https://github.com/walker76)
