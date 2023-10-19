#include <stdio.h>
int main(){
    printf("input\n");
    float r,t;
    printf("");
    scanf("%lf" "%lf" , &r, &t);

    float phi = 22/7;
    float bejana = phi*r*r;
    float volume = phi*r*r*t;
    float keliling = 2*phi*r;
    float luas = (2*bejana) + (keliling*t);

    printf("\nOutput\n");
    printf("Volume : \n", volume);
    printf("Luas : \n", luas);
    printf("Keliling : \n", keliling);

    return 0;
}