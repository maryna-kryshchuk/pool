#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long bas = 1;
    int len = 0;
    while(hex[len] != '\0') {
        len++;
    }
    int dec = 0;
    for(int i = len - 1; i >= 0; i--) {
	if(mx_isdigit(hex[i])) {
            dec += (hex[i] - 48) * bas;
            bas= bas * 16;
        }
        else if (mx_isalpha(hex[i])) {
	    dec += (hex[i] - 55) * bas;
	    bas = bas * 16;
        }
    }
    return dec;
}

