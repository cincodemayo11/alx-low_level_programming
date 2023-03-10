learning how to create a static library.

First off, copy all the functions' source code into one folder.
Create a header file containing prototypes of all the functions' code in the same folder.
Run gcc -c *.c to compile all the .c files in the folder. It will output .o files.
Run ar -rcs libmy.a *.o to create library called my.a out of all the .o files.
You're done!
