% printf()
% Nfon Andrew
% July 2021

# NAME
 printf \- format and prints out data

# SYPNOPSIS
**prints out** FORMAT [ARGUMENT]...

# DESCRIPTION
**Print**
 A custom function that prints arguments(s) according to the format.

# USAGE

use the following key characters to format arguments:

**%c**: prints out characters

**%s**: prints out strings

**%**: prints percentage;

**%d**: prints out intergers of type int

**%i**: prints out integers of type int

**%b**: prints out binary numbers

**%u**: prints out unsigned integers of type int

**%x**: prints out hexadecimal numbers in lowercase

**%X**: prints out hexadecimal numbers in uppercase

**%o**: prints out octal numbers

**%r** : prints string in reverse order 

**%R** : prints string in ROT13 encoding

**%p**: prints out pointer addresses

**' '**: prints out a space

**#**: modifier for unsigned conversions

**+**: prints a plus sign in front of the number


# RETURN VALUES
The print() function returns an integer representing the number of symbols
printed not counting \\o for the string.

# BUGS
still testing

# SEE ALSO
printf(3)
