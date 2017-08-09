#include <stdio.h>

int strend(char *s, char *t){
    char *p,*q;
    int len = 0;
    q = t;

    while(*t!='\0')
    {
	    t++;
	    len++;
    }

    while(*s!='\0')
    {
	    s++;
    }

    for(p=s-len; *p==*q; p++, q++)
    {
	    return 1;
    }
    return 0;

}
