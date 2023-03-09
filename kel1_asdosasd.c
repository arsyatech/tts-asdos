#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include <math.h>
#include<time.h>

int milih8();
char id[100][100];
char password[100][100];
int idx = 0;
char lagi;
char namin [50];
char napel [50];
int pil;
int no_tamu;
int a,i,j,n,input=0;
char pass [33];
char yesno[3];
typedef struct
{
    int codepel;
    char napel[50];
    int nk;
    char jk[10];
    int nom;
    int pil1;
}data;
int x=0,codepel;
data pelanggan[100];
int jumlah;

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void panah(int posisimenu, int posisipanah){
    if (posisipanah==posisimenu){
        printf("--->");
        }else {
            printf("    ");}
}
void main(){
    system("COLOR F9");
    milih8();
}

int menu_log()
{
    system("COLOR F9");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("*******************************************\n");
        gotoxy(40, 2);
        printf("*                                         *\n");
        gotoxy(40, 3);
        printf("*    W E L C O M E  I N  P R O G R A M    *\n");
        gotoxy(40, 4);
        printf("*                                         *\n");
        gotoxy(40, 5);
        printf("*******************************************\n");
        gotoxy(40, 6);
        printf("*                                         *\n");
        gotoxy(40, 7);
        printf("*                                         *\n");
        gotoxy(43, 7);
        panah(1, posisi);
        printf("1. Silahkan Register Akun");
        gotoxy(40, 8);
        printf("*                                         *\n");
        gotoxy(43, 8);
        panah(2, posisi);
        printf("2. Silakan Login Akun");
        gotoxy(40, 9);
        printf("*                                         *\n");
        gotoxy(43, 9);
        panah(3, posisi);
        printf("3. Exit");
        gotoxy(40, 10);
        printf("*                                         *\n");
        gotoxy(40, 11);
        printf("*******************************************\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 3;
        }
        else if (posisi > 3)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

// menu reglog
int milih8()
{
    int pilihan = menu_log();
    system("COLOR F9");
    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            reg();
            break;
        case 2:
            login();
            break;
        case 3:
            end();
        }
    }
}

int login()
{
    char name[100];
    char pass[100];
    char key;
    while (1)
    {
        int i = 0;
        system("cls");

        gotoxy(40, 2);
        printf("Silahkan masukkan id       : ");
        scanf(" %[^\n]s", &name);
        gotoxy(40, 3);

        printf("Silahka masukkan password : ");
        while ((key = getch()) != 13)
        {
            if (i < 0)
                i = 0;
            if (key == 8)
            {
                if (i == 0)
                    continue;
                else
                {
                    printf("\b \b");
                    i--;
                    continue;
                }
            }
            if (i == 8)
            {
                continue;
            }
            printf("*");
            pass[i] = key;
            i++;
        }
        pass[i] = '\0';
        for (int i = 0; i < 100; i++)
        {
            if (strcmp(id[i], name) == 0 && strcmp(password[i], pass) == 0)
            {
                system("cls");
                gotoxy(45, 5);
                printf("Selamat login berhasil.");
                Sleep(1000);
                menu();
            }
            else

            {
                system("cls");
                gotoxy(45, 5);
                printf("Maaf Id/Password salah.\n");
                Sleep(1000);
                milih8();
            }
        }
    }
}


void reg(){
    system("cls");
    gotoxy(40, 2);
    printf("Silahkan masukkan id : ");
    scanf("%s", &id[idx]);
    gotoxy(40, 3);
    printf("Silahkan masukkan password : ");
    scanf("%s", &password[idx]);
    idx++;
    milih8();
}
void animasi()
{
    int i;
    system("color F9");
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\tLoading");
    for (i=0;i<3;i++)
    {
        printf("%c", 254);
        sleep(1);
    }
}
void abc(char *namin)
{
    int i;
    for(i=0;i<15;i++)
   {
        if(namin[i]>=65&&namin[i]<=90)
       {
                namin[i]=namin[i]+32;
       }
        else if(namin[i]>=97&&namin[i]<=122)
       {
                 namin[i]=namin[i]-32;
       }
   }
}
void dafha()
{
    system("cls");
    gotoxy(30,5);printf("|==================================|");
    gotoxy(30,6);printf("| HARGA PEMESANAN HOTEL MAPAN TURU |");
    gotoxy(30,7);printf("|==================================|");
    gotoxy(30,8);printf("| Jenis Kamar:                     |");
    gotoxy(30,9);printf("|       >Kamar Regular             |");
    gotoxy(30,10);printf("|       Harga PerHari : Rp.450.000 |");
    gotoxy(30,11);printf("|      >Kamar VIP                  |");
    gotoxy(30,12);printf("|       Harga PerHari : Rp.650.000 |");
    gotoxy(30,13);printf("|==================================|");
    gotoxy(30,14);printf("Tekan Enter Untuk Ke Menu Utama");
    getch();
}
void struk()
{
    system("cls");
    for(i=0; i<x; i++){
    printf("\n|---------------------------------");
    printf("\n| Code............%02d            ", pelanggan[i].codepel);
    printf("\n| Nama............%s              ", pelanggan[i].napel);
    if(pelanggan[i].pil1==1){
    printf("\n| Jenis Kamar.....Regular         ");
    printf("\n| Harga...........Rp450.000       ");
    printf("\n|---------------------------------");
    }else if(pelanggan[i].pil1==2)
    {
    printf("\n| Jenis Kamar.....VIP             ");
    printf("\n| Harga...........Rp650.000       ");
    printf("\n|---------------------------------\n");
    }
    }
	getch();
}
void kamarvip()
{
    system("cls");
    gotoxy(30,5);printf("<<PEMESANAN KAMAR VIP SEDANG DI PROSES>>");
    gotoxy(30,6);printf(" ==TERIMA KASIH DAN SILAHKAN MENUNGGU== ");
}
void kamareg()
{
    system("cls");
    gotoxy(30,5);printf("<<PEMESANAN KAMAR REGULAR SEDANG DIPROSES>>");
    gotoxy(30,6);printf("   ==TERIMA KASIH DAN SILAHKAN MENUNGGU== ");
}
void dafpel()
{
    system("cls");
    gotoxy(30,4);printf("Masukkan jumlah tamu yang akan diinput : ");
	scanf ("%d", &jumlah);
	for(int i=0;i<jumlah;i++){
        system("cls");
        gotoxy(30,5);printf("#==================================#");
		gotoxy(38,6);printf("Data Tamu Hotel ke-%d",i+1);
		gotoxy(30,7);printf("#==================================#");
        gotoxy(30,9);printf("Masukkan Code Tamu                 : ");
		scanf("%d",&pelanggan[i+x].codepel);
	    gotoxy(30,10);printf("Masukkan Nama                      : ");
		scanf(" %[^\n]s",&pelanggan[i+x].napel);
		gotoxy(30,11);printf("Nomor Induk Keluaga/KTP            : ");
        scanf ("%d", &pelanggan[i+x].nk);
        gotoxy(30,12);printf("Jenis Kelamin                      : ");
        scanf (" %[^\n]s", &pelanggan[i+x].jk);
        gotoxy(30,13);printf("Nomor Telephone                    : ");
        scanf ("%d", &pelanggan[i+x].nom);
		for ( a = 0; pelanggan[i+x].napel[a]; a++)
    {
        if(pelanggan[i+x].napel[a]>96)
        pelanggan[i+x].napel[a]-=32;
        else{
            continue;
        }
    }
    gotoxy(30,15);printf("===========================");
    gotoxy(30,16);printf("|     PEMESANAN KAMAR     |");
    gotoxy(30,17);printf("===========================");
    gotoxy(30,18);printf("| 1.Kamar Regular         ");
    gotoxy(30,19);printf("| 2.Kamar VIP             ");
    gotoxy(30,20);printf("| Silahkan Pilih Kamar: ");
    scanf("%i",&pelanggan[i+x].pil1);
	}
    switch(pelanggan[i+x].pil1)
    {
    case 1:
        pelanggan[i+x].pil1 == '1';
        kamareg();
        break;
    case 2:
        pelanggan[i+x].pil1 == '2';
        kamarvip();
        break;
    default:
        system("cls");
        gotoxy(30,5);printf("MAAF PILIHAN TIDAK ADA");
    }
	x=x+jumlah;
}
void dapel()
{
    system("cls");
    if(x==0){
    printf("DATA NO IDENTIFIED");
	}else{
    printf("\n|===========================================|");
    printf("\n           DATA PELANGGAN HOTEL             |");
    printf("\n|===========================================|");
    for(i=0; i<x; i++){
    printf("\n|================= PELANGGAN ===============|");
    printf("\n| CODE          : %02d                      ", pelanggan[i].codepel);
    printf("\n| NAMA          : %s                        ", pelanggan[i].napel);
    printf("\n| NIK           : %02d                      ", pelanggan[i].nk);
    printf("\n| JENIS KELAMIN : %s                        ", pelanggan[i].jk);
    printf("\n| NOMOR TELEPON : %02d                      ", pelanggan[i].nom);
    printf("\n|===========================================|\n");
        }
	}
	getch();
}
void menu()
{
    system("cls");
    int posisi1 = 1;
    int keyPressed = 0;
    while (keyPressed != 13){
    gotoxy(30,5);printf("|======================|");
    gotoxy(30,6);printf("      W E L C O M E ");
    gotoxy(30,7);printf("|======================|");
    gotoxy(30,9);printf("======DAFTAR MENU======");
    gotoxy(30,10);panah(1, posisi1);printf("1. DAFTAR PELANGGAN");
    gotoxy(30,11);panah(2, posisi1);printf("2. DATA PELANGGAN");
    gotoxy(30,12);panah(3, posisi1);printf("3. STRUK");
    gotoxy(30,13);panah(4, posisi1);printf("4. DAFTAR HARGA HOTEL");
    gotoxy(30,14);panah(5, posisi1);printf("5. KEMBALI KE MENU UTAMA");

    keyPressed = getch();
        if(keyPressed==72)posisi1--;
        else if(keyPressed==80)posisi1++;
        if(posisi1>5)posisi1=1;
        if(posisi1<1)posisi1=5;
    }
    switch(posisi1)
    {
    case 1:
        dafpel();
        menu();
        break;
    case 2:
        dapel();
        menu();
        break;
    case 3:
        struk();
        menu();
        break;
    case 4:
        dafha();
        menu();
        break;
    case 5:
        main();
    }
}
void end(){
    system("cls");
    gotoxy(30,9);printf("||=======================================||");
    gotoxy(30,10);printf("||SELAMAT MENIKMATI  FASILITAS HOTEL KAMI||");
    gotoxy(30,11);printf("||       SEMOGA TURU ANDA NYENYAK        ||");
    gotoxy(30,12);printf("||=======================================||");
    exit(0);
}
