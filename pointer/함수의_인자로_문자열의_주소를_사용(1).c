//
//  함수의_인자로_문자열의_주소를_사용(1).c
//  pointer
//
//  Created by D.Ruin on 06/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void func(char *s){
    puts(s);
}

void main(){
    func("ABCD");
}
