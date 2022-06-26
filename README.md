# multiplication-table-game

## Introduction
Simple terminal game to guess the answer to multiplications from the multiplication table

## Makefile
* ```make``` : Compile the program.
* ```make clean``` : Remove the objects compiled to make the program.
* ```make fclean``` : Clear the objetcs and the binary.

## How to use
After using ```make```, it'll apear a binary called "*program*". Execute it using ```./program```.
NOTE: The binary's name can be changed in the Makefile's variable "**NAME**"

A simple multiplication problem will be given to you.
Answers correctly and it'll give a new one. If you answers the question wrong, the same problem will be prompted again to answer correctly this time (and it'll be given again until you get it right!).

## Next steps
* Better interface
* Count each right and wrong answer.
* Calculate the time to answer each question
	* Show (in the end) the first 5 that took more time to answer.
* Levels of difficulty.