# include <stdio.h>
 main ( )
 {
     int n, nfact;
     printf ("Enter a number to Calculate its Factorial : ");
     scanf ("%d", &n );
     printf ("\n The Factorial of %d! = ", n);
     nfact = 1;
     while (n >0)
        {
            nfact = nfact *n;
            n = n-1;
            }
            printf (" %d \n \n ", nfact);
            return 0;
            }
