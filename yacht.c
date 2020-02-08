/*
    BERKANT TUGBERK DEMIRTAS 2315232
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rollDice();
int playUser(int,int,int,int,int,int);
int playComputer(int,int,int,int,int,int);
int score(int,int,int,int,int,int);
int scoresheet(int,int);




int main (){

    int dice1,dice2; /* DICE 1 FOR COMPUTER DICE 2 FOR USER*/
    int categoryID_1=0,categoryID_2=0,categoryID_3=0,categoryID_4=0,categoryID_5=0,categoryID_6=0; /* VARIABLES FOR CATEGORY CHOICE FOR USER */
    int compID_1=0,compID_2=0,compID_3=0,compID_4=0,compID_5=0,compID_6=0; /* VARIABLES FOR CATEGORY CHOICE FOR COMPUTER */
    int tempUser,tempComp; /* TAKES TEMPORARY SCORE FOR SEPERATE THE SCORE AND CHOICE */
    int scoreUser,scoreComp,totalscoreUser=0,totalscoreComp=0,round=1;
    srand(time(NULL));

    printf ("Welcome to the Yahtzee game. \n Let\'s see who is lucky! \n");

    dice1=rollDice();
    dice2=rollDice();

    printf("Player: %d - ",dice1);
    printf(" Machine: %d",dice2);

    if (dice1>dice2){ /* DETERMINE WHO BEGINS */
        printf("\nPlayer is the lucky one, lets get started!\n");
         while (round!=7){

            printf("\nROUND :%d\n",round);
            printf("========================================================\n\n\n");

            tempUser=playUser(categoryID_1,categoryID_2,categoryID_3,categoryID_4,categoryID_5,categoryID_6); /* PLAYER TURN */

            /* SEPERATING THE SCORE AND CHOICES BEGIN HERE */

            if (tempUser%10==1){
                categoryID_1=tempUser%10;
                scoreUser=(tempUser-categoryID_1)/10;
            }
            else if(tempUser%10==2){
                categoryID_2=tempUser%10;
                scoreUser=(tempUser-categoryID_2)/10;
            }
            else if(tempUser%10==3){
                categoryID_3=tempUser%10;
                scoreUser=(tempUser-categoryID_3)/10;
            }
            else if(tempUser%10==4){
                categoryID_4=tempUser%10;
                scoreUser=(tempUser-categoryID_4)/10;
            }
            else if(tempUser%10==5){
                categoryID_5=tempUser%10;
                scoreUser=(tempUser-categoryID_5)/10;
            }
            else {
                categoryID_6=tempUser%10;
                scoreUser=(tempUser-categoryID_6)/10;
            }
        /* =====================================END======================================================= */

            printf("Your score is: %d",scoreUser);
            totalscoreUser+=scoreUser;
            printf("    Your total score is: %d",totalscoreUser);

            tempComp=playComputer(compID_1,compID_2,compID_3,compID_4,compID_5,compID_6); /* COMPUTER TURN */

            /* SEPERATING THE SCORE AND CHOICES BEGIN HERE */

            if(tempComp%10==1){
                compID_1=tempComp%10;
                scoreComp=(tempComp-compID_1)/10;
            }
            else if (tempComp%10==2){
                compID_2=tempComp%10;
                scoreComp=(tempComp-compID_2)/10;
            }
             else if (tempComp%10==3){
                compID_3=tempComp%10;
                scoreComp=(tempComp-compID_3)/10;
            }
             else if (tempComp%10==4){
                compID_4=tempComp%10;
                scoreComp=(tempComp-compID_4)/10;
            }
             else if (tempComp%10==5){
                compID_5=tempComp%10;
                scoreComp=(tempComp-compID_5)/10;
            }
             else if (tempComp%10==6){
                compID_6=tempComp%10;
                scoreComp=(tempComp-compID_6)/10;
            }
        /* =====================================END======================================================= */
            printf(" Computer score is: %d",scoreComp);
            totalscoreComp+=scoreComp;
            printf("    Computer total score is: %d\n\n",totalscoreComp);

            printf("ROUND %d SCORESHEET: \n",round);
            printf("-----------------------------------------\n");
            scoresheet(totalscoreUser,totalscoreComp); /* SHOWS SCORESHEET */
            round+=1;
            }
            printf("GAME IS FINISHED!\n-------------------------------------\n");
            printf("Computer: %d\nPlayer:%d\n\n",totalscoreComp,totalscoreUser);
    }
    else{
         printf("\nComputer is the lucky one, lets get started!\n\n\n");
          while (round!=7){
                printf("\nROUND :%d\n",round);
                printf("========================================================\n\n\n");
                tempComp=playComputer(compID_1,compID_2,compID_3,compID_4,compID_5,compID_6); /* COMPUTER TURN */

                /* SEPERATING THE SCORE AND CHOICES BEGIN HERE */

                if(tempComp%10==1){
                    compID_1=tempComp%10;
                    scoreComp=(tempComp-compID_1)/10;
                }
                else if (tempComp%10==2){
                    compID_2=tempComp%10;
                    scoreComp=(tempComp-compID_2)/10;
                }
                 else if (tempComp%10==3){
                    compID_3=tempComp%10;
                    scoreComp=(tempComp-compID_3)/10;
                }
                 else if (tempComp%10==4){
                    compID_4=tempComp%10;
                    scoreComp=(tempComp-compID_4)/10;
                }
                 else if (tempComp%10==5){
                    compID_5=tempComp%10;
                    scoreComp=(tempComp-compID_5)/10;
                }
                 else if (tempComp%10==6){
                    compID_6=tempComp%10;
                    scoreComp=(tempComp-compID_6)/10;
                }
            /* =====================================END======================================================= */
                printf(" Computer score is: %d",scoreComp);
                totalscoreComp+=scoreComp;
                printf("    Computer total score is: %d\n\n",totalscoreComp);

                tempUser=playUser(categoryID_1,categoryID_2,categoryID_3,categoryID_4,categoryID_5,categoryID_6); /* PLAYER TURN */

                /* SEPERATING THE SCORE AND CHOICES BEGIN HERE */

                if (tempUser%10==1){
                    categoryID_1=tempUser%10;
                    scoreUser=(tempUser-categoryID_1)/10;
                }
                else if(tempUser%10==2){
                    categoryID_2=tempUser%10;
                    scoreUser=(tempUser-categoryID_2)/10;
                }
                else if(tempUser%10==3){
                    categoryID_3=tempUser%10;
                    scoreUser=(tempUser-categoryID_3)/10;
                }
                else if(tempUser%10==4){
                    categoryID_4=tempUser%10;
                    scoreUser=(tempUser-categoryID_4)/10;
                }
                else if(tempUser%10==5){
                    categoryID_5=tempUser%10;
                    scoreUser=(tempUser-categoryID_5)/10;
                }
                else {
                    categoryID_6=tempUser%10;
                    scoreUser=(tempUser-categoryID_6)/10;
                }
            /* =====================================END======================================================= */

                printf("Your score is: %d",scoreUser);
                totalscoreUser+=scoreUser;
                printf("    Your total score is: %d",totalscoreUser);

                printf("\n\nROUND %d SCORESHEET: \n",round);
                printf("-----------------------------------------\n");
                scoresheet(totalscoreUser,totalscoreComp); /* SHOWS SCORESHEET */
                round+=1;
          }
        }

    /* DETERMINE WHO WINS */

    if(totalscoreComp>totalscoreUser)
        printf("COMPUTER WON!");
    else
        printf("PLAYER WON!");
    return 0;
}

int rollDice(){
    int dice = (int)rand()%6+1;
    return dice;

}

int playUser(int cat1,int cat2, int cat3, int cat4 , int cat5 , int cat6){

    /* RESPONSIBLE FOR ROLLING DICES AND CHOICES */
    int dice1,dice2,dice3,dice4,dice5,count=0,useCat; /* COUNT FOR RE-ROLLING THREE TIMES, USECAT FOR USING THE CATEGORIES */
    int validCat=0; /*CHECKS CATEGORY IS VALID OR NOT */
    int scores;

    char ans; /* FOR RE-ROLLING ANSWER */

    printf("Rolled dice for you: \n");
    fflush(stdin);
    do{ /*FOR RE-ROLLING*/
        fflush(stdin);
        dice1=rollDice();
        dice2=rollDice();
        dice3=rollDice();
        dice4=rollDice();
        dice5=rollDice();
        count+=1;
    printf("Dice 1: %d, Dice 2: %d, Dice 3: %d, Dice 4: %d,Dice 5: %d \n",dice1,dice2,dice3,dice4,dice5);
    printf("Do you want to roll or not (Y/N): ");
    scanf("%c",&ans);
    fflush(stdin);
    while(ans!='y' && ans!='Y' && ans!='n' && ans !='N'){
        fflush(stdin);
        printf("Invalid answer please try again. \n");
        printf("Do you want to roll or not (Y/N): ");
        scanf("%c",&ans);
    }
    }while((ans=='Y'||ans=='y')  && count<3);


    do{ /* FOR CATEGORY CHECKING */

     printf("Choose the categories that you want to use");
    if(cat1!=1)
        printf(": Fives=(1)");
    if(cat2!=2)
        printf(": Sixes=(2)");
    if(cat3!=3)
        printf(": Three Of A Kind=(3)");
    if(cat4!=4)
        printf(": Large Straight=(4)");
    if(cat5!=5)
        printf(": Yahtzee=(5)");
    if (cat6!=6)
        printf(": Chance=(6)");
    scanf("%d",&useCat);

    if(cat1==useCat)
        printf("You can't choose the same category!\n");
    else if(cat2==useCat)
        printf("You can't choose the same category!\n");
    else if(cat3==useCat)
        printf("You can't choose the same category!\n");
    else if(cat4==useCat)
        printf("You can't choose the same category!\n");
    else if(cat5==useCat)
        printf("You can't choose the same category!\n");
    else
        validCat=1;

    }while(validCat==0);

    scores=score(useCat,dice1,dice2,dice3,dice4,dice5);

    return (scores*10)+useCat;
    }


int playComputer(int cat1,int cat2,int cat3, int cat4, int cat5,int cat6){
    int dice1,dice2,dice3,dice4,dice5;
    int score1=0,score2=0,score3=0,score4=0,score5=0,score6=0;

    dice1=rollDice();
    dice2=rollDice();
    dice3=rollDice();
    dice4=rollDice();
    dice5=rollDice();

    printf("\n\nRolled the dice for computer:\n");
    printf("Dice 1: %d, Dice 2: %d, Dice 3: %d, Dice 4: %d,Dice 5: %d \n",dice1,dice2,dice3,dice4,dice5);

    /* FIVES */

    if(cat1!=1){
        if (dice1==5 || dice2==5 || dice3==5 || dice4==5 || dice5==5 ){
            if (dice1==5)
                score1+=5;
            if (dice2==5)
                score1+=5;
            if (dice3==5)
                score1+=5;
            if (dice4==5)
                score1+=5;
            if (dice5==5)
                score1+=5;
        }
    }
    /* SIXES */

    if(cat2!=2){
        if (dice1==6 || dice2==6 || dice3==6 || dice4==6 || dice5==6 ){
            if (dice1==6)
                score2+=6;
            if (dice2==6)
                score2+=6;
            if (dice3==6)
                score2+=6;
            if (dice4==6)
                score2+=6;
            if (dice5==6)
                score2+=6;
        }
    }
    /* THREE OF A KIND */

    if(cat3!=3){
        if (dice1==dice2 && dice2==dice3 && dice3==dice4)
            score3=dice1+dice2+dice3+dice4;
        else if (dice1==dice2 && dice2==dice3 && dice3==dice5)
            score3=dice1+dice2+dice3+dice5;
        else if (dice1==dice3 && dice3==dice4 && dice4==dice5)
            score3=dice1+dice3+dice4+dice5;
        else if (dice2==dice3 && dice3==dice4 && dice4==dice5)
            score3=dice2+dice3+dice4+dice5;
        else if(dice1==dice2 && dice2==dice3 )
            score3=dice1+dice2+dice3;
        else if(dice1==dice2 && dice2==dice4 )
            score3=dice1+dice2+dice4;
        else if(dice1==dice2 && dice2==dice5 )
            score3=dice1+dice2+dice4;
        else if (dice3==dice4 && dice4==dice5 )
            score3=dice3+dice4+dice5;
        else if (dice1==dice3 && dice3==dice4 )
            score3=dice1+dice3+dice4;
        else if (dice1==dice3&& dice3==dice5 )
            score3=dice1+dice3+dice5;
        else if ( dice1==dice4 && dice4==dice5)
            score3=dice1+dice4+dice5;
        else if(dice2==dice3 && dice3==dice4)
            score3=dice2+dice3+dice4;
        else if(dice2==dice3 && dice3==dice5)
            score3=dice2+dice3+dice5;
        else if(dice2==dice4 && dice4==dice5)
            score3=dice2+dice4+dice5;
    }

    /* LARGE STRAIGHT */
   if(cat4!=4){
        if (dice1!=dice2 && dice1!=dice3 && dice1!=dice4 && dice1!=dice5 && dice2!=dice3 && dice2!=dice4 && dice2!=dice5 && dice3!=dice4 && dice3!=dice5 && dice4!=dice5 && ((dice1+dice2+dice3+dice4+dice5==15)|| (dice1+dice2+dice3+dice4+dice5==15)))
            score4=40;
   }
    /* YAHTZEE */
    if(cat5!=5){
        if (dice1==dice2 && dice2==dice3 && dice3==dice4 && dice4==dice5)
            score5=50;
    }
    /* CHANCE */
    if(cat6!=6)
        score6 = dice1 + dice2 + dice3 + dice4 + dice5;

    /* COMPUTER DECIDES WHICH SCORE WILL RETURN */

    if (score1>score2)
        if(score1>score3)
            if (score1>score4)
                if(score1>score5)
                    if(score1>score6){
                        printf("Computer selects Fives\n");
                        return score1*10+1;
                        }

    if (score2>score3)
        if(score2>score4)
            if (score2>score5)
                if(score2>score6){
                    printf("Computer selects Sixes\n");
                    return score2*10+2;
                    }

    if(score3>score4)
        if (score3>score5)
            if(score3>score6){
                printf("Computer selects Three Of A Kind \n");
                return score3*10+3;
                }

    if (score4>score5)
        if(score4>score6){
            printf("Large Straight");
            return score4*10+4;
            }

    if (score5>score6){
        printf("Computer selects Yahtzee\n");
        return score5*10+5;
        }

    if(cat6!=6){
    printf("Computer selects Chance\n");
    return score6*10+6;
        }
    /* IF STRATEGY DOES NOT FIT ALL OF ABOVE SELECTS ONE OF THE REMAIN STRATEGIES */

    if(cat1==1){
        if(cat2==2){
            if (cat3==3){
                if (cat4==4){
                    if (cat5==5){
                        printf("Computer selects Chance\n");
                        return score6*10+6;
                    }
                    else{
                        printf("Computer selects Yahtzee\n");
                        return score5*10+5;
                    }
                }
                else{
                    printf("Computer selects Large Straight\n");
                    return score4*10+4;
                }
            }
            else{
                printf("Computer selects Three Of A Kind \n");
                return score3*10+3;
            }
        }
        else{
            printf("Computer selects Sixes\n");
            return score2*10+2;
        }
    }
    else{
        printf("Computer selects Fives\n");
        return score1*10+1;
    }
}
/* FOR CALCULATING USER SCORE */
int score(int category, int dice1, int dice2, int dice3, int dice4, int dice5){

    int score1=0,score2=0,score3=0,score4=0,score5=0,score6=0;
    /* FIVES */
    if (category==1){

            if (dice1==5)
                score1+=5;
            if (dice2==5)
                score1+=5;
            if (dice3==5)
                score1+=5;
            if (dice4==5)
                score1+=5;
            if (dice5==5)
                score1+=5;
            return score1;
        }
        /* SIXES */
    else if(category==2){
            if (dice1==6)
                score2+=6;
            if (dice2==6)
                score2+=6;
            if (dice3==6)
                score2+=6;
            if (dice4==6)
                score2+=6;
            if (dice5==6)
                score2+=6;
            return score2;
        }
    /* THREE OF A KIND */
    else if(category==3){
        if (dice1==dice2 && dice2==dice3 && dice3==dice4)
            score3=dice1+dice2+dice3+dice4;
        else if (dice1==dice2 && dice2==dice3 && dice3==dice5)
            score3=dice1+dice2+dice3+dice5;
        else if (dice1==dice3 && dice3==dice4 && dice4==dice5)
            score3=dice1+dice3+dice4+dice5;
        else if (dice2==dice3 && dice3==dice4 && dice4==dice5)
            score3=dice2+dice3+dice4+dice5;
        else if(dice1==dice2 && dice2==dice3 )
            score3=dice1+dice2+dice3;
        else if(dice1==dice2 && dice2==dice4 )
            score3=dice1+dice2+dice4;
        else if(dice1==dice2 && dice2==dice5 )
            score3=dice1+dice2+dice4;
        else if (dice3==dice4 && dice4==dice5 )
            score3=dice3+dice4+dice5;
        else if (dice1==dice3 && dice3==dice4 )
            score3=dice1+dice3+dice4;
        else if (dice1==dice3&& dice3==dice5 )
            score3=dice1+dice3+dice5;
        else if ( dice1==dice4 && dice4==dice5)
            score3=dice1+dice4+dice5;
        else if(dice2==dice3 && dice3==dice4)
            score3=dice2+dice3+dice4;
        else if(dice2==dice3 && dice3==dice5)
            score3=dice2+dice3+dice5;
        else if(dice2==dice4 && dice4==dice5)
            score3=dice2+dice4+dice5;
        return score3;
        }
    /* LARGE STRAIGHT */
    else if(category==4){
        if (dice1!=dice2 && dice1!=dice3 && dice1!=dice4 && dice1!=dice5 && dice2!=dice3 && dice2!=dice4 && dice2!=dice5 && dice3!=dice4 && dice3!=dice5 && dice4!=dice5 && ((dice1+dice2+dice3+dice4+dice5==15)|| (dice1+dice2+dice3+dice4+dice5==15)))
                score4=40;
            return score4;
        }
    /* YAHTZEE */
    else if(category==5){
        if (dice1==dice2 && dice2==dice3 && dice3==dice4 && dice4==dice5)
            score5=50;
            return score5;
        }
    /* CHANCE */
    else if(category==6){
            score6 = dice1 + dice2 + dice3 + dice4 + dice5;
            return score6;
        }
}
int scoresheet(int totalscoreUser,int totalscoreComp){
    printf("Computer: %d\n",totalscoreComp);
    printf("Player: %d\n\n\n",totalscoreUser);

}


