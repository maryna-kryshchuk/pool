int mx_strcmp(const char *s1, const char *s2) {
    int res = 0;

    while(*s1 != '\0' || *s2 != '\0') {
        if (*s1 > *s2) {
            res = 1;
            break;
        }
        else if (*s2 > *s1) {
	    res = -1;
	    break;
        }
        s1++;
        s2++;
    }
    return res;
}

