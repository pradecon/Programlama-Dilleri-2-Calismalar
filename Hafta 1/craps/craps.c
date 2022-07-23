#include <stdio.h> //for little bit of everything all of the time
#include <stdlib.h> //for rand() and srand() function
#include <unistd.h> //for sleep() function
#include <time.h> //for time() function

int first_try ( int ) ;

void next_try ( int ) ;

int win_flag = 0 , gamer_point = 0 ;

int main () {

	int dice_sum , i = 0 ;

	while ( win_flag == 0 ) {

    sleep ( 1 ) ;

    srand ( time ( NULL ) ) ;

	dice_sum = 2 + rand () % 11 ;

    i ++ ;

    printf ( "deneme %d zar toplamı: %d\n" , i , dice_sum ) ;


        if ( i == 1 ) {

            gamer_point = first_try ( dice_sum ) ;

        } else {

            next_try ( dice_sum );
        }
    }


    if ( win_flag == 1 ) {
        printf ( "%d. denemede kazandınız\npuan->%d zar_toplamı->%d\n" , i , gamer_point , dice_sum ) ;
    }

    else if ( win_flag == -1 ) {
        printf ( "%d. denemede kaybettiniz\npuan->%d zar_toplamı->%d\n" , i , gamer_point , dice_sum ) ;

    } else {
        printf ( "hata: win_flag=%d" , win_flag ) ;
    }

    printf("\n");

}

int first_try ( int the_luck_number ) {

    if ( the_luck_number == 7 || the_luck_number == 11 ) {
        win_flag = 1 ;
    } else if ( the_luck_number == 2 || the_luck_number == 3 || the_luck_number == 12 ) {
        win_flag = -1 ;
    } else ;

    return the_luck_number;
}

void next_try ( int the_luck_number ) {
    if ( the_luck_number == gamer_point ) {
        win_flag = 1 ;
    } else if ( the_luck_number == 7) {
        win_flag = -1 ;
    } else;
}
