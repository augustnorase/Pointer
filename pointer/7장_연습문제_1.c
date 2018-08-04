//
//  7장_연습문제_1.c
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
    struct _point p1 = {10, 20};
    struct _point *ps = &p1;
    
    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d\n", ps->x, ps->y);
}
