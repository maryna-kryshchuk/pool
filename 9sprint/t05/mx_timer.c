#include <time.h>
#include <stdio.h>

double mx_timer(void (*f)()) {
    clock_t start;
    time_t end;
    double res;
    
    if(f) {
	start = clock();
	f();
	end = clock();
	res = (double)(end - start) / CLOCKS_PER_SEC;
	return res;
    }
    else
        return -1;
}
void pr() {
printf("hello world");
}

int main () {
printf("%f", mx_timer(pr));
return 0;
}
