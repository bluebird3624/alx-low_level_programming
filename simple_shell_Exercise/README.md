This directory contains exercise on basic concepts required to make a simple shell
1.Get PID and PPID
2.1. /proc/sys/kernel/pid_max (a shell script that prints the max value a Proces ID can be
3.Write a program that prints all the arguments, without using ac.
4.Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line. man 3 getline
5.Write a function that splits a string and returns an array of each word of the string. man strtok
6.Executing a program execve
7.Creating processes fork()
8.Wait wait()
9.Exercise: fork + wait + execve
	Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before crea	ting a new child.
10.Exercise: super simple shell
	Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.
11.File information
	The stat (man 2 stat) system call gets the status of a file. On success, zero is returned. On error, -1 is returned
12. Exercise: find a file in the PATH
	Write a program that looks for files in the current PATH.

		Usage: _which filename ...
