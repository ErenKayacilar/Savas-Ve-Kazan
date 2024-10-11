#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>


int kontrol=0;
int kontrol1=0;
int kontrol2=0;
int kontrol3=0;
int kontrol4=0;
int kontrol5=0;
int can1 = 4;
int can2 = 4;
char name1 [20];
char name2 [20];

int karsilasma(int a,int b){
	int sonuc=0;
	if(a == b){
		sonuc = 1;
	}
	return sonuc;
}


void kullanici1(){
	int x,y;
	printf("\n\n \033[38;5;208m Saldiri seklini sec  : \033[0m \n");
    x = getch();

	printf("\t\t\t\t\t\t\t\t \033[38;5;208m Savunma seklini sec  : \033[0m ");
	y = getch();

    if(karsilasma(x,y) == 0){
    	can2--;
	}
}

void kullanici2(){
	int c,d;
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\t \033[38;5;208m Saldiri seklini sec  : \033[0m \n");
	c = getch();

	printf("\033[38;5;208m Savunma seklini sec  : \033[0m ");
	d = getch();	

	if(karsilasma(c,d) == 0){
		can1--;
	}
}


void duellociz(int who,int cn1,int cn2){
	system("cls");
	if(who == 0 && cn2 == 4){
		printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t                                        \n");
    	printf("\t\t  %s %d                                   \n",name1,cn1);
    	printf("\t\t              |    | _     %s %d              \n",name2,cn2);
    	printf("\t\t            O |    | O                   \n");
        printf("\t\t            |\\I    I/|                   \n");
     	printf("\t\t            |        |                   \n");
    	printf("\t\t            /\\       /\\                  \n");
    }

	else if(who == 1 && cn1 == 4){
		printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t                                        \n");
    	printf("\t\t   %s %d                                  \n",name1,cn1);
    	printf("\t\t              |    | _      %s %d           \n",name2,cn2);
    	printf("\t\t            O |    | O                   \n");
        printf("\t\t            |\\I    I/|                   \n");
     	printf("\t\t            |        |                   \n");
    	printf("\t\t            /\\       /\\                  \n");
    }

	else if(who == 0 && cn2 == 3){
		if(kontrol == 0){
			printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
        	printf("\n\n\n\n\n\n\n");
    	    printf("\t\t  \033[0;31m                              \n");
         	printf("\t\t   %s %d                    _            \n",name1,cn1);
    	    printf("\t\t                   O        O _   %s %d     \n",name2,cn2);
    	    printf("\t\t                   |\\-i---/\\I  _           \n");
         	printf("\t\t                   |     /  |               \n");
        	printf("\t\t                  / \\  / \\  |               \n");
        	kontrol = 1;
        }
        usleep(400000);
    	system("cls");
    	printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
    	printf("\033[0m");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t                                        \n");
    	printf("\t\t   %s %d                                  \n",name1,cn1);
    	printf("\t\t              |    | _      %s %d           \n",name2,cn2);
    	printf("\t\t            O |    | O                   \n");
        printf("\t\t            |\\I    I/|                   \n");
     	printf("\t\t            |        |                   \n");
    	printf("\t\t            /\\       /\\                  \n");
    }
	else if(who == 1 && cn1 == 3){
		if(kontrol1 == 0){
			printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
            printf("\n\n\n\n\n\n\n");
        	printf("\t\t    \033[0;31m                            \n");
        	printf("\t\t                                          \n");
        	printf("\t\t%s %d            _                     \n",name1,cn1);
        	printf("\t\t      _  O       O    %s %d              \n",name2,cn2);
            printf("\t\t     _  I/\\---i-/|                   \n");
        	printf("\t\t        |  \\     |                   \n");
        	printf("\t\t        |  / \\  / \\                  \n");
        	kontrol1 = 1;
        }
        usleep(400000);
    	system("cls");
    	printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
    	printf("\033[0m");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t                                        \n");
    	printf("\t\t   %s %d                                  \n",name1,cn1);
    	printf("\t\t              |    | _      %s %d           \n",name2,cn2);
    	printf("\t\t            O |    | O                   \n");
        printf("\t\t            |\\I    I/|                   \n");
     	printf("\t\t            |        |                   \n");
    	printf("\t\t            /\\       /\\                  \n");
    }

	else if(who == 0 && cn2 == 2){
		if(kontrol2 == 0){
			printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
           	printf("\n\n\n\n\n\n\n");
    	    printf("\t\t  \033[0;31m                              \n");
         	printf("\t\t   %s %d                    _            \n",name1,cn1);
    	    printf("\t\t                   O        O _   %s %d     \n",name2,cn2);
    	    printf("\t\t                   |\\-i---/\\I  _           \n");
         	printf("\t\t                   |     /  |               \n");
        	printf("\t\t                  / \\  / \\  |               \n");
        	kontrol2 = 1;
        }
    	usleep(400000);
    	system("cls");
    	printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
    	printf("\033[0m");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t                                        \n");
    	printf("\t\t   %s %d                                  \n",name1,cn1);
    	printf("\t\t              |    | _      %s %d           \n",name2,cn2);
    	printf("\t\t            O |    | O                   \n");
        printf("\t\t            |\\I    I/|                   \n");
     	printf("\t\t            |        |                   \n");
    	printf("\t\t            /\\       /\\                  \n");
    } 
	else if(who == 1 && cn1 == 2){
		if(kontrol3 == 0){
			printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
            printf("\n\n\n\n\n\n\n");
        	printf("\t\t    \033[0;31m                            \n");
        	printf("\t\t                                          \n");
        	printf("\t\t%s %d            _                     \n",name1,cn1);
        	printf("\t\t      _  O       O    %s %d              \n",name2,cn2);
            printf("\t\t     _  I/\\---i-/|                   \n");
        	printf("\t\t        |  \\     |                   \n");
        	printf("\t\t        |  / \\  / \\                  \n");
        	kontrol3 = 1;
        }
    	usleep(400000);
    	system("cls");
    	printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
    	printf("\033[0m");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t                                        \n");
    	printf("\t\t   %s %d                                  \n",name1,cn1);
    	printf("\t\t              |    | _      %s %d           \n",name2,cn2);
    	printf("\t\t            O |    | O                   \n");
        printf("\t\t            |\\I    I/|                   \n");
     	printf("\t\t            |        |                   \n");
    	printf("\t\t            /\\       /\\                  \n");
    }
    else if(who == 0 && cn2 == 1){
		if(kontrol4==0){
			printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
        	printf("\n\n\n\n\n\n\n");
    	    printf("\t\t  \033[0;31m                              \n");
         	printf("\t\t   %s %d                    _            \n",name1,cn1);
    	    printf("\t\t                   O        O _   %s %d     \n",name2,cn2);
    	    printf("\t\t                   |\\-i---/\\I  _           \n");
         	printf("\t\t                   |     /  |                \n");
        	printf("\t\t                  / \\  / \\  |               \n");
        	kontrol4 = 1;
        }
    	usleep(400000);
    	system("cls");
    	printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
    	printf("\033[0m");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t                                        \n");
    	printf("\t\t   %s %d                                  \n",name1,cn1);
    	printf("\t\t              |    | _      %s %d           \n",name2,cn2);
    	printf("\t\t            O |    | O                   \n");
        printf("\t\t            |\\I    I/|                   \n");
     	printf("\t\t            |        |                   \n");
    	printf("\t\t            /\\       /\\                  \n");   	
	}
	else if(who == 1 && cn1 == 1){
		if(kontrol5==0){
			printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
            printf("\n\n\n\n\n\n\n");
        	printf("\t\t    \033[0;31m                            \n");
        	printf("\t\t                                          \n");
        	printf("\t\t%s %d            _                     \n",name1,cn1);
        	printf("\t\t      _  O       O    %s %d              \n",name2,cn2);
            printf("\t\t     _  I/\\---i-/|                   \n");
        	printf("\t\t        |  \\     |                   \n");
        	printf("\t\t        |  / \\  / \\                  \n");
        	kontrol5 = 1;
        }
        usleep(400000);
    	system("cls");
    	printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
    	printf("\033[0m");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t                                        \n");
    	printf("\t\t   %s %d                                  \n",name1,cn1);
    	printf("\t\t              |    | _      %s %d           \n",name2,cn2);
    	printf("\t\t            O |    | O                  \n");
        printf("\t\t            |\\I    I/|                   \n");
     	printf("\t\t            |        |                   \n");
    	printf("\t\t            /\\       /\\                  \n");		
	}
	else if(who == 0 && cn2 == 0){
		printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t    \033[0;31m                            \n");
    	printf("\t\t                                          \n");
    	printf("\t\t    %s %d                                \n",name1,cn1);
    	printf("\t\t           O                               \n");
        printf("\t\t           |\\\\I                              \n");
     	printf("\t\t           |    |       %s %d                \n",name2,cn2);
    	printf("\t\t          / \\ _|___O|                 \n");		
	}
	else if(who == 1 && cn1 == 0){
		printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");
        printf("\n\n\n\n\n\n\n");
    	printf("\t\t    \033[0;31m                            \n");
    	printf("\t\t                                          \n");
    	printf("\t\t                     _   %s %d            \n",name2,cn2);
    	printf("\t\t                     O                   \n");
        printf("\t\t                  I//|                    \n");
     	printf("\t\t                  |  |                  \n");
    	printf("\t\t              O___|_/ \\                \n");
		printf("\t\t        %s %d                               \n",name1,cn1);		
	}
}

int main() {
	system("cls");
	printf("\033[0m");
	printf("\n\t\t\t\033[1m \033[35m Savas Ve Kazan ! \033[0m\n\n\n");  
	//  \033[35m ,  \033[0m bunlar gibi kodlar ANSI escape kodlarý olarak adlandýrýlýr ve renk ile oynar.
    printf("\n\n\n\n\n Sadece \033[31m 1 - 2 - 3 \033[0m tuslariyla saldirip savunabilirsin\n\n\n\n\n");
	printf("\n\n1. kullanici ismi  :  ");
	gets(name1);
	printf("\n\n2. kullanici ismi  :  ");
	gets(name2);
    kontrol=0;
    kontrol1=0;
    kontrol2=0;
    kontrol3=0;
    kontrol4=0;
    kontrol5=0;
    can1 = 4;
    can2 = 4;
    
	int i=0;
	int kim=0;
    while(can1>0 && can2>0){
    	i++;
    	if(i%2==1){
    		kim=0;
    		kullanici1();
    		duellociz(kim,can1,can2);
		}
		else{
			kim =1;
			kullanici2();
			duellociz(kim,can1,can2);
		}
		if(can1 == 0){
			int j;
			printf("\n\n%s Hakki rahmetine kavustu!\n\n%s Oyunu kazandi TEBRIKLER!",name1,name2);
			printf("\n\n\n\nTekrar oynamak icin 1 e cikmak icin 0 a basiniz!");
			scanf("%d",&j);
			if(j == 1){
				main();
			}
		}
		else if(can2 == 0){
			int k;
			printf("\n\n%s Hakki rahmetine kavustu!\n\n%s Oyunu kazandi TEBRIKLER!",name2,name1);
			printf("\n\n\n\nTekrar oynamak icin 1 e cikmak icin 0 a basiniz!");
			scanf("%d",&k);
			if(k == 1){
				main();
			}
		}	
	}
}
