
Installation of valgrind in Linux:

$ sudo apt update
$ sudo apt install valgrind

#############################

Why valgrind?

1.Memory leaks : Allocating memory without freeing it.
2.Invalid memory Access : Accessing memory outside allocated bounds
3.use after Free : Accessing memory it has been freed
4.uninitialized Variables : Using Variables without initializing them
5.Thread Issues : errors in multi-threaded environments

compiling program:

g++ -g -o my_program myprogram.cpp

Running valgrind:

1.To check memory errors
valgrind ./my_program

2.Detecting Memory Leaks
valgrind --leak-check=full ./my_program

3.Tracking Memory Origins
valgrind --track-origins=yes ./my_program

4.Thread analysis
valgrind --tool=helgrind ./my_program
valgrind --tool=drd ./my_program

