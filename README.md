# C-Programming in Linux

## To run C Program.
Compile:
> gcc <filename.c> -o<output_name>

Run:
> ./<output_name>

## To run C Program with pthread. 
> gcc <filename.c> -o<output_name> -lpthread

## To debug C Program.
Compile:
> gcc -g <filename.c>

To run in debug mode
> gdb ./a.out   

To execute the program
> "r"  

To go to next line.
> → "up 1" or "up 2" 

## To debug C Program with fork()
Compile the program.
then,
> break main

change mode
> set follow-fork-mode child

## To debug C Program with fork()
Compile the program.
then,
> break main

change mode
> set follow-exec-mode new




