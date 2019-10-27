#include <stdio.h>
int main()
{
    printf("\tBIODATA PRIBADI\n\n");
    printf("NAMA : ALICIA YUNIKE RIONA\n");
    printf("NPM : 1914370113\n");
    printf("KELAS : REGULER 1D\n");
    printf("PRODI : SISTEM KOMPUTER\n");
    printf("FAKULTAS :SAINS & TEKNOLOGI\n");


    int a=20;
    int b=5;
    int c;
    c=a+b;
    printf("niali tambah        adalah %d\n",c);
    c=a-b;
    printf("nilai kurang        adalah %d\n",c);
    c=a*b;
    printf("nilai kali          adalah %d\n",c);
    c=a/b;
    printf("nilai bagi          adalah %d\n",c);
    c= b%a;
    printf("nilai modulus        adalah %d\n",c);
    c=a++;
    printf("nilai tambah-tambah  adalah %d\n",c);
    c=a--;
    printf("nilai kurang-kurang  adalah %d\n",c);
    return 0;
}
