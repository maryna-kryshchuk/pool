void mx_printstr(const char *s);

void mx_is_positive(int a) {
    if (a < 0) {
	mx_printstr("negative");
    }
    else if (a == 0) {
        mx_printstr("zero");
    }
    else if (a > 0) {
        mx_printstr("positive");
    }
    mx_printstr("\n");
}

