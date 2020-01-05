/*
 * Filename:    rftoc.c
 * Author:      JerryMoo wuchujie123@gmail.com
 * Date:        25-FEB-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-5, page 14
 *
 * Modify the temparature conversion program to print the table in
 * reverse order, that is, from 300 degrees to 0.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int fahr;
    printf("  F    C  \n");
    printf("----------\n");

    for (fahr = 300; fahr >=0 ; fahr-=20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
    return EXIT_SUCCESS;
}
