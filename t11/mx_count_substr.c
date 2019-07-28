char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int i = 0;
    int len = mx_strlen(sub);

    for (i = 0; str[i] != '\0'; ++i) {
        if (mx_strstr(str + i, sub) != 0) {
            i = mx_strstr(str + i, sub) - str + len;
            ++count;
        }
    }
    return count;
}
