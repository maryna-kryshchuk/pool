 void mx_ref_pointer(int i, int ******ptr) {
    int *p = &i;
    int **p2 = &p;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    ptr = &p5;
}

