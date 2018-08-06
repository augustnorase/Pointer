//
//  8장_연습문제_1.c
//  pointer
//
//  Created by D.Ruin on 06/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void func(char a, int b, double c, char *d){
    printf("%c %d %f %s\n", a, b, c, d);
}

void main(){
    char c = 'Z';
    int n1 = 50;
    double d = 77.777;
    char *str = "C Programming";
    
    func(c, n1, d, str);
}


