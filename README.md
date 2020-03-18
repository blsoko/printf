C - printf

GENERAL  DESCRIPTION

Our function emulates the result that should print the function printf
only with 'c' for character (using %c), 's' for string (using %s), 
'd' for decimal (using %d), 'i' for decimal (It's the same in the printf,
but it's different in scanf function, using %i),
'%' for print %.

EXAMPLES
This are some examples of how can you use the printf function:

       USE                             STD_OUT
printf("hello")              - >        hello
printf("number: %d", -15)    - >        number: -15
printf("number: %i", -26)    - >        number: -26
printf("Char: %c", 'C')      - >        Char: C
printf("string %s", "Hi")    - >        string: Hi
printf("a, %%, %k, %r, \\")  - >        a, %, %k, %r, \

We created a man page called man_3_printf if you want more information
about the function.

Created by Edison Giraldo Aristizabal, Jose Erney Giraldo Ortega.
