#include <stdio.h>
#define MAX 10 
void read_matrix(int mat[MAX][MAX], int m, int n); 
void print_matrix(int mat[MAX][MAX], int m, int n); 
void multiply_matrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX], int m1, int n1, int m2, int n2); 
void add_matrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX], int m, int n); 
void subtract_matrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX], int m, int n); 
void transpose_matrix(int mat[MAX][MAX], int trans[MAX][MAX], int m, int n); 

int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    int mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX]; 
    int m1, n1, m2, n2; 
    int choice; 

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &m1, &n1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &m2, &n2);

    printf("Enter the elements of the first matrix:\n");
    read_matrix(mat1, m1, n1);
    printf("Enter the elements of the second matrix:\n");
    read_matrix(mat2, m2, n2);

    printf("The first matrix is:\n");
    print_matrix(mat1, m1, n1);
    printf("The second matrix is:\n");
    print_matrix(mat2, m2, n2);

    printf("Choose one of the following matrix operations:\n");
    printf("1) Multiplication\n");
    printf("2) Addition\n");
    printf("3) Subtraction\n");
    printf("4) Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(n1 == m2) 
            {
                multiply_matrix(mat1, mat2, res, m1, n1, m2, n2);
                printf("The product of the two matrices is:\n");
                print_matrix(res, m1, n2);
            }
            else
            {
                printf("Multiplication is not possible.\n");
            }
            break;
        case 2:
            if(m1 == m2 && n1 == n2) 
            {
                add_matrix(mat1, mat2, res, m1, n1);
                printf("The sum of the two matrices is:\n");
                print_matrix(res, m1, n1);
            }
            else
            {
                printf("Addition is not possible.\n");
            }
            break;
        case 3:
            if(m1 == m2 && n1 == n2) 
            {
                subtract_matrix(mat1, mat2, res, m1, n1);
                printf("The difference of the two matrices is:\n");
                print_matrix(res, m1, n1);
            }
            else
            {
                printf("Subtraction is not possible.\n");
            }
            break;
        case 4:
            printf("The transpose of the first matrix is:\n");
            transpose_matrix(mat1, res, m1, n1);
            print_matrix(res, n1, m1);
            printf("The transpose of the second matrix is:\n");
            transpose_matrix(mat2, res, m2, n2);
            print_matrix(res, n2, m2);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

void read_matrix(int mat[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void print_matrix(int mat[MAX][MAX], int m ,int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX], int m1, int n1, int m2, int n2)
{
    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            res[i][j] = 0; 
            for(int k = 0; k < n1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j]; 
            }
        }
    }
}

void add_matrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j]; 
        }
    }
}
void subtract_matrix(int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            res[i][j] = mat1[i][j] - mat2[i][j]; 
        }
    }
}
void transpose_matrix(int mat[MAX][MAX], int trans[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            trans[j][i] = mat[i][j]; 
        }
    }
}