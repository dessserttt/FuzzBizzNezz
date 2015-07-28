//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2015-02-02.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#include <stdio.h>

//three integer inputs: "Fuzz", "Bizz", and "Nezz".

//Print numbers from 1 to the user's input for "Nezz". For the multiples of "Fuzz", print "Fuzz" instead of the number and for the multiples of "Bizz", print "Bizz" instead of the number. For numbers which are multiples of both "Fuzz" and "Bizz" print "FuzzBizz"

int main(int argc, const char * argv[]) {
    
    int Nezz;
    int Fuzz;
    int Bizz;
    
    printf("Enter a number between 1-100:\n");
    scanf("%d", &Nezz);
    
    printf("Enter a number which you wish to replace multiples of it with the word \"Fuzz\":\n");
    scanf("%d", &Fuzz);
    
    printf("Enter a number which you wish to replace multiples of it with the word \"Bizz\":\n");
    scanf("%d", &Bizz);
    
    
    for (int n = 1; n <= Nezz; n++) {
        
        if (n % (Fuzz * Bizz) == 0) {
            puts("FuzzBizz");
            continue;
        }
        
        else if (n % Fuzz == 0) {
            puts("Fuzz");
            continue;
        }
        
        else if (n % Bizz == 0) {
            puts("Bizz");
            continue;
        }
        
        else{
            printf("%d\n", n);
        }
            
    }
    
    
    return 0;
}
