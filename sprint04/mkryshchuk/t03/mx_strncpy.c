char *mx_strncpy(char *dst, const char *src, int len) {
    int i;
    
    i = 0;
    while(i < len && src[i]) {
	dst[i] = src[i];
	i++;
    }
    dst[i] = '\0';
    while(i < len) {
	dst[i] = '\0';
	i++;
    }
    return dst;
}
