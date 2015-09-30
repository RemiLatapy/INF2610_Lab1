/*
 * baz.c
 *
 *  Created on: 2013-08-15
 *      Author: Francis Giraldeau <francis.giraldeau@gmail.com>
 */

#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include "whoami.h"

int main(int argc, char **argv) {
	increment_rank();
	whoami("baz");
        int n = atoi(argv[1]);
        
        char *arg;
        asprintf(&arg, "%d", --n);
        
        execlp("foo", "foo", arg, NULL);
	return 0;
}
