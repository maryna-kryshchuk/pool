int mx_strcmp(const char *s1, const char *s2) {
    int i;

    i = 0;
    while(s1[i] == s2[i] && s1[1] != '\0' && s2[i] != '\0')
	i++;
    return s1[i] - s2[i];
}