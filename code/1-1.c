    #include <stdio.h>

    int main() {
        char s1[10] = "hi";
        char s2[] = "hi";
        char s3[] = {'h', 'i', '\0'};


        printf("s1: %s\n", s1);
        printf("s2: %s\n", s2);
        printf("s3: %s\n", s3);
        return 0;
    }
