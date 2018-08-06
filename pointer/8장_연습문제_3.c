//
//  8장_연습문제_3.c
//  pointer
//
//  Created by D.Ruin on 06/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

int sum(int n1, int n2){
    return n1 + n2;
}


void main(){
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    printf("%d + %d = %d\n", n1, n2, sum(n1, n2));
}


