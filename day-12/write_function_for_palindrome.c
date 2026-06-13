#include <stdio.h>
#include <string.h>

int is_palindrome(const char *s)
{
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main(void)
{
    char str[256];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (is_palindrome(str)) {
        printf("\"%s\" is a palindrome\n", str);
    } else {
        printf("\"%s\" is not a palindrome\n", str);
    }

    return 0;
}
