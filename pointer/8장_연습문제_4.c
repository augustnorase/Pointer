//
//  8장_연습문제_4.c
//  pointer
//
//  Created by D.Ruin on 06/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>


struct _point{
    int x;
    int y;
};

void print1(struct _point s){
    printf("%d %d\n", s.x, s.y);
}

void print2(struct _point *ps){
    printf("%d %d\n", ps->x, ps->y);
}


void main(){
    struct _point p1 = {10, 10}, p2 = {20, 20};
    
    print1(p1);
    print2(&p2);
}
