//
//  함수_포인터_배열.c
//  pointer
//
//  Created by D.Ruin on 07/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

int function1(){
    puts("함수 1입니다.");
    return 1;
}

int function2(){
    puts("함수 2입니다.");
    return 2;
}

void main(){
    int (*func[2])();
    
    func[0] = function1;
    printf("%d\n", func[0]());
    func[1] = function2;
    printf("%d\n", func[1]());
}
