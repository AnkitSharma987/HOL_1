/*
============================================================================
Name : 27_c.c
Author : ANKIT SHARMA
Description : 
        27. Write a program to execute ls -Rl by the following system calls
            c. execle
          
Date: 31st Aug, 2024.
============================================================================
*/
#include <unistd.h>
#include <stdio.h>

void main()
{

    char *file_arg = "./27_dir";

    printf("Execution using execle :\n");
    execle("/bin/ls","ls","-lR", file_arg, NULL, NULL);
    printf("\n");
}

/*
Output:
ankit-sharma@ankit-sharma:~/Practicals/27$ ./27_c
Execution using execle :
./27_dir:
total 12
drwxrwxr-x 2 ankit-sharma ankit-sharma 4096 Aug 31 20:19 1
drwxrwxr-x 2 ankit-sharma ankit-sharma 4096 Aug 31 20:19 2
drwxrwxr-x 2 ankit-sharma ankit-sharma 4096 Aug 31 20:19 3

./27_dir/1:
total 0
-rw-rw-r-- 1 ankit-sharma ankit-sharma 0 Aug 31 20:19 1.txt

./27_dir/2:
total 0
-rw-rw-r-- 1 ankit-sharma ankit-sharma 0 Aug 31 20:19 2.txt

./27_dir/3:
total 0
-rw-rw-r-- 1 ankit-sharma ankit-sharma 0 Aug 31 20:19 3.txt



*/