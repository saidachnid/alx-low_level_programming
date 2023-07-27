#include <stdio.h>

// Place the _strcat function implementation here

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1); // Output: Hello
    printf("%s", s2);   // Output: World!

    ptr = _strcat(s1, s2);

    printf("%s", s1);   // Output: Hello World!
    printf("%s", s2);   // Output: World!
    printf("%s", ptr);  // Output: Hello World!

    return 0;
}
