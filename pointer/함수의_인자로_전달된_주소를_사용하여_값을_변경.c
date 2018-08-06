//
//  함수의_인자로_전달된_주소를_사용하여_값을_변경.c
//  pointer
//
//  Created by D.Ruin on 06/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void func(int *np){
    *np = 20;
}

void main(){
    int n = 10;
    
    printf("%d\n", n);  // 10
    func(&n);
    printf("%d\n", n);  // 20
}

// n의 주소를 함수의 인자로 넘겨 np에 저장하고 np를 이용해 주소가 갖고 있는 값 10을 20으로 변경 가능
