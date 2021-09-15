
// author: Manu Gupta
// date: 19/04/2021
// Mini cricket game

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m, n1, n2, n3, n4, n5, n6, sum, n8, p, q, r, t, u, v;
    char team1[20], team2[20];

    printf("Enter Team 1 name:");
    gets(team1);
    //printf("%s", team1);

    printf("\nEnter Team 2 name:");
    gets(team2);
    //printf("%s\n", team2);

    printf("    Toss Time!\n");
    printf("Enter any number \nif the number returned is 0 then %s bat first and \nif 1 then %s bat first", team1, team2);

    srand(time(NULL));
    n8 = rand() % 2;

    printf("\nEnter any number :");
    scanf("%d", &p);
    printf(" The Number returned is %d \n ", n8);
    if (n8 == 0)
    {
        printf("%s won the toss and bat first!", team1);

        srand(time(NULL));
        n1 = rand() % 7;

        printf("\nFirst Ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run \n ", n1);
        if (n1 == 0)
        {
            printf("\nYou are OUT!!!");

            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1);
            printf("\n\nYou have scored total %d Run", sum);

            goto end;
        }
        if (n1 >= 4)
        {
            printf("\nGreat Start!\n");
        }

        srand(time(NULL));
        n2 = rand() % 7;
        printf("Second Ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the second ball \n ", n2);
        if (n2 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2);
            printf("\n\nYou have scored total %d Run ", sum);

            // return 0;
            goto end;
        }

        srand(time(NULL));
        n3 = rand() % 7;
        printf("Third ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the third ball\n ", n3);
        if (n3 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3);
            printf("\n\nYou have scored total %d Run ", sum);

            //return 0;
            goto end;
        }
        else
        {
            printf("\nNice batting\n");
        }

        srand(time(NULL));
        n4 = rand() % 7;
        printf("Fourth ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the fourth ball\n ", n4);
        if (n4 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3 + n4);
            printf("\n\nYou have scored total %d Run ", sum);

            //return 0;
            goto end;
        }

        srand(time(NULL));
        n5 = rand() % 7;
        printf("Fifth ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the fifth ball\n ", n5);
        if (n5 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3 + n4 + n5);
            printf("\n\nYou have scored total %d Run ", sum);

            // return 0;
            goto end;
        }
        else if (sum > 15)
        {
            printf("\n  What a form!\n");
        }

        srand(time(NULL));
        n6 = rand() % 7;
        printf("Sixth and last ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the last ball \n ", n6);
        if (n6 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
        }
        else
            printf("Great batting!,You finished with Not Out!");

        sum = (n1 + n2 + n3 + n4 + n5 + n6);
    end:
        printf("\n\n%s have scored total %d Run in the match\n", team1, sum);
        q = sum + 1;
        printf("So the Target for %s is %d \n Now %s will bat\n ", team2, q, team2);

        srand(time(NULL));
        n1 = rand() % 7;

        printf("\nFirst ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in first ball\n ", n1);
        if (n1 >= q)
        {
            printf("%s won the match by 5 balls",team2);
            return 0;
        }

        if (n1 == 0)
        {
            printf("\nYou are OUT!!!");

            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto exit;
        }
        if (n1 >= 4)
        {
            printf("\nGreat Start!\n");
        }

        srand(time(NULL));
        n2 = rand() % 7;
        printf("Second ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the second ball\n ", n2);
        if ((n1 + n2) >= q)
        {
            printf("%s won the match by 4 balls",team2);
            return 0;
        }

        if (n2 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto exit;
        }

        srand(time(NULL));
        n3 = rand() % 7;
        printf("Third ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the third ball\n ", n3);
        if ((n1 + n2 + n3) >= q)
        {
             printf("%s won the match by 3 balls",team2);
            return 0;
        }

        if (n3 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto exit;
        }
        else
        {
            printf("\nNice batting\n");
        }

        srand(time(NULL));
        n4 = rand() % 7;
        printf("Fourth ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the fourth ball\n ", n4);
        if ((n1 + n2 + n3 + n4) >= q)
        {
             printf("%s won the match by 2 balls",team2);
            return 0;
        }

        if (n4 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3 + n4);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto exit;
        }

        srand(time(NULL));
        n5 = rand() % 7;
        printf("Fifth ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the fifth ball\n ", n5);
        if ((n1 + n2 + n3 + n4 + n5) >= q)
        {
             printf("%s won the match by 1 balls",team2);
            return 0;
        }

        if (n5 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3 + n4 + n5);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto exit;
        }
        else if (sum > 15)
        {
            printf("\n  What a form!\n");
        }

        srand(time(NULL));
        n6 = rand() % 7;
        printf("Last ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the last ball\n ", n6);
        if (n6 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
        }
        else
            printf("Great batting!,You finished with Not Out!");

        sum = (n1 + n2 + n3 + n4 + n5 + n6);
    exit:

        printf("\n\nYou have scored total %d Run in the match\n", sum);
    
        if (sum >= q)
        {
            r = sum + 1 - q;
            printf("%s won the match by %d run\n", team2, r);
        }
        if (sum < (q - 1))
        {
            t = q - (sum + 1);
            printf("\n%s won the match by %d run\n", team1, t);
        }
        // if (r==0)
        // {
        //     printf("The match has DRAWN!");
        // }
        // if (t==0)
        // {
        //     printf("The match has DRAWN!");
        // }
        
        
    }

    if (n8 == 1)
    {

        printf("%s won the toss and bat first!", team2);

        srand(time(NULL));
        n1 = rand() % 7;

        printf("\nFirst Ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run \n ", n1);
        if (n1 == 0)
        {
            printf("\nYou are OUT!!!");

            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto out;
        }
        if (n1 >= 4)
        {
            printf("\nGreat Start!\n");
        }

        srand(time(NULL));
        n2 = rand() % 7;
        printf("Second Ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the second ball \n ", n2);
        if (n2 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2);
            printf("\n\nYou have scored total %d Run ", sum);

            //return 0;
            goto out;
        }

        srand(time(NULL));
        n3 = rand() % 7;
        printf("Third ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the third ball\n ", n3);
        if (n3 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3);
            printf("\n\nYou have scored total %d Run ", sum);

            //return 0;
            goto out;
        }
        else
        {
            printf("\nNice batting\n");
        }

        srand(time(NULL));
        n4 = rand() % 7;
        printf("Fourth ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the fourth ball\n ", n4);
        if (n4 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3 + n4);
            printf("\n\nYou have scored total %d Run ", sum);

            //return 0;
            goto out;
        }

        srand(time(NULL));
        n5 = rand() % 7;
        printf("Fifth ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the fifth ball\n ", n5);
        if (n5 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3 + n4 + n5);
            printf("\n\nYou have scored total %d Run ", sum);

            //return 0;
            goto out;
        }
        else if (sum > 15)
        {
            printf("\n  What a form!\n");
        }

        srand(time(NULL));
        n6 = rand() % 7;
        printf("Sixth and last ball, Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the last ball \n ", n6);
        if (n6 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
        }
        else
            printf("Great batting!,You finished with Not Out!");

        sum = (n1 + n2 + n3 + n4 + n5 + n6);
    out:
        printf("\n\n%s have scored total %d Run in the match\n", team2, sum);
        q = sum + 1;
        printf("So the Target for %s is %d \n Now %s will bat\n ", team1, q, team1);

        srand(time(NULL));
        n1 = rand() % 7;

        printf("\nFirst ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in first ball\n ", n1);
        if ((n1) >= q)
        {
             printf("%s won the match by 5 balls",team1);
            return 0;
        }

        if (n1 == 0)
        {
            printf("\nYou are OUT!!!");

            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto last;
        }
        if (n1 >= 4)
        {
            printf("\nGreat Start!\n");
        }

        srand(time(NULL));
        n2 = rand() % 7;
        printf("Second ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the second ball\n ", n2);
        if ((n1 + n2) >= q)
        {
              printf("%s won the match by 4 balls",team1);
            return 0;
        }

        if (n2 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto last;
        }

        srand(time(NULL));
        n3 = rand() % 7;
        printf("Third ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the third ball\n ", n3);
        if ((n1 + n2 + n3) >= q)
        {
              printf("%s won the match by 3 balls",team1);
            return 0;
        }

        if (n3 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto last;
        }
        else
        {
            printf("\nNice batting\n");
        }

        srand(time(NULL));
        n4 = rand() % 7;
        printf("Fourth ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the fourth ball\n ", n4);
        if ((n1 + n2 + n3 + n4) >= q)
        {
              printf("%s won the match by 2 balls",team1);
            return 0;
        }

        if (n4 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3 + n4);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto last;
        }

        srand(time(NULL));
        n5 = rand() % 7;
        printf("Fifth ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the fifth ball\n ", n5);
        if ((n1 + n2 + n3 + n4 + n5) >= q)
        {
              printf("%s won the match by 1 balls",team1);
            return 0;
        }

        if (n5 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
            sum = (n1 + n2 + n3 + n4 + n5);
            printf("\n\nYou have scored total %d Run", sum);

            //return 0;
            goto last;
        }
        else if (sum > 15)
        {
            printf("\n  What a form!\n");
        }

        srand(time(NULL));
        n6 = rand() % 7;
        printf("Last ball,Enter any number :");
        scanf("%d", &m);
        printf(" You scored %d Run in the last ball\n ", n6);
        if (n6 == 0)
        {
            printf("\nYou are OUT!!!");
            if (m == 0)
            {
                printf("\n you are catch out \n Good catch by Virat Kohli !");
            }
            if (m == 1)
            {
                printf("\n you are bowled \n You missed Bumrah's Yorker !");
            }
            if (m == 2)
            {
                printf("\n you are LBW \n A good ball by Shami !");
            }
            if (m == 3)
            {
                printf("\n you are stumped out \n Dhoni's Magic !!");
            }
            if (m == 4)
            {
                printf("\n you are hit wicket \n ashwin's come back in the game !");
            }
            if (m == 5)
            {
                printf("\n you are run out \n Jaddu's Jadu !");
            }
            if (m == 6)
            {
                printf("\n you are LBW at Umpire's call \n Good ball by Bhuvi !");
            }
            if (m == 7)
            {
                printf("\n you are catch out \n What a catch! Ro-Hitman Sharma");
            }
            if (m == 8)
            {
                printf("\n you are bowled \n Chahal saying 'You miss, I hit !!' ");
            }
            if (m == 9)
            {
                printf("\n you are ran out \n Direct hit by Sir Jadeja !");
            }
        }
        else
            printf("Great batting!,You finished with Not Out!");

        sum = (n1 + n2 + n3 + n4 + n5 + n6);
    last:

        printf("\n\nYou have scored total %d Run in the match\n", sum);
    
        if (sum >= q)
        {
            u = sum + 1 - q;
            printf("\n%s won the match by %d run\n", team1, u);
        }
        if (sum < (q - 1))
        {
            v = q - (sum + 1);
            printf("%s won the match by %d run\n", team2, v);
        }
        // if (u==0)
        // {
        //     printf("The match has DRAWN!");
        // }
        // if (v==0)
        // {
        //     printf("The match has DRAWN!");
        // }
    }
    // getch();
    return 0;
}
