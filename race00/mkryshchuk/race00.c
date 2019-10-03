void mx_printstr(const char *s);
void mx_printchar(char c);

void printchatacters(int map_width) {
    if (map_width == 1)
        mx_printstr("<=>");
    else if (map_width == 2)
        mx_printstr( "<==>");
    else if (map_width > 2) {
        mx_printstr("<=");
            int m = 0;
     while (m < map_width - 2) {
         mx_printstr("-");
         m++;
     }
     mx_printstr("=>");
     }  
}

void race00(int map_length, int map_width, int one_y, int one_x) {
    if (map_length > 0 
    && map_width > 0 
    && one_y >= 0 
    && one_y < map_length - 1 
    && one_x >= 0 
    && one_x < map_width - 1) {
    for (int i = 0; i < map_length + 2; i++) {
         if (i == 0 || i == map_length + 1)
               printchatacters (map_width);
            else {
                for (int n = 0; n < map_width + 2; n++) {
                    if (i == one_y + 1 && n == one_x + 1)
                        mx_printchar('1');
                    else if (n == 0 || n == map_width + 1) {
                        if (i % 2 == 0)
                            mx_printchar('+');
                    else 
                        mx_printchar('*');
                    } 
                    else 
                mx_printchar('0');
      
            }     
          }                  
          mx_printchar('\n');
     }    
  }   
}


int main () {
    race00(10, 10, 5, 5);
    return 0;
}
