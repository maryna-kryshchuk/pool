void tonumbers(int **mas, int width, int height, char *s) {
    int a = 0;
    int b = 0;
    for(int i = 0; i < mx_strlen(s); i++) {
            if (s[i] == '.')
                mas[i/width][i % width] = -2;
            if (s[i] == '#')
                mas[i/width][i % width] = -1;
        }
}