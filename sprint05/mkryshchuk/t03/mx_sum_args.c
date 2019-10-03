#include <stdbool.h>
void mx_printchar(char c);
bool mx_isdigit(int c);
void mx_printint(int c);
int mx_atoi(const char *str);

int main(int argc, char **argv) {
    if (argc > 1) {
        int res = 0;
        for (int i = 0; i < argc; i++) {
            int flag = 1;
            int j = 0;
                if (argv[i][j] == '+' || argv[i][j] == '-')
                    j++;
                while (argv[i][j]) {
                    if (!mx_isdigit(argv[i][j])) {
                        flag = 0;
                        break;
                    }
                    j++;
                }  
                if (flag == 1)
                    res += mx_atoi(argv[i]);
        }  
        mx_printint(res);
	mx_printchar('\n');
    }
    return (0);
}
