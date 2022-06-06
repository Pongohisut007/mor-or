#include <stdio.h>
#include "windows.h"
#include "conio.h"
#include "time.h"
main(){
//choose person
	printf("\t\t\t            who are your ?? \n");
	printf("\t\t___________________________________________________________\n");
	printf("\t\t|          |           |           |           |           |\n");
	printf("\t\t|          |           |           |           |           |\n");
	printf("\t\t|    a     |     b     |     c     |     d     |     e     |\n");
	printf("\t\t|          |           |           |           |           |\n");
	printf("\t\t|          |           |           |           |           |\n");
	printf("\t\t|__________|___________|___________|___________|___________|\n\n");
	int choose;
	printf("\t\tChoose person : ");
	scanf("%s",&choose);
	system("cls");
	
	int password[9];
int i,j,temp;

srand(time(NULL));
for(int i=0; i<10; i++)
	password[i] = i ;
	
	
	
for(int i=0; i<9; i++){
	j = (rand()%10);
	temp = password[i];
	password[i] = password[j]; 	
	password[j] = temp;
	
}
//password
	printf("\t\t____________________________________\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|     %d    |     %d     |     %d     |\n",password[0],password[1],password[2]);
	printf("\t\t|          |           |           |\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|__________|___________|___________|\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|     %d    |     %d     |     %d     |\n",password[3],password[4],password[5]);
	printf("\t\t|          |           |           |\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|__________|___________|___________|\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|     %d    |     %d     |     %d     |\n",password[7],password[8],password[9]);
	printf("\t\t|          |           |           |\n");
	printf("\t\t|          |           |           |\n");
	printf("\t\t|__________|___________|___________|\n");
	printf("\t\tInput your password : ");
	int Key;
	scanf("%d",&Key);
	
	if(Key == 1234){
//welcome		
	system("cls");
	printf("\t            welcome\n");
	Sleep(1000);
	system("cls");	
		
//what i do	<==  choose
 	//choose a || A
	if(choose == 'a' || 'A'){
	system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|      deposit[1]        |    withdraw money[2]   |     check money[3]     |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|________________________|________________________|________________________|\n\n");
		int chooseA;
		printf("\tWhat do your want : ");
		scanf("%d",&chooseA);
		int x,sum=2000;
		if(chooseA == 1){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                             making a deposit[1]                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to deposit? : ");
			scanf("%d",&x);
			sum += x;
			printf("\taccount money : %d",sum);
		}
		else if(chooseA == 2){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         making a withdraw money[2]                      |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to withdraw money? : ");
			scanf("%d",&x);
			sum -= x;
			if(x > sum){
				printf("\tNot enough money");
			}
			else{
				printf("\taccount money : %d",sum);
			}
			
		}
		else if(chooseA == 3){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         account money : %d                            |\n",sum);
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");	
		
		}
		else{
			printf("Try again");
		}
		
	}
	
	
	//choose b || B
	else if(choose == 'b' || 'B'){
	system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|      deposit[1]        |    withdraw money[2]   |     check money[3]     |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|________________________|________________________|________________________|\n\n");
	int chooseB;
		printf("\tWhat do your want : ");
		scanf("%d",&chooseB);
		int x,sum=2000;
		if(chooseB == 1){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                             making a deposit[1]                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to deposit? : ");
			scanf("%d",&x);
			sum += x;
			printf("\taccount money : %d",sum);
		}
		else if(chooseB == 2){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         making a withdraw money[2]                      |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to withdraw money? : ");
			scanf("%d",&x);
			sum -= x;
			if(x > sum){
				printf("\tNot enough money");
			}
			else{
				printf("\taccount money : %d",sum);
			}
			
		}
		else if(chooseB == 3){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         account money : %d                            |\n",sum);
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");	
		
		}
		else{
			printf("Try again");
		}
	}
	
	//choose c || C
	else if(choose == 'c' || 'C'){
	system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|      deposit[1]        |    withdraw money[2]   |     check money[3]     |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|________________________|________________________|________________________|\n\n");
	int chooseC;
		printf("\tWhat do your want : ");
		scanf("%d",&chooseC);
		int x,sum=2000;
		if(chooseC == 1){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                             making a deposit[1]                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to deposit? : ");
			scanf("%d",&x);
			sum += x;
			printf("\taccount money : %d",sum);
		}
		else if(chooseC == 2){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         making a withdraw money[2]                      |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to withdraw money? : ");
			scanf("%d",&x);
			sum -= x;
			if(x > sum){
				printf("\tNot enough money");
			}
			else{
				printf("\taccount money : %d",sum);
			}
			
		}
		else if(chooseC == 3){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         account money : %d                            |\n",sum);
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");	
		
		}
		else{
			printf("Try again");
		}
	}
	
	//choose d || D
	else if(choose == 'd' || 'D'){
	system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|      deposit[1]        |    withdraw money[2]   |     check money[3]     |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|________________________|________________________|________________________|\n\n");
		int chooseD;
		printf("\tWhat do your want : ");
		scanf("%d",&chooseD);
		int x,sum=2000;
		if(chooseD == 1){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                             making a deposit[1]                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to deposit? : ");
			scanf("%d",&x);
			sum += x;
			printf("\taccount money : %d",sum);
		}
		else if(chooseD == 2){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         making a withdraw money[2]                      |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to withdraw money? : ");
			scanf("%d",&x);
			sum -= x;
			if(x > sum){
				printf("\tNot enough money");
			}
			else{
				printf("\taccount money : %d",sum);
			}
			
		}
		else if(chooseD == 3){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         account money : %d                            |\n",sum);
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");	
		
		}
		else{
			printf("Try again");
		}
	}
	
	//choose e || E
	else if(choose == 'e' || 'E'){
	system("cls");
	printf("\t____________________________________________________________________________\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|                        |                        |                        |\n");
	printf("\t|      deposit[1]        |    withdraw money[2]   |     check money[3]     |\n");;
	printf("\t|                        |                        |                        |\n");
	printf("\t|________________________|________________________|________________________|\n\n");
		int chooseE;
		printf("\tWhat do your want : ");
		scanf("%d",&chooseE);
		int x,sum=2000;
		if(chooseE == 1){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                             making a deposit[1]                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to deposit? : ");
			scanf("%d",&x);
			sum += x;
			printf("\taccount money : %d",sum);
		}
		else if(chooseE == 2){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         making a withdraw money[2]                      |\n");
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");
			printf("\tHow much do you want to withdraw money? : ");
			scanf("%d",&x);
			sum -= x;
			if(x > sum){
				printf("\tNot enough money");
			}
			else{
				printf("\taccount money : %d",sum);
			}
			
		}
		else if(chooseE == 3){
			system("cls");
	printf("\t___________________________________________________________________________\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                         account money : %d                            |\n",sum);
	printf("\t|                                                                         |\n");
	printf("\t|_________________________________________________________________________|\n\n");	
		
		}
		else{
			printf("Try again");
		}	
	}
		
	}
	else{
		printf("Fail password");
	}
	
	
}
