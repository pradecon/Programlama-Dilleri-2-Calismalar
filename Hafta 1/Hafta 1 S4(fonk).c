#include <stdio.h>

void fonk(void)
{
    int id  = 1;

    printf("fonk() id değişken değeri: %d\n", id);

    id = id +21;

    printf("fonk() id değişken değeri: %d\n", id);
}

void fonk_sta(void)
{
    static int id  = 1;

    printf("fonk_sta() id değişken değeri: %d\n", id);

    id = id +21;

    printf("fonk_sta() id değişken değeri: %d\n", id);
}
