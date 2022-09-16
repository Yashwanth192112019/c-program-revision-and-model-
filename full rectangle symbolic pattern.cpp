#include<stdio.h>

int main()
{
    int rows, columns , i, j;
    
    printf("Enter rows and columns of rectangle\n");
    scanf("%d %d", &rows, &columns);
    
    for(i = 0; i < rows; i++){
  
        for(j = 0; j < columns; j++){
           printf("#");
	    }
        printf("\n");
    }
    return 0;
}
