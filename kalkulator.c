#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

char nama [100], pass [30], nama1[100], pass1[30];

 int a, b, c=0;

 void main()
{
int pil;

printf("1. regis\n");
printf("2. login\n");
printf("3. exit\n");
printf("input :\n");
scanf("%d", &pil);

switch (pil)
{
case 1:

     system ("cls");
     regis();
     break;

case 2:

     system ("cls");
     login();
     break;

}
}

void regis()
{
    printf("please register\n\n");
    printf("nama :");
    scanf ("%s",nama);
    printf("pass :");
    scanf("%s",pass);
    strcpy(nama1,nama);
    strcpy(pass1,pass);
    printf("%s",nama1);
    printf("%s",pass1);

    system("cls");
    main();
}
void login()
{
    printf("please login\n\n");
    printf("nama :");
    scanf("%s",nama);
    printf("pass :");



    do{pass[c]=getch();
    if(pass[c]!='\r'){
        printf("*");
    }

    c++;
    }while(pass[c-1]!='\r');
    pass[c-1]='\0';

    a=strcmp(nama1,nama);
    b=strcmp(pass1,pass);
    if(a ==0 && b==0){
        printf("\nlogin anda berhasil");
        main2();
    }else{
        printf("\nusername/password salah!!");
    }
    }


int a,b,c,d,e,f,g,h,u;
char lagi;
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void panah(int posisimenu, int posisipanah){
    if (posisipanah==posisimenu){
        printf("==>");
        }else {
            printf("    ");}
}
void main2(){
    int keyPressed=0;
	int posisi=1;
    while(keyPressed!=13){
        system("cls");

        printf("********************* KALKULATOR ***************************\n");
        panah(1, posisi); printf(" 1. Ping Poro Lan Sudo\n");
        panah(2, posisi); printf(" 2. SinCosTan\n");
        panah(3, posisi); printf(" 3. Menghitung Keliling, Luas Dan Volume\n");
        panah(4, posisi); printf(" 4. Menghitung Akar Kuadrat\n");
        panah(5, posisi); printf(" 5. EXIT\n");
        printf("************************************************************\n");

        keyPressed=getch();
        if(keyPressed==72)posisi--;
        else if(keyPressed==80)posisi++;
        if(posisi>5)posisi=1;
        if(posisi<1)posisi=5;
	}
       switch(posisi){
    	case 1:
    		menu1();
    		break;
    	case 2:
    		sincostan();
    		break;
    	case 3:
    		menu3();
    		break;
    	case 4:
    		akar();
			break;
		case 5:
			end();
    }
}
void end(){
	system("cls");
	printf("************************************************************\n");
    printf("******************* TERIMA KASIH ***************************\n");
    printf("**********************672022327*******************************");
}
void sinus()
{
    lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
    system("cls");
    float a;
    gotoxy(45,13);
    printf("Masukan Derajat Sinus   : ");
    scanf("%f", &a);
    gotoxy(45,14);
    printf("Hasil Sinus Adalah      = %.2f\n", sin(3.14 / 180 * a));
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,15);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
	}
	sincostan();
}
void cosinus()
{
    lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
    system("cls");
    float a;
    gotoxy(45,13);
    printf("Masukkan derajat Cosinus    : ");
    scanf("%f", &a);
    gotoxy(45,14);
    printf("Hasil Cosinus Adalah        = %.2f\n", cos(3.14 / 180 * a));
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,15);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
	}
	sincostan();
}
void tangen()
{
    lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
        system("cls");
        float a;
        gotoxy(45,13);
        printf("Masukan Derajat Tangen      : ");
        scanf("%f", &a);
        gotoxy(45,14);
        printf("Hasil Tangen Adalah         = %.2f\n", tan(3.14 / 180 * a));
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,15);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
	}
	sincostan();
}
void sincostan(){
	system("cls");
    system("COLOR F9");
    int keyPressed=0;
	int posisi7=1;
    while(keyPressed!=13){
    gotoxy(40,10);
    printf("<<<< SELAMAT DATANG DI MENU SINCOSTAN >>>>");
    gotoxy(45,12);
    panah(1,posisi7);printf(" 1. Menghitung Sinus");
    gotoxy(45,13);
    panah(2,posisi7);printf(" 2. Menghitung Cosinus");
    gotoxy(45,14);
    panah(3,posisi7);printf(" 3. Menghitung Tangen");
    gotoxy(45,15);
    panah(4,posisi7);printf(" 4. Kembali Ke Menu Sebelumnya");
    keyPressed=getch();
        if(keyPressed==72)posisi7--;
        else if(keyPressed==80)posisi7++;
        if(posisi7>4)posisi7=1;
        if(posisi7<1)posisi7=4;
	}
    switch(posisi7){
    case 1:
        system ("cls");
        sinus();
        sincostan();
        break;
    case 2:
        system ("cls");
        cosinus();
        sincostan();
        break;
    case 3:
        system ("cls");
        tangen();
        sincostan();
        break;
    case 4:
        system ("cls");
        main();
        break;
	}
}
void akar(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	float a,x,y;
	gotoxy(40,13);
    printf("<<<< SELAMAT DATANG DI MENU AKAR>>>>");
	gotoxy(45,15);
	printf("Masukan bilangan = ");
	scanf("%f",&a);
	x=sqrt(a);
	y=pow(x,2);
	gotoxy(45,16); // x pangkat 2
	printf("Akar dari %7.2f =  %4.2f",a,x);
	gotoxy(45,17);
	printf("%4.2f pangkat 2 = %7.2f",x,y );
	getch();
	int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,18);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
	}
	main();
}
void volkub(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
    printf("Masukan Panjang Sisi   : ");
    scanf("%d", &a);
    float b = (float) a * (float) a * (float) a;
    gotoxy(45,14);
    printf("Hasil Volume Kubus = %.2f \n", b);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,15);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void volbol(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
	printf("Masukan Panjang Jari-jari				: ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Panjang Diameter				: ");
    scanf("%d", &b);
    float c = 3.14;
    float d = (4.0 / 3) * (float) c * a * a * a;
    float f = b/2;
    float g = f * f * f;
    float e = (4.0 / 3) * (float) c * (float) g;
    gotoxy(45,15);
    printf("Hasil Volume Bola Berdasarkan Jari-jari		= %.2f", d);
    gotoxy(45,16);
    printf("Hasil Volume Bola Berdasarkan Diameter 		= %.2f \n", e);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,17);
        	printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }

        }
}
}
void vol(){
	system("cls");
    system("COLOR F9");
    int keyPressed=0;
	int posisi6=1;
    while(keyPressed!=13){
    gotoxy(40,10);
    printf("<<<< SELAMAT DATANG DI MENU VOLUME BANGUN RUANG>>>>");
    gotoxy(45,12);
    panah(1,posisi6);printf(" 1. Menghitung Volume Kubus");
    gotoxy(45,13);
    panah(2,posisi6);printf(" 2. Menghitung Volume Prisma");
    gotoxy(45,14);
    panah(3,posisi6);printf(" 3. Menghitung Volume Limas");
    gotoxy(45,15);
    panah(4,posisi6);printf(" 4. Menghitung Volume Bola");
    gotoxy(45,16);
    panah(5,posisi6);printf(" 5. Kembali Ke Menu Sebelumnya");
    keyPressed=getch();
        if(keyPressed==72)posisi6--;
        else if(keyPressed==80)posisi6++;
        if(posisi6>5)posisi6=1;
        if(posisi6<1)posisi6=5;
	}
    switch(posisi6){
    case 1:
        system ("cls");
        volkub();
        vol();
        break;
    case 2:
        system ("cls");
        menu3();
        break;
    case 3:
        system ("cls");
        vol();
        break;
    case 4:
        system ("cls");
        volbol();
        vol();
        break;
    case 5:
    	system("cls");
    	menu3();
	}
}
void luper(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
    printf("Masukan Panjang Sisi   : ");
    scanf("%d", &a);
    float c = (float) a;
    float b = (float) a * (float) c;
    gotoxy(45,14);
    printf("Hasil Keliling Persegi = %.2f \n", b);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,15);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void lutrap(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
	printf("Masukan Panjang Sisi Atas  		: ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Panjang Sisi Bawah		: ");
    scanf("%d", &b);
    gotoxy(45,15);
    printf("Masukan Panjang Sisi Tinggi		: ");
    scanf("%d", &c);
    float d = (float) a + (float) b;
    float e = (float) d * (float) c;
    float f = (float) e / 2;
    gotoxy(45,16);
    printf("Hasil Luas Trapesium Sama Kaki = %.2f \n", f);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,17);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void lulay(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
	printf("Masukan Panjang Diagonal Panjang		: ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Panjang Diagonal Lebar			: ");
    scanf("%d", &b);
    float c = c/2;
    float d = (float) a * (float) b;
    float e = (float) d * (float) c;
    gotoxy(45,15);
    printf("Hasil Keliling Layang-layang		= %.2f\n", e);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,16);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void luling(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
	printf("Masukan Panjang Jari-jari			: ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Panjang Diameter			: ");
    scanf("%d", &b);
    float c = 3.14;
    float g = (float) a * (float) a;
    float d = (float) c * (float) g;
    float e = 0.25;
    float f = (float) b * (float) b;
    float h = (float) e * (float) c * (float) f;
    gotoxy(45,15);
    printf("Hasil Luas Lingkaran Berdasarkan Jari-jari		= %.2f", d);
    gotoxy(45,16);
    printf("Hasil Luas Lingkaran Berdasarkan Diameter 		= %.2f \n", h);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,17);
        	printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void luas(){
	system("cls");
    system("COLOR F9");
    int keyPressed=0;
	int posisi5=1;
    while(keyPressed!=13){
    gotoxy(40,10);
    printf("<<<< SELAMAT DATANG DI MENU LUAS BANGUN DATAR>>>>");
    gotoxy(45,12);
    panah(1,posisi5);printf(" 1. Menghitung Luas Persegi");
    gotoxy(45,13);
    panah(2,posisi5);printf(" 2. Menghitung Luas Trapesium");
    gotoxy(45,14);
    panah(3,posisi5);printf(" 3. Menghitung Luas Layang Layang");
    gotoxy(45,15);
    panah(4,posisi5);printf(" 4. Menghitung Luas Lingkaran");
    gotoxy(45,16);
    panah(5,posisi5);printf(" 5. Kembali Ke Menu Sebelumnya");
    keyPressed=getch();
        if(keyPressed==72)posisi5--;
        else if(keyPressed==80)posisi5++;
        if(posisi5>5)posisi5=1;
        if(posisi5<1)posisi5=5;
	}
    switch(posisi5){
    case 1:
        system ("cls");
        luper();
        luas();
        break;
    case 2:
        system ("cls");
        lutrap();
        luas();
        break;
    case 3:
        system ("cls");
        lulay();
        luas();
        break;
    case 4:
        system ("cls");
        luling();
        luas();
        break;
    case 5:
    	system("cls");
    	menu3();
	}
}
void kelper(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
    printf("Masukan Panjang Sisi   : ");
    scanf("%d", &a);
    float b = (float)a * 4 ;
    gotoxy(45,15);
    printf("Hasil Keliling Persegi = %.2f \n", b);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,16);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void keltrap(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
	printf("Masukan Panjang Sisi Atas  		: ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Panjang Sisi Bawah			: ");
    scanf("%d", &b);
    gotoxy(45,15);
    printf("Masukan Panjang Sisi Miring		: ");
    scanf("%d", &c);
    float e = c*2;
    float d = (float)a + (float)b + (float)e;
    gotoxy(45,16);
    printf("Hasil Keliling Trapesium Sama Kaki = %.2f \n", d);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,17);
          	printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void kellay(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
	printf("Masukan Panjang Sisi Atas			: ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Panjang Sisi Bawah			: ");
    scanf("%d", &b);
    float c = 2;
    float d = (float) a + (float) b;
    float e = (float) d * (float) c;
    gotoxy(45,15);
    printf("Hasil Keliling Layang-layang		= %.2f\n", e);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,16);
        	printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void kelling(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
	printf("Masukan Panjang Jari-jari			: ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Panjang Diameter			: ");
    scanf("%d", &b);
    float c = 3.14;
    float e = (float) a *2;
    float d = (float) c * (float) e;
    float f = (float) c * (float) b;
    gotoxy(45,15);
    printf("Hasil Keliling Lingkaran Berdasarkan Jari-jari		= %.2f", d);
    gotoxy(45,16);
    printf("Hasil Keliling Lingkaran Berdasarkan Diameter 		= %.2f \n", f);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,17);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void kel(){
	system("cls");
    system("COLOR F9");
    int keyPressed=0;
	int posisi4=1;
    while(keyPressed!=13){
    gotoxy(40,10);
    printf("<<<< SELAMAT DATANG DI MENU KELILING BANGUN DATAR>>>>");
    gotoxy(45,12);
    panah(1,posisi4);printf(" 1. Menghitung Keliling Persegi");
    gotoxy(45,13);
    panah(2,posisi4);printf(" 2. Menghitung Keliling Trapesium");
    gotoxy(45,14);
    panah(3,posisi4);printf(" 3. Menghitung keliling Layang Layang");
    gotoxy(45,15);
    panah(4,posisi4);printf(" 4. Menghitung Keliling Lingkaran");
    gotoxy(45,16);
    panah(5,posisi4);printf(" 5. Kembali Ke Menu Sebelumnya");
    keyPressed=getch();
        if(keyPressed==72)posisi4--;
        else if(keyPressed==80)posisi4++;
        if(posisi4>5)posisi4=1;
        if(posisi4<1)posisi4=5;
	}
    switch(posisi4){
    case 1:
        system ("cls");
        kelper();
        kel();
        break;
    case 2:
        system ("cls");
        keltrap();
        kel();
        break;
    case 3:
        system ("cls");
        kellay();
        kel();
        break;
    case 4:
        system ("cls");
        kelling();
        break;
    case 5:
    	system("cls");
    	menu3();
	}
}
void menu3(){
	system("cls");
    system("COLOR F9");
    int keyPressed=0;
	int posisi3=1;
    while(keyPressed!=13){
    gotoxy(40,10);
    printf("<<<< SELAMAT DATANG DI MENU BANGUN DATAR DAN BANGUN RUANG >>>>");
    gotoxy(45,12);
    panah(1,posisi3);printf(" 1. Menghitung Keliling Bangun Datar");
    gotoxy(45,13);
    panah(2,posisi3);printf(" 2. Menghitung Luas Bangun Datar");
    gotoxy(45,14);
    panah(3,posisi3);printf(" 3. Menghitung Volume Bangun Ruang");
    gotoxy(45,15);
    panah(4,posisi3);printf(" 4. Kembali Ke Menu Utama");
    gotoxy(45,16);
    keyPressed=getch();
        if(keyPressed==72)posisi3--;
        else if(keyPressed==80)posisi3++;
        if(posisi3>4)posisi3=1;
        if(posisi3<1)posisi3=4;
	}
    switch(posisi3){
    case 1:
        system ("cls");
        kel();
        menu3();
        break;
    case 2:
        system ("cls");
        luas();
        menu3();
        break;
    case 3:
        system ("cls");
        vol();
        menu3();
        break;
    case 4:
        system ("cls");
        main();
        break;
	}
}
void menu1(){
	system("cls");
    system("COLOR F9");
    int keyPressed=0;
	int posisi1=1;
    while(keyPressed!=13){
    gotoxy(40,10);
    printf("<<<< SELAMAT DATANG DI MENU KALKULATOR >>>>");
    gotoxy(45,12);
    panah(1,posisi1);printf(" 1. Penjumlahan");
    gotoxy(45,13);
    panah(2,posisi1);printf(" 2. Pengurangan");
    gotoxy(45,14);
    panah(3,posisi1);printf(" 3. Perkalian");
    gotoxy(45,15);
    panah(4,posisi1);printf(" 4. Pembagian");
    gotoxy(45,16);
    panah(5,posisi1);printf(" 5. Kembali Ke Menu Utama");
    keyPressed=getch();
        if(keyPressed==72)posisi1--;
        else if(keyPressed==80)posisi1++;
        if(posisi1>5)posisi1=1;
        if(posisi1<1)posisi1=5;
	}
    switch(posisi1){
    case 1:
        system ("cls");
        jum();
        menu1();
        break;
    case 2:
        system ("cls");
        kur();
        menu1();
        break;
    case 3:
        system ("cls");
        kal();
        menu1();
        break;
    case 4:
        system ("cls");
        bag();
        menu1();
        break;
    case 5:
        system("cls");
        main();
    }
}
void jum(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
    printf("Masukan Angka Pertama   : ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Angka Kedua     : ");
    scanf("%d", &b);
    float c = (float)a + (float)b;
    gotoxy(45,15);
    printf("Hasil dari %d + %d = %.2f \n", a, b, c);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,16);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void kur(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
    printf("Masukan Angka Pertama   : ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Angka Kedua     : ");
    scanf("%d", &b);
    float c = (float)a - (float)b;
    gotoxy(45,15);
    printf("Hasil dari %d - %d = %2.f \n", a, b, c);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,16);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void kal(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
    printf("Masukan Angka Pertama   : ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Angka Kedua     : ");
    scanf("%d", &b);
    float c = (float)a * (float)b;
    gotoxy(45,15);
    printf("Hasil dari %d x %d = %.2f \n", a, b, c);
        int  ulang = 1;
        while ( ulang == 1 )
        {
        	gotoxy(45,16);
            printf("Ingin mengulang program ini ? (y/t) : ");
            scanf("%s", &lagi);
            if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
void bag(){
	lagi = 'Y';
    while ( lagi=='Y' || lagi=='y')
    {
	system("cls");
	gotoxy(45,13);
    printf("Masukan Angka Pertama   : ");
    scanf("%d", &a);
    gotoxy(45,14);
    printf("Masukan Angka Kedua     : ");
    scanf("%d", &b);
    float c = (float)a / (float)b;
    gotoxy(45,15);
    printf("Hasil dari %d : %d = %.2f \n", a, b, c);
    int  ulang = 1;
    while ( ulang == 1 )
    {
    	gotoxy(45,16);
        printf("Ingin mengulang program ini ? (y/t) : ");
        scanf("%s", &lagi);
    if (lagi =='Y' || lagi == 'y' || lagi =='T' || lagi =='t')
            {
                ulang = 0;
            }
        }
}
}
