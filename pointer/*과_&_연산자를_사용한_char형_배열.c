//
//  *과 & 연산자를 사용한 char형 배열.c
//  pointer
//
//  Created by D.Ruin on 02/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void main(){
    char carr[5] = {'A', 'B', 'C', 'D', 'E'};
    
    printf("%c %c %c %c %c\n", *&carr[0], *&carr[1], *&carr[2], *&carr[3], *&carr[4]);
}
