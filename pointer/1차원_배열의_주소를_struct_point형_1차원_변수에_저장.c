//
//  1차원_배열의_주소를_struct_point형_1차원_변수에_저장.c
//  pointer
//
//  Created by D.Ruin on 04/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

struct _point{
    int x;
    int y;
};

void main(){
    struct _point sarr[5] = {1,1,2,2,3,3,4,4,5,5};
    struct _point *sp = sarr;
    
    printf("(%d, %d)\n", sp->x, sp->y);
    printf("(%d, %d)\n", (sp+1)->x, (sp+1)->y);
    // 이렇게 해서 +4까지...
}
