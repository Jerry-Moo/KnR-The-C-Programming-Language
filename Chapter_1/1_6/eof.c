/*
 * Filename:    eof.c
 * Author:      JerryMoo wuchujie123@gmail.com
 * Date:        25-FEB-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-6, page 17
 *
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Enter a char\n");
    printf("getchar() != EOF : %d\n", getchar() != EOF);
    return EXIT_SUCCESS;
}
