void mx_printchar(char c);

void mx_printint(int nb) {       
    if (nb == -2147483648) {
  	mx_printchar('-');
  	mx_printchar('2');
 	mx_printchar('1');
  	mx_printchar('4');
  	mx_printchar('7');
  	mx_printchar('4');
	mx_printchar('8');
	mx_printchar('3');
	mx_printchar('6');
	mx_printchar('4');
	mx_printchar('8');
    }
    if (nb < 0) {
        nb *= -1;
        mx_printchar('-');
    }
    if (nb >= 10)
        mx_printint(nb / 10);
    mx_printchar(nb % 10 + '0');
}

