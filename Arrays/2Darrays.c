#include<stdio.h>

int main()
{ 
    int i=0,j=0;
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    
    //traversing 2D array 
    for(i=0;i<4;i++)
    { 
        for(j=0;j<3;j++)
        { 
            printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);
        }//end of j
    }//end of i

    return 0;
}

//one dimentional array
// •Address of A[I] = B + W * (I – LB)
// • I = Subset of element whose address to be found,
// B = Base address,
// W = Storage size of one element store in any array(in byte),
// LB = Lower Limit/Lower Bound of subscript(If not specified
// assume zero)

//two dimentional array
// • Address of A[I][J] = B + W * ((I – LR) * N + (J – LC)) 
// • I = Row Subset of an element whose address to be found,
// J = Column Subset of an element whose address to be found,
// B = Base address,
// W = Storage size of one element store in an array(in byte),
// LR = Lower Limit of row/start row index of the matrix(If not
// given assume it as zero),
// LC = Lower Limit of column/start column index of the matrix(If
// not given assume it as zero),
// N = Number of column given in the matrix.
