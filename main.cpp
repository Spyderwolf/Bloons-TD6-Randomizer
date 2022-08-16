#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void init_rand()
{
    srand (time(NULL));
}

int map_sel;
void map_select(){
    map_sel = rand() % 61 + 1;
    
    switch (map_sel){
        case 1:
        std::cout << "Monkey Meadow (Beginner)";
        break;
        case 2:
        std::cout << "Tree Stump (Beginner)";
        break;
        case 3:
        std::cout << "Town Center (Beginner)";
        break;
        case 4:
        std::cout << "Scrapyard (Beginner)";
        break;
        case 5:
        std::cout << "The Cabin (Beginner)";
        break;
        case 6:
        std::cout << "Resort (Beginner)";
        break;
        case 7:
        std::cout << "Skates (Beginner)";
        break;
        case 8:
        std::cout << "Lotus Island (Beginner)";
        break;
        case 9:
        std::cout << "Candy Falls (Beginner)";
        break;
        case 10:
        std::cout << "Winter Park (Beginner)";
        break;
        case 11:
        std::cout << "Carved (Beginner)";
        break;
        case 12:
        std::cout << "Park Path (Beginner)";
        break;
        case 13:
        std::cout << "Alpine Run (Beginner)";
        break;
        case 14:
        std::cout << "Frozen Over (Beginner)";
        break;
        case 15:
        std::cout << "In The Loop (Beginner)";
        break;
        case 16:
        std::cout << "Cubism (Beginner)";
        break;
        case 17:
        std::cout << "Four_Circles (Beginner)";
        break;
        case 18:
        std::cout << "Hedge (Beginner)";
        break;
        case 19:
        std::cout << "End Of the Road (Beginner)";
        break;
        case 20:
        std::cout << "Logs (Beginner)";
        break;
        case 21:
        std::cout << "Quiet Street (Intermediate)";
        break;
        case 22:
        std::cout << "Bloonarius Prime (Intermediate)";
        break;
        case 23:
        std::cout << "Balance (Intermediate)";
        break;
        case 24:
        std::cout << "Encrypted (Intermediate)";
        break;
        case 25:
        std::cout << "Bazaar (Intermediate)";
        break;
        case 26:
        std::cout << "Adora's Temple (Intermediate)";
        break;
        case 27:
        std::cout << "Spring Spring (Intermediate)";
        break;
        case 28:
        std::cout << "KartsNDarts (Intermediate)";
        break;
        case 29:
        std::cout << "Moon Landing (Intermediate)";
        break;
        case 30:
        std::cout << "Haunted (Intermediate)";
        break;
        case 31:
        std::cout << "Downstream (Intermediate)";
        break;
        case 32:
        std::cout << "Firing Range (Intermediate)";
        break;
        case 33:
        std::cout << "Cracked (Intermediate)";
        break;
        case 34:
        std::cout << "Streambed (Intermediate)";
        break;
        case 35:
        std::cout << "Chutes (Intermediate)";
        break;
        case 36:
        std::cout << "Rake (Intermediate)";
        break;
        case 37:
        std::cout << "Spice Islands (Intermediate)";
        break;
        case 38:
        std::cout << "Sunken Columns (Advanced)";
        break;
        case 39:
        std::cout << "X Factor (Advanced)";
        break;
        case 40:
        std::cout << "Mesa (Advanced)";
        break;
        case 41:
        std::cout << "Geared (Advanced)";
        break;
        case 42:
        std::cout << "Spillway (Advanced)";
        break;
        case 43:
        std::cout << "Cargo (Advanced)";
        break;
        case 45:
        std::cout << "Pat's Pond (Advanced)";
        break;
        case 46:
        std::cout << "Peninsula (Advanced)";
        break;
        case 47:
        std::cout << "High Finance (Advanced)";
        break;
        case 48:
        std::cout << "Another Brick (Advanced)";
        break;
        case 49:
        std::cout << "Off the Coast (Advanced)";
        break;
        case 50:
        std::cout << "Underground (Advanced)";
        break;
        case 51:
        std::cout << "Sanctuary (Expert)";
        break;
        case 52:
        std::cout << "Ravine (Expert)";
        break;
        case 53:
        std::cout << "Flooded Valley (Expert)";
        break;
        case 54:
        std::cout << "Infernal (Expert)";
        break;
        case 55:
        std::cout << "Bloody Puddles (Expert)";
        break;
        case 56:
        std::cout << "Workshop (Expert)";
        break;
        case 57:
        std::cout << "Quad (Expert)";
        break;
        case 58:
        std::cout << "Dark Castle (Expert)";
        break;
        case 59:
        std::cout << "Muddy Puddles (Expert)";
        break;
        case 60:
        std::cout << "#Ouch (Expert)";
        break;

        //NEW MAPS
        case 61:
        std::cout << "Quarry (Intermediate)";
        break;
    }
}

int diff_sel;
void difficulty_select(){
    diff_sel = rand() % 3 + 1;

    switch(diff_sel){
        case 1:
        std::cout << "Easy";
        break;
        case 2:
        std::cout << "Medium";
        break;
        case 3:
        std::cout << "Hard";
        break;
    }
}

int sub_diff_sel;
void sub_difficulty_select()
{
    sub_diff_sel = rand() % 14 + 1;

    switch(sub_diff_sel){
        case 1:
        std::cout << "Easy: Standard";
        break;
        case 2:
        std::cout << "Easy: Primary Only";
        break;
        case 3:
        std::cout << "Easy: Deflation";
        break;
        case 4:
        std::cout << "Medium: Standard";
        break;
        case 5:
        std::cout << "Medium: Military Only";
        break;
        case 6:
        std::cout << "Medium: Apopalypse";
        break;
        case 7:
        std::cout << "Medium: Reverse";
        break;
        case 8:
        std::cout << "Hard: Standard";
        break;
        case 9:
        std::cout << "Hard: Magic Only";
        break;
        case 10:
        std::cout << "Hard: Double HP MOABS";
        break;
        case 11:
        std::cout << "Hard: Half Cash";
        break;
        case 12:
        std::cout << "Hard: Alternate Bloon Rounds";
        break;
        case 13:
        std::cout << "Hard: Impoppable";
        break;
        case 14:
        std::cout << "Hard: CHIMPS";
        break;
    }

}

int hero_sel;
void hero_select(){
    hero_sel = rand() % 14 + 1;

    switch (hero_sel){
        case 1:
        std::cout << "Quincy";
        break;
        case 2:
        std::cout << "Gwendolin";
        break;
        case 3:
        std::cout << "Striker Jones";
        break;
        case 4:
        std::cout << "Obyn Greenfoot";
        break;
        case 5:
        std::cout << "Captain Churchill";
        break;
        case 6:
        std::cout << "Benjamin";
        break;
        case 7:
        std::cout << "Ezili";
        break;
        case 8:
        std::cout << "Pat Fusty";
        break;
        case 9:
        std::cout << "Adora";
        break;
        case 10:
        std::cout << "Admiral Brickwell";
        break;
        case 11:
        std::cout << "Etienne";
        break;
        case 12:
        std::cout << "Sauda";
        break;
        case 13:
        std::cout << "Psi";
        break;
        case 14:
        std::cout << "Geraldo";
        break;
    }
}

char towerlim_setting = 'n';
int tower_max;
void tower_limit_setup(){
    if (towerlim_setting = 'y')
    {
        char tower_input;

        std::cout << "Tower Limit can be set to Low(11)/Medium(33)/High(66) (l/m/h): ";
        std::cin >> tower_input;

        if (tower_input == 'l')
        {
            tower_max = 11;
        }
        if (tower_input == 'm')
        {
            tower_max = 33;
        }
        if (tower_input == 'h')
        {
            tower_max = 66;
        }
    }
}

int tower_limit_sel;
void tower_limit_select(){
     //tower_limit_sel = rand() % 66 + 1;
     tower_limit_sel = rand() % tower_max + 1;
     std::cout << "Tower Limit: " << tower_limit_sel;
}

int n = 100;
void clear(){
    while (n > 0)
    {
        std::cout << std::endl;
        n --;
    }
    n = 100;
}

char run = 'y';
char subdiff_setting = 'n';

int main()
{
    std::cout << "Version 1.2.0" << std::endl;
    std::cout << "Enable Sub-Difficulty Selection? (y/n)? ";
    std::cin >> subdiff_setting;
    std::cout << "Enable Tower Limit Setting (WIP)? (y/n)? ";
    std::cin >> towerlim_setting;
    tower_limit_setup();

    while (run == 'y')
    {
        usleep(750000);
        clear();
        init_rand();

        map_select();
        std::cout << std::endl;

        if (subdiff_setting == 'y')
        {
            sub_difficulty_select();
            std::cout << std::endl;
        }
        else
        {
            difficulty_select();
            std::cout << std::endl;
        }

        hero_select();
        std::cout << std::endl;

        if (towerlim_setting == 'y')
        {
            tower_limit_select();
        }
        std::cout << std::endl;

        std::cout << std::endl;
        std::cout << "Reroll (y/n)? ";
        std::cin >> run;
        if (run != 'y')
        {
            break;
        }
    }
    return 0;
}