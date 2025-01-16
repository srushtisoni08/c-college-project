#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "hangman";
    char guessed[8] = "_______";
    int attempts = 7;
    int i, found, win, choice;

    printf("Welcome to Hangman!\n");
    printf("which level you want to play:\n1.easy \t 2.medium \t 3.hard \n");
    scanf("%d",&choice);
    
    
    	if(choice==1)
    	{
		printf("word is about size \n");

		do
		{
		char word[] = "maximum";
        printf("Word: %s\n", guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Enter a letter: ");
        
        char guess;
        scanf(" %c", &guess);
        
        found = 0;
        win = 1;

        for (i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                if (guessed[i] == '_') {
                    guessed[i] = guess;
                    found = 1;
                }
            }
            if (guessed[i] == '_') {
                win = 0;
            }
        }

        if (!found) {
            attempts--;
        }

        if (win) {
            printf("Congratulations! You've guessed the word: %s\n", guessed);
            break;
        }

        if (attempts == 0) {
            printf("You lost! The word was: %s\n", word);
            break;
        }
    
    } while (1);
}
	else if(choice==3)
    {
   	printf("word is about relation \n");

    do {
    	char word[] = "brother";
//    	printf("word is about relation \n");
        printf("Word: %s\n", guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Enter a letter: ");
        
        char guess;
        scanf(" %c", &guess);
        
        found = 0;
        win = 1;

        for (i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                if (guessed[i] == '_') {
                    guessed[i] = guess;
                    found = 1;
                }
            }
            if (guessed[i] == '_') {
                win = 0;
            }
        }

        if (!found) {
            attempts--;
        }

        if (win) {
            printf("Congratulations! You've guessed the word: %s\n", guessed);
            break;
        }

        if (attempts == 0) {
            printf("You lost! The word was: %s\n", word);
            break;
        }

    } while (1);
}
    else if(choice==2)
    {
			printf("It is an element \n");
	do {
    	char word[] = "bromine";
   // 	printf("It is an element \n");
        printf("Word: %s\n", guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Enter a letter: ");
        
        char guess;
        scanf(" %c", &guess);
        
        found = 0;
        win = 1;

        for (i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                if (guessed[i] == '_') {
                    guessed[i] = guess;
                    found = 1;
                }
            }
            if (guessed[i] == '_') {
                win = 0;
            }
        }

        if (!found) {
            attempts--;
        }

        if (win) {
            printf("Congratulations! You've guessed the word: %s\n", guessed);
            break;
        }

        if (attempts == 0) {
            printf("You lost! The word was: %s\n", word);
            break;
        }

    } while (1);
}
    else
    {
    	printf("Not valid! \n");
    	
	}

    return 0;
}
