//
//  주소를_저장하는_함수의_매개_변수를_사용하여_값을_저장.c
//  pointer
//
//  Created by D.Ruin on 06/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void func(int n1, int n2, int *psum){
    *psum = n1 + n2;
}

void main(){
    int sum;
    int a = 10, b = 20;
    
    func(a, b, &sum);
    printf("%d\n", sum);
}
