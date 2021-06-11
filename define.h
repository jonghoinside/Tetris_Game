//
// Created by user on 2021-06-11.
//

#ifndef TETRIS_GAME_PROJECT_DEFINE_H
#define TETRIS_GAME_PROJECT_DEFINE_H

/* 타이머  */
#define CCHAR 0
#ifdef CTIME
#undef CTIME
#endif
#define CTIME 1

/* 방향키, 회전키 설정*/
#define LEFT 0
#define RIGHT 1
#define DOWN 2
#define ROTATE 3

/* 테트로 미노 블록넘버 설정*/
#define I_BLOCK 0
#define	T_BLOCK 1
#define S_BLOCK 2
#define Z_BLOCK 3
#define L_BLOCK 4
#define J_BLOCK 5
#define O_BLOCK 6

/* 게임 시작, 종료 설정*/
#define GAME_START 0
#define GAME_END 1

#endif //TETRIS_GAME_PROJECT_DEFINE_H
