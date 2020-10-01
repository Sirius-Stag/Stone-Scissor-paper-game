#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int WithComputer(int n);
int WithPartner(int n);

int main () {
   int i, n1,n,z=1, z2=1;
   time_t t;
   
   srand((unsigned) time(&t));
   n1 =rand() % 3;
   
   
   
   printf("\t\tWELCOME TO THE GAME OF STONE PAPER SCISSOR !!!\n\n");
   printf("********************************************************************************************************************************************\n\n");
   
   printf("The game is available in two forms - Game with Computer & Two Player Game\n");
   
   printf("To Play with computer, Press 1 \n To Play with a partner, Press 2\n");
   scanf("%d", &n);
   if(n==1){
   	while(z!=0){
	    z = WithComputer(n1);
	    
   	 }
   	 printf("THE END!!");
   	
   }
   else if(n==2){
   	while(z2!=0){
	    z2 = WithPartner(n1);
	    
   	 }
   	 printf("THE END!!");
   	
   }
   
   else{
   	printf("Wrong Input !! Please run again to start a new game !!");
   }
   
   
   
   
   return 0;
}

int WithComputer(int n){
	int m,z;
	int e;
	printf("so you want to play with Computer!!\n");
	
	printf("Let's start!!\n Enter 1 for Scissor\n Enter 2 for Stone \n Enter 3 for paper\n");
	scanf("%d", &m);
	if(n==0){
		if(m==1){
			printf("COMPUTER- Scissor | PLAYER -scissor\n" );
			printf("Game Draw!!\n");
		}
		else if(m==2){
			printf("COMPUTER- Scissor | PLAYER -stone\n" );
			printf("Player Wins!!\n");
		}
		else if(m==3){
			printf("COMPUTER- Scissor | PLAYER -Paper\n" );
			printf("Computer Wins!!\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!");
		}
	}
	else if(n==1){
		if(m==1){
			printf("COMPUTER- Stone | PLAYER -scissor\n" );
			printf("Computer Wins!!\n");
		}
		else if(m==2){
			printf("COMPUTER- Stone | PLAYER -stone\n" );
			printf("Game Draw!!\n");
		}
		else if(m==3){
			printf("COMPUTER- Stone | PLAYER -Paper\n" );
			printf("Player Wins!!\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!");
		}
	}
	else{
			if(m==1){
			printf("COMPUTER- Paper | PLAYER -scissor\n" );
			printf("Palyer Wins!!\n");
		}
		else if(m==2){
			printf("COMPUTER- Paper | PLAYER -stone\n" );
			printf("Computer Wins!!\n");
		}
		else if(m==3){
			printf("COMPUTER- Paper | PLAYER -Paper\n" );
			printf("Game Draw!!\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!");
		}
	}
	
	printf("press 1 to exit else press any key to continue!!\n");
	scanf("%d",&e);

	if(e==1){
		 z=0;
	}
	else {
	   z=1;
	}
	return z;
}



int WithPartner(int n){
	int m,b,z2;
	int e;
	printf("so you want to play a Two Player Game!!\n");
	
	printf("Let's start!!\n Enter 1 for Scissor\n Enter 2 for Stone \n Enter 3 for paper\n");
	printf("Player1 Enter -\n");
	scanf("%d", &b);
	printf("Player2 Enter -\n");
	scanf("%d", &m);
	if(b==0){
		if(m==1){
			printf("PLAYER1- Scissor | PLAYER2 -scissor\n" );
			printf("Game Draw!!\n");
		}
		else if(m==2){
			printf("PLAYER1- Scissor | PLAYER2 -stone\n" );
			printf("Player2 Wins!!\n");
		}
		else if(m==3){
			printf("PLAYER1- Scissor | PLAYER2 -Paper\n" );
			printf("PLAYER1 Wins!!\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!");
		}
	}
	else if(b==1){
		if(m==1){
			printf("PLAYER1- Stone | PLAYER2 -scissor\n" );
			printf("PLAYER1 Wins!!\n");
		}
		else if(m==2){
			printf("PLAYER1- Stone | PLAYER2 -stone\n" );
			printf("Game Draw!!\n");
		}
		else if(m==3){
			printf("PLAYER1- Stone | PLAYER2 -Paper\n" );
			printf("Player2 Wins!!\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!");
		}
	}
	else{
			if(m==1){
			printf("PLAYER1- Paper | PLAYER2 -scissor\n" );
			printf("Palyer2 Wins!!\n");
		}
		else if(m==2){
			printf("PLAYER1- Paper | PLAYER2 -stone\n" );
			printf("PLAYER1 Wins!!\n");
		}
		else if(m==3){
			printf("PLAYER1- Paper | PLAYER2 -Paper\n" );
			printf("Game Draw!!\n");
		}
		else{
			printf("Wrong Input By player !!\n Computer wins !!");
		}
	}
	
	printf("press 1 to exit else press 0 to continue!!\n");
	scanf("%d",&e);

	if(e==1){
		 z2=0;
	}
	else {
	   z2=1;
	}
	return z2;
}