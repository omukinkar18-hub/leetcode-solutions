#include <string.h>

int convert(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int romanToInt(char *s) {
    int len = strlen(s) - 1;
    int num1 = 0, num2 = 0, num = 0;

    while (len >= 0) {
        num1 = convert(s[len--]);

        if (len >= 0) {
            num2 = convert(s[len]);
        }

        if (num1 > num2) {
            num1 -= num2;
            len--;
        }

        num += num1;
        num2 = 0;
    }

    return num;
}
