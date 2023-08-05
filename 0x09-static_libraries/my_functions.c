#include "main.h"

int _putchar(char c) {
    return write(1, &c, 1);
}

int _islower(int c) {
    return c >= 'a' && c <= 'z';
}

int _isalpha(int c) {
    return _islower(c) || _isupper(c);
}

int _abs(int n) {
    return n < 0 ? -n : n;
}

int _isupper(int c) {
    return c >= 'A' && c <= 'Z';
}

int _isdigit(int c) {
    return c >= '0' && c <= '9';
}

int _strlen(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

void _puts(char *s) {
    while (*s != '\0') {
        _putchar(*s);
        s++;
    }
}

char *_strcpy(char *dest, char *src) {
    char *dest_ptr = dest;
    while (*src != '\0') {
        *dest_ptr = *src;
        src++;
        dest_ptr++;
    }
    *dest_ptr = '\0'; // null-terminate the destination string
    return dest;
}

int _atoi(char *s) {
    int sign = 1;
    int result = 0;

    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;

    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

char *_strcat(char *dest, char *src) {
    char *dest_ptr = dest;
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }
    while (*src != '\0') {
        *dest_ptr = *src;
        src++;
        dest_ptr++;
    }
    *dest_ptr = '\0'; // null-terminate the concatenated string
    return dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *dest_ptr = dest;
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }
    while (*src != '\0' && n > 0) {
        *dest_ptr = *src;
        src++;
        dest_ptr++;
        n--;
    }
    *dest_ptr = '\0'; // null-terminate the concatenated string
    return dest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *dest_ptr = dest;
    while (*src != '\0' && n > 0) {
        *dest_ptr = *src;
        src++;
        dest_ptr++;
        n--;
    }
    while (n > 0) {
        *dest_ptr = '\0'; // pad with null characters if src is shorter than n
        dest_ptr++;
        n--;
    }
    return dest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n > 0) {
        *ptr = b;
        ptr++;
        n--;
    }
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *dest_ptr = dest;
    char *src_ptr = src;
    while (n > 0) {
        *dest_ptr = *src_ptr;
        dest_ptr++;
        src_ptr++;
        n--;
    }
    return dest;
}

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && _strchr(accept, *s) != NULL) {
        count++;
        s++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (_strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *hay_ptr = haystack;
        char *needle_ptr = needle;
        while (*needle_ptr != '\0' && *hay_ptr == *needle_ptr) {
            hay_ptr++;
            needle_ptr++;
        }
        if (*needle_ptr == '\0') {
            return haystack; // needle found in haystack
        }
        haystack++;
    }
    return NULL; // needle not found
}