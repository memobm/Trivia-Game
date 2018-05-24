//
//  main.c
//  Trivia game
//
//  Created by Guillermo Barragan on 5/22/18.
//  Copyright © 2018 Guillermo Barragan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void playgame(void);

int main(void) {

    int choice;
    int repeat = true;
    
    printf("-----------------------------------------------------------\n");
    printf("-----------------------------------------------------------\n");
    printf("\t\t\t\tHello, World!\n");
    printf("\tA fun trivia game!\n\n");
    printf("\tCan you get them all right?\n");
    printf("\tPress ENTER to continue...\n");
    printf("-----------------------------------------------------------\n");
    printf("-----------------------------------------------------------\n\n");
    getchar();
    
    while ((repeat = true)) {
        printf("-----------------------------------------------------------\n");
        printf("-----------------------------------------------------------\n");
        printf("\t\t\t\tMENU\n");
        printf("\t\tPress 1 to play Game\n");
        printf("\t\tPress 2 to quit\n\n");
        printf("\t\tWhat do you want to do?: ");
        scanf("%d", &choice);
        printf("-----------------------------------------------------------\n");
        printf("-----------------------------------------------------------\n");
        
        switch (choice) {
            case 1:
            playgame();
            break;
            
            case 2:
                printf("Thanks for playing\n");
                exit(0);
            
        default:
            printf("This is not a valid option\n");
            break;
        }
    }
    
    return 0;

}

void playgame() {
    
    int score = 0;
    int answer;
    
    printf("-----------------------------------------------------------\n");
    printf("-----------------------------------------------------------\n");
    printf("\t\tThe rules are simple\n");
    printf("\t\tGet a question right, get 100 pts\n");
    printf("\t\tGet a question wrong, lose 100 pts\n");
    printf("\t\tGood luck!\n");
    printf("-----------------------------------------------------------\n");
    printf("-----------------------------------------------------------\n");
    
    
    printf("\n1. In the children's book series, where is Paddington Bear originally from?");
    printf("\n[1]India\t[2]Peru\n[3]Canada\t[4]Iceland\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 2) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("2. What letter must appear at the beginning of the registration number of all non-military aircraft in the U.S.?");
    printf("\n[1]A\t[2]U\n[3]L\t[4]N\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
        
    if(answer == 4) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("3. Which insect shorted out an early supercomputer and inspired the term 'computer bug'?");
    printf("\n[1]Moth\t\t[2]Fly\n[3]Roach\t[4]Japanesse Beetle\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 1) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("4. Which of the following men does not have a chemical element named for him?");
    printf("\n[1]Albert Einstein\t[2]Isaac Newton\n[3]Niels Bohr\t\t[4]Enrico Fermi\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 2) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("5. Who painted the Mona Lisa?");
    printf("\n[1]Leonardo Da Vinci\t[2]Vincent van Gogh\n[3]Michealangleo\t\t[4]Picaso\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 1) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("6. What did the 7 dwarves do for a living?");
    printf("\n[1]Construction workers\t[2]Fishers\n[3]Miners\t\t\t\t[4]None\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 3) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("7. Who sang 'My Way'?");
    printf("\n[1]Louis Armstrong\t[2]Frank Sinatra\n[3]Gordon Jenkins\t[4]Cylo Green\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 1) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("8. Which is the largest ocean?");
    printf("\n[1]Atlantic\t[2]Pacific\n[3]Indian\t[4]Artic\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 2) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("9. Where is the smallest bone in the body?");
    printf("\n[1]Feet\t\t[2]Nose\n[3]Finger\t[4]Ear\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 4) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("10. What is the first letter on a typewriter?");
    printf("\n[1]Q\t[2]A\n[3]W\t[4]Z\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 1) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("11. Who starred as Superman in the late 70's/early 80's films?");
    printf("\n[1]Walt Simonson\t\t[2]Sean Penn\n[3]Christopher Reeve\t[4]Sean Connery\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
        
    if(answer == 3) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("12. Who created and wrote the James Bond novels?");
    printf("\n[1]Sean Connery\t[2]Rudyard Keplin\n[3]Ian Flemming\t[4]Stephen King\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 3) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("13. What country gave Florida to the USA in 1891?");
    printf("\n[1]Portugal\t[2]Spain\n[3]France\t[4]Britain\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
        
    if(answer == 2) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("14. How long is a round in boxing?");
    printf("\n[1]5\t[2]2\n[3]3\t[4]4\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
        
    if(answer == 3) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("15. What horoscope sign has a crab?");
    printf("\n[1]Gemini\t[2]Cancer\n[3]Taurus\t[4]Libra\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 2) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }

    printf("16. When was President Kennedy killed?");
    printf("\n[1]1959\t[2]1969\n[3]1971\t[4]1963\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 4) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("17. One human hair can support how many kilograms?");
    printf("\n[1]1\t[2]2\n[3]3\t[4]4\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 3) {
    printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("18. What color was Coca-Cola originally?");
    printf("\n[1]Red\t\t[2]Purlpe\n[3]Beige\t[4]Green\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 4) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("19. Which Apollo mission landed the first humans on the Moon?");
    printf("\n[1]Apollo 7\t\t[2]Apollo 9\n[3]Apollo 11\t[4]Apollo 13\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
    
    if(answer == 3) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
        
    printf("20. What is the capital of Portugal?");
    printf("\n[1]Madrid\t[2]Lisboa\n[3]Lisbon\t[4]Braga\n\n");
    printf("Enter asnwer: ");
    scanf("%d", &answer);
        
    if(answer == 3) {
        printf("That is correct!\n");
        score += 100;
        printf("Your score is: %d\n\n", score);
    } else {
        printf("Wrong answer\n");
        score -= 100;
        printf("Your score is: %d\n\n", score);
    }
    
    printf("Final Score: %d\n", score);
}
