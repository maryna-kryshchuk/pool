Last login: Wed Sep 18 11:56:18 on ttys000
e2r6p8% cd sprint05 
e2r6p8% cd mkryshchuk/ 
e2r6p8% cd t03
e2r6p8% ls
mx_atoi.c	mx_isspace.c	mx_printint.c
mx_isdigit.c	mx_printchar.c	mx_sum_args.c
e2r6p8% vim mx_printint.c 
















  3 void mx_printint(int nb) {
  4     if (nb == -2147483648) {
  5         mx_printchar('-'); 
  6         mx_printchar('2');
  7         mx_printchar('1');
  8         mx_printchar('4');
  9         mx_printchar('7');
 10         mx_printchar('4');
 11         mx_printchar('8');
 12         mx_printchar('3');
 13         mx_printchar('6');
 14         mx_printchar('4');
 15         mx_printchar('8');
 16     }   
 17     if (nb < 0) {
 18         nb *= -1;
 19         mx_printchar('-');
 20     }   
 21     if (nb >= 10)
 22         mx_printint(nb / 10);
 23     mx_printchar(nb % 10 + '0');
 24 }   
 25 

