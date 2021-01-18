#include<stdio.h>
#include<time.h>

int main() {
	
	srand(time(0));
	
	char arr[3][7] = {"Rock","Paper","Scissor"};
	char gamemode_choice;
	
	int gamemode = 1;
	int control1 = 1;
	int control2 = 1;
	int player_choice, ai_choice;
	int player_point, ai_point;
	
	player_point = 0;
	ai_point = 0;
	
	while(gamemode) {
		
		printf("To choose 'Rock' press 0.\nTo choose 'Paper' press 1.\nTo choose 'Scissor' press 2.\n\nChoose: ");
		scanf("%d",&player_choice);
		
		//To check if player entered an invalid character.
		while(control2) {
			
			if(player_choice >= 0 && player_choice <= 2) {
				
				break;
			}
			else
				printf("You have entered an invalid character. Please enter number between (0-2): ");
				scanf("%d",&player_choice);
		}
	
		ai_choice = rand() % 3;
		
		printf("Your choice is = %s\nAI's choice is = %s\n\n",arr[player_choice],arr[ai_choice]);
		
		//Checking the possible situations.
		if(player_choice == 0 && ai_choice == 1) {
			
			printf("AI has won this round.\n\n");
			ai_point++;
		}
		else if(player_choice == 0 && ai_choice == 2) {
			
			printf("You have won this round.\n\n");
			player_point++;
		}
		else if(player_choice == 1 && ai_choice == 0) {
			
			printf("You have won this round.\n\n");
			player_point++;
		}
		else if(player_choice == 1 && ai_choice == 2) {
			
			printf("AI has won this round.\n\n");
			ai_point++;
		}
		else if(player_choice == 2 && ai_choice == 0) {
			
			printf("AI has won this round.\n\n");
			ai_point++;
		}
		else if(player_choice == 2 && ai_choice == 1) {
			
			printf("You have won this round.\n\n");
			player_point++;
		}
		else {
			
			printf("Draw! There is not a winner in this round.\n\n");
		}
		
		printf("Do you want to keep playing this game ? (Y/N): ");
		scanf("\n");
		scanf("%c",&gamemode_choice);
		
		start:
		if(gamemode_choice == 'Y' || gamemode_choice == 'y')
		
			printf("Well! You have decided to keep playing this game. Good luck.\n\n");
			
		else if(gamemode_choice == 'N' || gamemode_choice == 'n') {
			
			printf("It was a nice game! We'll see you later.\n\nYour score is = %d\nAI's score is = %d\n\n",player_point,ai_point);
			
			if(player_point < ai_point) 
				printf("**********Unfortunately you lost the game.**********\n\n");
				
			else if(player_point == ai_point)
				printf("**********No one won the game**********\n\n");
				
			else
				printf("**********Congratulations! You won the game.**********");
				
			gamemode = 0; //To break the while loop (End the game)
		}
		
		else {
			
			while(control1) {
				
				if(gamemode_choice == 'Y' || gamemode_choice == 'N') {
					
					goto start; //To check if player is going to keep playing the game. (Go to 79. line.)
					control1 = 0;
				}
					
				else if(gamemode_choice == 'y' || gamemode_choice == 'n') {
					
					goto start; //To check if player is going to keep playing the game. (Go to 79. line.)
					control1 = 0;
				}
				
				else {
					
					printf("You have entered an invalid character. Please press 'Y/y' or 'N/n' : ");
					scanf("\n");
					scanf("%c",&gamemode_choice);
				}
			}
		}
		
	}
	
    return 0;
}
