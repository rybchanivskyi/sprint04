int mx_count_words(const char *str, char delimiter) {
    int flag = 0;
    int count = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != delimiter) {
            flag = 1;
        }
        else if (str[i] == delimiter && flag) {
            flag = 0;
            ++count;
        }
    }
    if (flag) {
      ++count;
    }
    return count;
}
