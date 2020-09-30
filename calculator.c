#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
        int choice, op, nxt ;
        float a, b, sol;

        printf("Amongst the following categories, which one do you want to use first?\n\n");
        printf("1. BASIC ARITHMATIC (+-*/%)\n");
        //printf("2. HIGHER ARITHMATIC (fl,cl,abs)\n");
        //printf("3. TRIGONOMETRY (s,c,t,as,ac,at)\n4. LOGARITHMIC(exp, ln, log)\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case(1):
            {
                printf("Enter a number here: ");
                scanf("%f", &a);
                printf("\nWhich basic arithmetic operator do you want to use?\n");
                printf("1. +\n2. -\n3. *\n4. /\n");
                printf("Enter your choice: ");
                scanf("%d", op);

                if(op==1)
                {
                    printf("Enter another number: ");
                    scanf("%f");
                    sol= a+b;
                    printf("%f + %f = %f", a, b, sol);
                }
                if(op==2)
                {
                    printf("Enter another number: ");
                    scanf("%f");
                    sol= a-b;
                    printf("%f - %f = %f", a, b, sol);
                }
                if(op==3)
                {
                    printf("Enter another number: ");
                    scanf("%f");
                    sol= a*b;
                    printf("%f * %f = %f", a, b, sol);
                }
                if(op==4)
                {
                    printf("Enter another number: ");
                    scanf("%f");
                    sol= a/b;
                    printf("%f / %f = %f", a, b, sol);
                }

                printf("\n\nWhat do you want to do next?\n");
                printf("1. Apply another BASIC ARTITHMATIC operator to the previous solution\n");
                printf("2. Exit\n\n");

                printf("Enter your choice here: ");
                scanf("%d", &nxt);

                if(nxt==2)
                {
                 exit(1);
                }

            }

        }

        return 0;
}








