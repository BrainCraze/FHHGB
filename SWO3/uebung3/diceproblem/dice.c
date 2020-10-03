#include "dice.h" //immer als erstes headerfile von eigenen interfaces 
#include <stdio.h>

#define N_FACES 6

static int nested_checks = 0;

int n_rolls_nested(int target_number){
    int count = 0;
    for (int i1 = 1; i1 <= N_FACES; i1++)
    {
        for (int i2 = 1; i2 <= N_FACES; i2++)
        {
            for (int i3 = 1; i3 <= N_FACES; i3++)
            {
                nested_checks++;
                if (i1+i2+i3 == target_number)
                {
                    count++;
                }
                
            }
            
        }
        
    }
    
}

void print_statistics(void){
    printf("%d checks in nested loops\n", nested_checks);
}