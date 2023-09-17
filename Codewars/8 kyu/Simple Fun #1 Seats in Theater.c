// https://www.codewars.com/kata/588417e576933b0ec9000045/train/c
int seats_in_theater(int n_cols, int n_rows, int col, int row)
{
    return (n_cols-(col-1)) * (n_rows-(row));
}
