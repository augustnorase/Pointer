//
//  5byte_동적_메모리_할당.c
//  pointer
//
//  Created by D.Ruin on 07/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void main(){
    char *cp;
    
    cp = (char*) malloc(sizeof(char)*5);
    cp[0] = 10;
    cp[1] = 20;
    cp[2] = 30;
    cp[3] = 40;
    cp[4] = 50;
    
    printf("%d %d %d %d %d\n", cp[0], cp[1], cp[2], cp[3], cp[4]);
    free(cp);
}
