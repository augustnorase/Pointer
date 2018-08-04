//
//  자동_변수와_정적_변수의_비교.c
//  pointer
//
//  Created by D.Ruin on 04/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void func(){
    int an = 0;
    static int sn = 0;
    printf("%d %d\n", an++, sn++);
}

void main(){
    func();
    func();
    func();
}

// 정적 변수는 데이터 영역이란 곳에 만들어지며 프로그램 시작시 만들어지고 프로그램 종료시 삭제됨.
// an 변수는 func() 함수 시작과 종료시 생성과 소멸이 3번 반복
// sn 변수는 한 번 생성되어 프로그램 종료 시까지 존재

// p.271부터
