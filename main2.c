//
// Created by an on 21. 6. 11..
//

#include <stdlib.h>
#include "define.h"
#include "process.h"
#include "result.h"

int main(void)
{
    int menu = 1;

    while(menu)
    {
        menu = display_menu();

        if(menu == 1)
        {
            game = GAME_START;
            menu = game_start();
        }
        else if(menu == 2)
        {
            search_result();
        }
        else if(menu == 3)
        {
            print_result();
        }
        else if(menu == 4)
        {
            exit(0);
        }
    }

    return 0;
}