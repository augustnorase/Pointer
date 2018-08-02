//
//  배열과_포인터의_차이점.c
//  pointer
//
//  Created by D.Ruin on 02/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>
void main(){
    char carr[3] = {'A', 'B', 'C'};
    char *cp = carr;
    
    printf("%d %d\n", sizeof(cp), sizeof(carr));
    cp = NULL;
    // carr = NULL; // 이건 불가능
}

// sizeof(cp)는 포인터 변수이므로 8이고, sizeof(carr)은 char형 3개이므로 3이 출력.
// cp는 변수이므로 주소 대입이 가능하지만 carr은 대입이 불가능
// p.127부터 시작
