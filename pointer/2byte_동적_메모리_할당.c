//
//  2byte_동적_메모리_할당.c
//  pointer
//
//  Created by D.Ruin on 07/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ip;
    
    ip = (int*) malloc(4); // int를 위해 4byte 다른 숫자를 넣어도 실행은 된다.
    *ip = 500;
    
    printf("%d\n", *ip);
    free(ip);
}
