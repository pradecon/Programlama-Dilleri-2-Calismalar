#include <stdio.h>

int x = 5;

int main(){
    {
        int x = 10, y = 20;
        {
            printf("x = %d, y = %d\n", x, y);

            {
                int y = 40;

                x++;
                y++;

                printf("x = %d, y = %d\n", x, y);
            }

            printf("x = %d, y = %d\n", x, y);
        }
    }
        printf("x = %d\n", x);

        return 0;
}
/* output:
    x = 10, y = 20
    x = 11, y = 41
    x = 11, y = 20
    x = 5

    */
