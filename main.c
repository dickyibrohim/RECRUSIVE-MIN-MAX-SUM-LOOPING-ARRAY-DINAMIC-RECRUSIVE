#include "header.h" // For Call header.h FILE
// DICKY IBROHIM
int main()
{   int manydata;
    int myarray [100];
    printf ("Input Many Data= ");
    scanf ("%d", &manydata); // Input Manydata
    loopingwithrec (myarray,0,manydata); // Call loopingwithrec Function
    printf ("OUTPUT ARRAY= ");
    printrec(myarray,0,manydata-1); // Call printrec for printout All Array Function

    printf ("\n\nMin= %d",findMin(myarray, 0, manydata-1)); // Call minrec Function
    printf ("\nMax= %d\n",findMax (myarray,0,manydata-1)); // Call maxrec Function

    printf ("Jumlah Array= %d", sumrecarray (myarray, manydata-1)); // Call SUM Function
    return 0;
}


