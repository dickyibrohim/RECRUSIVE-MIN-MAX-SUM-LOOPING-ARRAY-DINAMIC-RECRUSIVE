#include "header.h"
// DICKY IBROHIM
//Looping Input With Recrusif
int loopingwithrec (int myarray [], int cur, int manydata)
{
    if (cur==manydata-1)
    {
        printf ("Input Index %d= ", cur);
        scanf ("%d", &myarray [cur]);
        return;
    }
    else
    {
        printf ("Input Index %d= ", cur);
        scanf ("%d", &myarray [cur]);
        return loopingwithrec(myarray, cur+1, manydata);
    }
}
// SUM ARRAY
int sumrecarray (int myarray [], int manydata)
{   int A=0;
    if (manydata<0)
    {

        return 0;
    }
    else
    {

        A= myarray [manydata]+sumrecarray(myarray, manydata-1);
        return A;
    }
}

/// MAX 2 EDITED
int findMax (int myarray [], int cur, int last)
{   int loop1, loop2, swap;
// Sorting dulu
for (loop2=0;loop2<last-1;loop2++)
{
           for (loop1=0; loop1<last-loop2-1;loop1++)
           {
             if (myarray[loop1]<myarray[loop1+1])
             {
                 swap = myarray [loop1];
                 myarray [loop1]= myarray [loop1+1];
                 myarray [loop1+1]= swap;
             }
           }
}
    if (cur==last)
    {
        return myarray[cur];
    }
    else
    {
        if (myarray[cur]<myarray[last])
           {
               return findMax(myarray, cur+1, last);
           }
           else
           {
               return myarray [cur];
           }


    }
}
    /*
//MAX
int findMax(int myarray[], int cur, int last) {

    int max = 0;
    if (cur == last)
        {
            return myarray[cur];
        }
    else if (myarray[cur] < myarray[last])
        {
            return findMax(myarray, cur + 1, last);
        }
    else
        {
            return myarray[cur];
        }
}
*/
// MIN
/// MAX 2 EDITED
int findMin (int myarray [], int cur, int last)
{   int loop1, loop2, swap;
// Sorting dulu BUBBLE SORT
for (loop2=0;loop2<last-1;loop2++)
{
           for (loop1=0; loop1<last-loop2-1;loop1++)
           {
             if (myarray[loop1]>myarray[loop1+1])
             {
                 swap = myarray [loop1];
                 myarray [loop1]= myarray [loop1+1];
                 myarray [loop1+1]= swap;
             }
           }
}
    if (cur==last)
    {
        return myarray[cur];
    }
    else
    {
        if (myarray[cur]>myarray[last])
           {
               return findMax(myarray, cur+1, last);
           }
           else
           {
               return myarray [cur];
           }


    }
}
/*
int findMin(int myarray[], int cur, int last) {

    int min = 0;
    if (cur == last)
        {
            return myarray[cur];
        }
    else if (myarray[cur] > myarray[last])
        {
            return findMin(myarray, cur + 1, last);
        }
    else
        {
            return myarray[cur];
        }
}
*/

// Print Out Array With recrusive
void printrec(int myarray [], int cur, int manydata)
{
    if(cur==manydata)
    {
       printf ("%d", myarray [cur]);
    }
    else
    {
        printf ("%d, ", myarray [cur]);
        return printrec (myarray, cur+1, manydata);
    }
}
