//
//  배열의_시작_주소를_저장하는_구조체의_멤버_변수.c
//  pointer
//
//  Created by D.Ruin on 04/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

struct _aData{
    char *pcarr;
    int *piarr;
};

void main(){
    char carr[4] = {'A', 'B', 'C', 'D'};
    int iarr[4] = {10, 20, 30, 40};
    struct _aData s1 = {carr, iarr};
    
    printf("%c %c %c %c\n", s1.pcarr[0], s1.pcarr[1], s1.pcarr[2], s1.pcarr[3]);
    
    printf("%d %d %d %d\n", s1.piarr[0], s1.piarr[1], s1.piarr[2], s1.piarr[3]);
}
