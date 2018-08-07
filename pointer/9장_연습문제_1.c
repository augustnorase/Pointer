//
//  9장_연습문제_1.c
//  pointer
//
//  Created by D.Ruin on 07/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void main(){
    int n = 20;
    double d = 5.5;
    char *str = "ABCD";
    void *vp;
    
    vp = &n;
    printf("%d\n", *(int*)vp);
    vp = &d;
    printf("%g\n", *(double*)vp);
    vp = str;
    printf("%c\n", *(char*)vp);
}
