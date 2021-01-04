#include <stdio.h>

int main() {
    int row,column,colCount=0;
    int alreadyPrinted = 0;
    char columnLabel[3][9] = {"Height", "AgeOfMan","StudentID"}; // String 
    // array[row][col]
    // for String declaration, 
    // [row] is determined by the number of words
    // [col] is determined by the number of char in a word

    for(int z=0; z<3 ; z++){
        printf("\t");
        for(int i=0; i<9 ; i++){
            printf("%c",columnLabel[z][i]);
        } 
        printf("\t");

    }


    printf("\n");

    float x[3][2]={{12.3,14.2},{13.6,16.5},{10.5,11.82}};

    // while(colCount<2){
    //     printf("\tcolumn %d ", colCount++);

    // }
    // printf("\n");
 
  for(row=0;row<3;row++){   

    printf("row %d ",row);

    for(column=0;column<2;column++){

      printf("\t%.2f\t ", x[row][column]);
    }
    printf("\n");
    
  }
  return 0;
}