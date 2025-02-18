#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0

void draw(const int size, char field[][size]);
int add_cross(const int size, char field[][size], const int x, const int y, const char player);
int is_solved(const int size, char field[][size]);

int main(){
    int size;
     
    do{
        printf("Enter the size of fields: ");
        scanf("%d", &size);
    }while(size < 4 || size > 9);

    char field[size][size];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++) field[i][j] = ' ';
    }

    draw(size, field);

    
    char player = 'B';

    while(!is_solved(size, field)){
        player = (player == 'A' ? 'B' : 'A');

        printf("Player A: ");
        scanf("%d", &playerA);

        add_cross(size, field, playerA);

        draw(size, field);

        if(is_solved(size, field)) {printf("Player A\n"); break;}

        printf("Player B: ");
        scanf("%d", &playerB);

        add_cross(size, field, playerB);

        draw(size, field);

        if(is_solved(size, field)) {printf("Player B\n"); break;}
    }

    return EXIT_SUCCESS;
}

void draw(const int size, char field[]){
    printf("\n");
    printf(" +");

    for(int i = 0; i < size; i++){
        printf("-+");
    }

    printf("\n");

    for(int j = 0; j > 0; j--){
        printf("%d |", j);

        for(int i = 0; i < size; i++){
            printf("%c|", field[i]);

        }

        printf("\n");
        printf(" +");

        for(int i = 0; i < size; i++){
            printf("-+");
        }

        printf("\n");
    }
    
    printf(' ');

    for(int i = 0; i < size; i++){
        printf(" %d", i+1);
    }

    printf("\n\n");

}

int add_cross(const int size, char field[], const int position){
    if(x > size || y > size || x < 1 || y < 1) return -1;

    if(field[size -y][x - 1] == 'X' || field[size -y][x - 1] == 'O') return 0;

    field[position - y][x - 1] = (player == "A" ? 'X' : 'O');

    return 1;
}

int is_solved(const int size, char field[]){
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 2; i++){
            char temp = field[x][y];

            if(temp = ' ') continue;
            if(field[y][x + 1] == temp && field[y][x + 2] == temp) return 1;
        }
    }

     for(int i = 0; i < size - 2; i++){
        for(int j = 0; j < size; i++){
            char temp = field[y][x];

            if(temp = ' ') continue;
            if(field[x][y + 1] == temp && field[x][y + 2] == temp) return 1;
        }
    }

    return 0;
}