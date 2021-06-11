//
// Created by user on 2021-06-11.
//

#ifndef TETRIS_GAME_PROJECT_PROCESS2_H
#define TETRIS_GAME_PROJECT_PROCESS2_H

// initialize
int display_menu(void); /* 메뉴를 보여줌 */
// initialize
int init_tetris_table(void); /*테트리스판을 초기화 한다. 벽과 공간을 나눔*/
// initialize
int game_start(void); /* 게임 시작시 호출되는 함수.   game변수를 참조하여 게임을 종료하거나 시작함 . 게임 시작시 refresh()함수가 콜백함수로 설정되고 타이머를 등록함. */
// process
int refresh(int);/* 타이머에 콜백함수로 등록되어 계속 새로고침 하면서 호출되는 함수. 키입력 확인,  화면새로고침, 한줄완성검사등의 계속 상태가 변함을 확인해야 되는 함수를 호출한다 */
// process
int move_block(int);/*이동, 회전키가 입력되면, 충돌검사후 이동시킨다*/
// process
int drop(void);/* 충돌되기 전까지 블록을 다운시킨다.*/
// process
int collision_test(int); /* 블록이 이동, 회전하기 전에 충돌되는 블록이나 벽이 없는지 확인하는 함수*/
// process
int check_one_line(void);/* 한줄이 완성되었는지 확인하는 함수. 완성되면 한줄을 지우고, 점수에 1000점을 더한다*/
// process
int getch(void);/*문자를 바로 입력 받을 수 있는 함수*/
// process
int display_tetris_table(void); /* 현재의 테트리스판을 보여준다. 블록이 놓이고 쌓인 현재 상태를 보여줌*/

extern int game;

#endif //TETRIS_GAME_PROJECT_PROCESS2_H
