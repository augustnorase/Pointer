//
//  struct_point형_주소를_반환하는_함수.c
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

struct _point *func(){
    static struct _point s = {10, 10};
    
    return &s;  
}

void main(){
    struct _point *ps;
    ps = func();
    printf("%d %d\n", ps -> x, ps -> y);
}
