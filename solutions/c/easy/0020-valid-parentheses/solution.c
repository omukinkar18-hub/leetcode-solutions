#include <stdbool.h>

#define SIZE 10001

char stack[SIZE];
int top = -1;

void insert(char c) {
    top++;
    stack[top] = c;
}

char pop() {
    if (top == -1) {
        return '0';
    }

    char rec = stack[top];
    stack[top--] = 0;

    return rec;
}

bool isValid(char *s) {
    top = -1;
    int i = 0;
    char rec;

    while (s[i] != '\0') {
        rec = '0';

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            insert(s[i++]);
        }

        if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            rec = pop();

            if (rec == '(' && s[i] == ')') {
                i++;
            } else if (rec == '{' && s[i] == '}') {
                i++;
            } else if (rec == '[' && s[i] == ']') {
                i++;
            } else {
                return false;
            }
        }
    }

    return top == -1;
}
