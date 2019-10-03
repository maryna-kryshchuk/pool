void mx_deref_pointer(char ******str) {
    char *s = "Follow the white rabbit!";
    char **s2 = &s;
    char ***s3 = &s2;
    char ****s4 = &s3;
    char *****s5 = &s4;
    str = &s5;
}

