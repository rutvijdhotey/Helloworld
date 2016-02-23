//
//  main.c
//  Helloworld
//
//  Created by Rutvij Dhotey on 10/4/15.
//  Copyright © 2015 Rutvij Dhotey. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void readMatrix(int arr[][MAXCOLS], int m, int n);
void printMatrix(int arr[][MAXCOLS], int m, int n);
void productMatrix(int array1[][MAXCOLS], int array2[][MAXCOLS],
                   int array3[][MAXCOLS], int m, int n);



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int i;
    printf("Enter a Value : ");
    scanf("%d", &i);
    
    printf("You have entered %d \n", i);
 ///////////////////////
    
    
        FILE *fp;
    fp= fopen("/Users/rutvijdhotey/Desktop/test.txt", "w+");
    fprintf(fp ,"Whats UP \n");
    fputs("This is for testing fputs", fp);
    fclose(fp);
 ///////////////////////////////////
    
    char buff[255];
    
    fp = fopen("/Users/rutvijdhotey/Desktop/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff );
    
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff );
    
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
/////////////////////////////
    
    
    int num[100],n, c,d,swap;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\n Enter the elements: ");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        
    }
    
    for(c=0; c<n-1;c++)
    {
        for (d=0; d<n-c-1;d++)
        {
            if( num[d] > num [d+1])
            {
                swap= num[d];
                num[d] = num[d+1];
                num[d+1] = swap;
            }
        }
    }

    printf("The sorted array: \n");
    
    for(i=0; i<n; i++ )
    {
        printf("%d ", num[i]);
    }
  //////////////////////////////
    
    //Transpose
    static int array[10][10];
    int r, j, m, u;
    
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &u);
    printf("Enter the coefiicients of the matrix\n");
    for (r = 0; r < m; ++r)
    {
        for (j = 0; j < u; ++j)
        {
            scanf("%d", &array[r][j]);
        }
    }
    printf("The given matrix is \n");
    for (r = 0; r < m; ++r)
    {
        for (j = 0; j < u; ++j)
        {
            printf(" %d", array[r][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is \n");
    for (j = 0; j < u; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            printf(" %d", array[r][j]);
        }
        printf("\n");
    }
    return 0;
    
    ///STRING COPY
    char *str1 = "HELLO";
    char str2[10];
    int length;
    
    length = strlen("HELLO"); /* length = 5 */
    (void) strcpy(str2,str1);
    
    /////Accepting a string
    char name[20];
    printf("\nEnter the Name : ");
    scanf("%s",name);
    
    
}
////Matrix Mult
    
    void readMatrix(int arr[][MAXCOLS], int m, int n)
    {
        int i, j;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
    }
    
    
    
    void printMatrix(int arr[][MAXCOLS], int m, int n)
    {
        int i, j;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%3d", arr[i][j]);
            }
            printf("\n");
        }
    }
    /*  Multiplication of matrices */
    void productMatrix(int array1[][MAXCOLS], int array2[][MAXCOLS],
                       int array3[][MAXCOLS], int m, int n)
    {
        int i, j, k;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                array3[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    array3[i][j] = array3[i][j] + array1[i][k] *
                    array2[k][j];
                }
            }
        }
    }
    
    
    
    
    
    


