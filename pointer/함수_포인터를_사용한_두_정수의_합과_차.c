//
//  함수_포인터를_사용한_두_정수의_합과_차.c
//  pointer
//
//  Created by D.Ruin on 07/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void fplus(int n1, int n2){
    printf("%d + %d = %d\n", n1, n2, n1+n2);
}

void fminus(int n1, int n2){
    printf("%d - %d = %d\n", n1, n2, n1-n2);
}

void main(){
    void (*fp)(int, int);
    
    fp = fplus;
    fp(10, 10);
    
    fp = fminus;
    fp(10, 10);
}
