#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()

{

int bytes_read;

int size = 1024;

char *string;

printf ("Please enter a string: ");

/* These 2 lines are very important. */

string = (char *) malloc (size);

bytes_read = getline (&string, &size, stdin);

if (bytes_read == -1)

{
puts ("ERROR!");

}

else

{

puts ("You entered the following string: ");

puts (string);

printf ("\nCurrent size for string block: %d", bytes_read);

}
return 0;

}
