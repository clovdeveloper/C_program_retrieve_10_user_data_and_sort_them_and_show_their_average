#include <stdio.h>

double calculate_average(int tab[]) {
    double sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += tab[i];
    }
    return sum / 10;
}


int main(void) {
    int tab[10];
    for (int i = 0; i < 10 ; ++i) {
        printf("please  enter the %i number : ", i+1);
        scanf("%i", &tab[i]);
    }
    double k;
    for (int i = 0; i < 10; ++i) {

        for (int j = i+1; j < 10; ++j) {

            if(tab[i]>tab[j]) {
                k=tab[i];
                tab[i]=tab[j];
                tab[j]=k;
            }

        }

    }
    for (int i = 0; i < 10; ++i) {

        printf("  %i  \n",tab[i]);

    }

    double average = calculate_average(tab);
    printf("Their average is %f",average);



    return 0;
}