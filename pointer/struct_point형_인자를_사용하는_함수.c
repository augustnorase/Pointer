//
//  struct_point형_인자를_사용하는_함수.c
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

void func(struct _point s){
    printf("%d %d\n", s.x, s.y);
}

void main(){
    struct _point p1 = {5, 5};
    func(p1);
}
