#include <stdio.h>
#include <string.h>
int i, j;
int p1 = 0;
int p2 = 0;
int p1chance=0;
int count=0;
char player1[15], player2[15];

// ALL used Function In program

void printarry(char arr[3][3]);
void p1choice(char *p1, char arr[3][3]);
void p2choice(char *p1, char arr[3][3]);
int result(char arr[3][3]);
void updatearray(char arr[3][3], int position, char symbol);


//------------------------------------------------------------------------

// Main Function

int main()
{

    char board[3][3] = {{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}};
    printf("Enter First player Name and your symbol is 'X' : ");
    scanf("%s", player1);

    printf("Enter Second player Name and your symbol is 'O' : ");
    scanf("%s", player2);

    printf("\n%s VS %s\n",player1,player2);
    printf("\n----------- Match Begins ----------\n\n");

    printf("\n\n-----> '(.)' dot symbol belongs to Empty position <------\n\n");

    int loop = 1;
    while (loop)
    {

        loop = result(board);
        if (loop == 0)
        {

            break;
        }
    }

    if (p1 == 1)
    {
        printf("\n~~~~~~~~ 'X' Hurry '%s' Win the Match ~~~~~~~~~~\n\n", player1);
    }
    else if (p2 == 1)
    {
        printf("\n~~~~~~~~ 'O' Hurry '%s' Win the Match ~~~~~~~~~~\n\n", player2);
    }

    else
    {
        printf("\n>>>>>>> Match Draw <<<<<<<<<\n");
    }

    return 0;
}

// Function for printing Array (board)
void printarry(char arr[3][3])
{
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function For updation of array using user Input

void updatearray(char arr[3][3], int position, char symbol)
{

    if (position == 0 || position > 9)
    {
        printf("\n!!! Wrong Input !!!\n");
        printf("\nplease Enter Between 1 to 9 only\n");
        if (symbol == 'X')
        {
            p1choice(player1, arr);
        }
        else
        {
            p2choice(player2, arr);
        }
    }

    else if (position <= 3)
    {
        position -= 1;
        if (arr[0][position] == '.')
        {
            arr[0][position] = symbol;
        }
        else
        {
            if (symbol == 'X')
            {
                printf("\nThis Postion Already Ocuupied Choose Another Position\n");
                p1choice(player1, arr);
            }
            else
            {
                printf("\nThis Postion Already Ocuupied Choose Another Position\n");
                p2choice(player2, arr);
            }
        }
    }
    else if (position <= 6)
    {
        position -= 4;
        if (arr[1][position] == '.')
        {
            arr[1][position] = symbol;
        }
        else
        {
            if (symbol == 'X')
            {
                printf("\nThis Postion Already Ocuupied Choose Another Position\n");
                p1choice(player1, arr);
            }
            else
            {
                printf("\nThis Postion Already Ocuupied Choose Another Position\n");
                p2choice(player2, arr);
            }
        }
    }
    else if (position <= 9)
    {
        position -= 7;
        if (arr[2][position] == '.')
        {
            arr[2][position] = symbol;
        }
        else
        {
            if (symbol == 'X')
            {
                printf("\nThis Postion Already Ocuupied Choose Another Position\n");
                p1choice(player1, arr);
            }
            else
            {
                printf("\nThis Postion Already Ocuupied Choose Another Position\n");
                p2choice(player2, arr);
            }
        }
    }
    else
    {
        printf("-------Wrong--------");
    }
}

// Function For Taking Input From player1

void p1choice(char *p1, char arr[3][3])
{
    int index;

    printf("\nEnter Number only in between 1-9\n");
    printf("%s Enter Postion Number for your Symbol 'X': ", p1);
    scanf("%d", &index);
    updatearray(arr, index, 'X');
}

// Function For Taking Input From player1
void p2choice(char *p2, char arr[3][3])
{
    int index;

    printf("\nEnter Number only in between 1-9\n");
    printf("%s Enter Postion Number for your Symbol 'O': ", p2);
    scanf("%d", &index);
    updatearray(arr, index, 'O');
}

// Function for Cheacking Result
int result(char arr[3][3])
{

    //-------------------------------------------------
    if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
    {
        p1++;
        printarry(arr);
        return 0;
    }
    else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
    {
        p1++;
        printarry(arr);
        return 0;
    }
    else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
    {
        p1++;
        printarry(arr);
        return 0;
    }

    //--------------------------------------------------------
    else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
    {
        p2++;
        printarry(arr);
        return 0;
    }
    else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
    {
        p2++;
        printarry(arr);
        return 0;
    }
    else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
    {
        p2++;
        printarry(arr);

        return 0;
    }

    //---------------------------------------------------------
    else if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
    {
        p1++;
        printarry(arr);

        return 0;
    }
    else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
    {
        p1++;
        printarry(arr);

        return 0;
    }
    else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
    {
        p1++;
        printarry(arr);

        return 0;
    }

    //-----------------------------------------------------------
    else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
    {
        p2++;
        printarry(arr);

        return 0;
    }
    else if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
    {
        p2++;
        printarry(arr);

        return 0;
    }
    else if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
    {
        p2++;
        printarry(arr);

        return 0;
    }

    //---------------------------------------------------------
    else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
    {
        p1++;
        printarry(arr);

        return 0;
    }
    else if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
    {
        p1++;
        printarry(arr);

        return 0;
    }

    //---------------------------------------------------------O
    else if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
    {
        p2++;
        printarry(arr);

        return 0;
    }
    else if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
    {
        p2++;
        printarry(arr);

        return 0;
    }

    else
    {
        printarry(arr);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (arr[i][j] == '.')
                {
                    count++;
                }
            }
        }

        if (count > 0)
        {
            if (p1chance < 1)
            {
                p1choice(player1, arr);
                count -= count;
                p1chance += 1;
                printf(" ");
            }
            else
            {
                p2choice(player2, arr);
                count -= count;
                p1chance -= 1;
                printf(" ");
            }
        }

        else
        {
            printf(" ");
            return 0;
        }
    }
}
