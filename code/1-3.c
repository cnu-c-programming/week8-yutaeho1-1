    #include <stdio.h>
    #include <string.h>
    char *my_strcat(char *dst, const char *src){
        char *p = dst;
        p += strlen(dst);

        while (*src) {
            *p++ = *src++;
        }
        *p = '\0';
        return dst;
    }

    int main() {
        char str1[20] = "Hello";
        char str2[] = "world";

        printf("%s\n", str1);
        my_strcat(str1, str2);
        printf("%s\n", str1);
        return 0;
    }
