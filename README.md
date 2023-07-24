printf is a function in the C standard library that is used for formatted output. Here is a simple usage:

c
Copy code
#include <stdio.h>

int main() {
    int number = 10;
    printf("The number is %d\n", number);
    return 0;
}
In this example, printf outputs "The number is 10". The %d in the string is a placeholder for an integer, which is replaced by the value of the number variable when the program is run.

Here are some of the common format specifiers:

%d or %i - integer
%f - floating point number
%c - character
%s - string
%p - pointer
%u - unsigned integer
%x or %X - unsigned hexadecimal integer
%o - unsigned octal integer
%% - a literal % character
printf can also be used with multiple arguments:

c
Copy code
#include <stdio.h>

int main() {
    int number1 = 10, number2 = 20;
    printf("The numbers are %d and %d\n", number1, number2);
    return 0;
}
This will output: "The numbers are 10 and 20". The arguments after the format string are inserted in the places of the format specifiers, in the same order.

Note that printf returns the number of characters that are printed, or a negative value if an error occurs.
