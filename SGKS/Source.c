#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

    char rerollOrProceed;
    do {

        // Since the character is based on a human, every stat gets a +1. If I want to update the code to add races, I'll have some ints to spare
        short int racialStr = 1, racialDex = 1, racialCon = 1;
        short int profBonus = 2;

        // Initialization of all base 3 stats
        srand (time(NULL) * getpid());
        short int str = (rand() % 20) + racialStr + 1;
        short int strmod = floor((str - 10) / 2);
        printf("STR: %d (%d)\n", str, strmod);
        sleep(1);

        srand (time(NULL) * getpid());
        short int dex = (rand() % 20) + racialDex + 1;
        short int dexmod = floor((dex - 10) / 2);
        printf("DEX: %d (%d)\n",dex, dexmod);
        sleep(1);

        srand (time(NULL) * getpid());
        int con = (rand() % 20) + racialCon + 1;
        int conmod = floor((con - 10) / 2);
        printf("CON: %d (%d)\n\n", con, conmod);
        sleep(1);

        short int hp = 10 + conmod;
        printf("HP: %d\n", hp);
        short int ac = 12 + dexmod;
        printf("AC: %d \n\n", ac);

        printf("Do you like this character? Type 'R' to Reroll, or any other key to proceed.");  
        scanf("%", &rerollOrProceed);
    } while (rerollOrProceed == 'R' || rerollOrProceed == 'r'); 

    return 0;
}
