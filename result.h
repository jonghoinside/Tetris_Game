//
// Created by user on 2021-06-11.
//

#ifndef TETRIS_GAME_PROJECT_RESULT_H
#define TETRIS_GAME_PROJECT_RESULT_H

/* 게임 종료때 마다
 * 이름과 득점점수와
 * 날짜, 시간이저장되는 구조체
 * */
static struct {
    char name[30];
    long point;
    int year;
    int month;
    int day;
    int hour;
    int min;
    int rank;
} result;

// result
int print_result(void);/* 메뉴에서 기록출력시 호출되어 기록을 출력하는 함수*/
// result
int search_result(void); /*메뉴에서 기록검색시 호출되어 기러고을 검색하는 함수*/

#endif //TETRIS_GAME_PROJECT_RESULT_H
