#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    unsigned long av, count = nbr, i, j = 0;
    char *res = 0;
    while (count > 0) {
	count /= 16;
        j++;
    }
    if (nbr == 0) {
	res = mx_strnew(1);
	res[0] = 0 + '0';
    }
    else
        res = mx_strnew(j);
    for(i = nbr; i > 0; i /= 16) {
	j--;
        av = i % 16;
        if (av == 10)
	    res[j] = 'a';
	else if(av == 11)
	    res[j] = 'b';
	else if(av == 12)
            res[j] = 'c';
        else if(av == 13)
            res[j] = 'd';
	else if(av == 14)
            res[j] = 'e';
	else if(av == 15)
            res[j] = 'f';
	else
	    res[j] = (i % 16) + '0';
    }
    return res;
}

