void booleanMatrix(int R, int C, int matrix[][C])
{
    bool r = false;
    bool c = false;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (i == 0 && matrix[i][j] == 1) r = true;
            if (j == 0 && matrix[i][j] == 1) c = true;
            if (matrix[i][j] == 1) {
                matrix[0][j] = 1;
                matrix[i][0] = 1;
            }
        }
    }
    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
            if (matrix[0][j] == 1 || matrix[i][0] == 1) matrix[i][j] = 1;
        }
    }
    if (r == true) {
        for (int i = 0; i < C; i++)  matrix[0][i] = 1;
    }
    if (c == true) {
        for (int i = 0; i < R; i++) matrix[i][0] = 1;
    }
}
