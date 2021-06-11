//
// Created by user on 2021-06-11.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "process2.h"
#include "result.h"

/*메뉴에서 기록검색시 호출되어 기러고을 검색하는 함수*/
int search_result(void)
{
    FILE *fp = NULL;
    char name[30];
    char ch;
    int find = 0;

    fp = fopen("result", "rb");

    if(fp == NULL)
        return 0;

    system("clear");

    printf("\n\n\t\t검색할 이름을 입력하세요.  : ");
    scanf("%s%*c", name);

    printf("\n\t\t\t\tText Tetris");
    printf("\n\t\t\t\t 게임 기록\n\n");
    printf("\n\t\t이름\t\t점수\t   날짜\t\t 시간");

    while(1)
    {
        fread(&result, sizeof(result), 1, fp);
        if(!feof(fp))
        {
            if(!strcmp(result.name, name))
            {
                find = 1;
                printf("\n\t========================================================");
                printf("\n\t\t%s\n\t\t\t\t%ld\t%d. %d. %d.  |  %d : %d\n", result.name, result.point, result.year, result.month, result.day, result.hour, result.min);
            }
        }
        else
        {
            break;
        }
    }

    if(find == 0)
        printf("\n\n\n\t\t검색된 이름이 없습니다.");

    printf("\n\n\n\t\t게임 메뉴로 돌아가기 : M");
    while(1)
    {
        ch = getch();
        if(ch == 77 || ch == 109)
            break;
    }

    return 0;
}

/* 메뉴에서 기록출력시 호출되어 기록을 출력하는 함수*/
int print_result(void)
{
    FILE *fp = NULL;
    char ch = 1 ;

    fp = fopen("result", "rb");

    if(fp == NULL)
        return 0;

    system("clear");

    printf("\n\t\t\t\tText Tetris");
    printf("\n\t\t\t\t 게임 기록\n\n");
    printf("\n\t\t이름\t\t점수\t   날짜\t\t 시간");

    while(1)
    {
        fread(&result, sizeof(result), 1, fp);
        if(!feof(fp))
        {
            printf("\n\t========================================================");
            printf("\n\t\t%s\n\t\t\t\t%ld\t %d. %d. %d.  |  %d : %d\n", result.name, result.point, result.year, result.month, result.day, result.hour, result.min);
        }
        else
        {
            break;
        }
    }

    fclose(fp);

    printf("\n\n\t게임 메뉴로 돌아가기 : M");
    while(1)
    {
        ch = getch();
        if(ch == 77 || ch == 109)
            break;
    }
    return 0;

}