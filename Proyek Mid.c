#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int n,z;
int c,y;
int m=3;
int streak, score, addscore;
char a[4][34]={"     _     _  _      _  _      _  ", "|\\/||_|\\/|| ||_/\\_/ |_ |_||\\/||_ |", "|  ||_|  ||_|| \\ |  |_|| ||  ||_ .", "__________________________________"};
char b[3][29]={" __  __  __  _  __     __","| _ |  ||  || \\|__|\\_/|__ |","|__||__||__||_/|__| | |__ ."};

void help();
void help2();
void help3();

int close(){
	int i, j;
	for	(i=0;i<3;i++){
		for(j=0;j<29;j++){
			printf("%c", b[i][j]);
			Sleep(10);
		}
		printf("\n");
	}
	return 0;
}

void title(){
	int i, j;
	for	(i=0;i<4;i++){
		for(j=0;j<34;j++){
			printf("%c", a[i][j]);
			Sleep(10);
		}
		printf("\n");
	}
	printf("\n");
}

void header(){
	int i, j;
	for	(i=0;i<4;i++){
		for(j=0;j<34;j++){
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}

void scorecount(){
	score+=addscore+((streak-1)*20);
}

int errorweird4(){
	int err;
	err = getch();
	if(err==224){
		switch(getch())
		{
			case 72:{
				checkcursor4();
				break;
			}
			case 75:{
				checkcursor4();
				break;
			}
			case 77:{
				checkcursor4();
				break;
			}
			case 80:{
				checkcursor4();
				break;
			}
		}
	} else{
		checkcursor4();
	}
}

int errorweird3(){
	int err;
	err = getch();
	if(err==224){
		switch(getch())
		{
			case 72:{
				checkcursor3();
				break;
			}
			case 75:{
				checkcursor3();
				break;
			}
			case 77:{
				checkcursor3();
				break;
			}
			case 80:{
				checkcursor3();
				break;
			}
		}
	} else{
		checkcursor3();
	}
}

int errorweird2(){
	int err;
	err = getch();
	if(err==224){
		switch(getch())
		{
			case 72:{
				checkcursor2();
				break;
			}
			case 75:{
				checkcursor2();
				break;
			}
			case 77:{
				checkcursor2();
				break;
			}
			case 80:{
				checkcursor2();
				break;
			}
		}
	} else{
		checkcursor2();
	}
}

int movecursor4(int move){
	z=z+move;
	if(z<0){
		z+=2;
		y=z%2;
	} else if(z>=0){
		y=z%2;
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {1, y+18};
	SetConsoleCursorPosition(hConsole, pos);
	checkcursor4();
}

int movecursor3(int move){
	z=z+move;
	if(z<0){
		z+=2;
		y=z%2;
	} else if(z>=0){
		y=z%2;
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {1, y+18};
	SetConsoleCursorPosition(hConsole, pos);
	checkcursor3();
}

int movecursor2(int move){
	z=z+move;
	if(z<0){
		z+=2;
		y=z%2;
	} else if(z>=0){
		y=z%2;
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {1, y+18};
	SetConsoleCursorPosition(hConsole, pos);
	checkcursor2();
}

int checkcursor4(){
	int ch, move1, err;
	ch=getch();
	if(ch==224){
		switch(getch())
		{
			case 72:{
			move1=-1;
			movecursor4(move1);
			break;
			}
			case 80:{
			move1=1;
			movecursor4(move1);
			break;
			}
			case 75:{
				errorweird4();
			}	
			case 77:{
				errorweird4();
			}
		}
	} else if(ch==13){
		if(y==0){
			system("cls");
			help2();
		} else if (y==1){
			system("cls");
			c=0;
			mainmenu();
		}
	} else {
		errorweird4();
	}
}

int checkcursor3(){
	int ch, move1, err;
	ch=getch();
	if(ch==224){
		switch(getch())
		{
			case 72:{
			move1=-1;
			movecursor3(move1);
			break;
			}
			case 80:{
			move1=1;
			movecursor3(move1);
			break;
			}
			case 75:{
				errorweird3();
			}	
			case 77:{
				errorweird3();
			}
		}
	} else if(ch==13){
		if(y==0){
			system("cls");
			help();
		} else if (y==1){
			system("cls");
			help3();
		}
	} else {
		errorweird3();
	}
}

int checkcursor2(){
	int ch, move1, err;
	ch=getch();
	if(ch==224){
		switch(getch())
		{
			case 72:{
			move1=-1;
			movecursor2(move1);
			break;
			}
			case 80:{
			move1=1;
			movecursor2(move1);
			break;
			}
			case 75:{
				errorweird2();
			}	
			case 77:{
				errorweird2();
			}
		}
	} else if(ch==13){
		if(y==0){
			system("cls");
			c=0;
			mainmenu();
		} else if (y==1){
			system("cls");
			help2();
		}
	} else {
		errorweird2();
	}
}

int setcursor4(){
	HANDLE jConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD possss = {1, 18};
	SetConsoleCursorPosition(jConsole, possss);
	checkcursor4();
}

int setcursor3(){
	HANDLE iConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD posss = {1, 18};
	SetConsoleCursorPosition(iConsole, posss);
	checkcursor3();
}

int setcursor2(){
	HANDLE gConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD poss = {1, 18};
	SetConsoleCursorPosition(gConsole, poss);
	checkcursor2();
}

void help3(){
	int check=3;
	header();
	printf("Step 3\n\n");
	printf("Jika jawaban anda benar, barisnya akan seperti ini :\n");
	printf("[ 1 0 0 0 0 ]\n");
	printf("[ 0 0 0 0 1 ]\n\n");
	printf("Namun, jika salah akan seperti ini.\n");
	printf("[ 0 0 0 0 0 ]\n");
	printf("[ 0 0 0 0 0 ]\n\n");
	printf("Jangan lupa, anda hanya dapat membuat kesalahan sebanyak 3 kali.\n\n\n");
	printf("[ ]Step 2\n");
	printf("[ ]Kembali ke menu\n\n");
	printf("Gunakan kursor atas/bawah untuk memilih menu, lalu tekan enter.");
	setcursor4();
}

void help2(){
	int check=2;
	header();
	printf("Step 2\n\n");
	printf("Anda akan diberikan 2 baris kosong, dan diberikan kesempatan menjawab dengan angka 1-6\n\n");
	printf("Sebagai Contoh:\n");
	printf("[ 0 0 0 0 0 ]\n");
	printf("[ 0 0 0 0 0 ]\n\n");
	printf("Baris 1, Kolom ke : 1\n");
	printf("Baris 2, Kolom ke : 2\n\n\n\n");
	printf("[ ]Step 1\n");
	printf("[ ]Step 3\n\n");
	printf("Gunakan kursor atas/bawah untuk memilih menu, lalu tekan enter.");
	setcursor3();
}

void help(){
	int check=1;
	header();
	printf("Step 1\n\n");
	printf("Anda diberikan dua baris yang terdiri dari 5 angka\n\n");
	printf("Sebagai Contoh:\n");
	printf("[ 1 2 3 4 5 ]\n");
	printf("[ 5 4 3 2 1 ]\n\n");
	printf("Hafalkan posisi kelima pasangan angka dari kedua baris tersebut.\n\n");
	printf("Contoh, angka 1 berpasangan pada :\n");
	printf("Kolom-1 Baris-1, dan Baris-2 Kolom-5.\n\n");
	printf("[ ]Kembali ke menu\n");
	printf("[ ]Step 2\n\n");
	printf("Gunakan kursor atas/bawah untuk memilih menu, lalu tekan enter.");
	setcursor2();
}

void input(int *point1, int *point2){
	int a, b, j, count;
	printf("\n");
	printf("Baris 1, Kolom ke : ");
	while((count=scanf("%d", &a)) != 1 || a<1 || a>5 ){
		if(count==EOF){
			;
		} else if (count==0){
			int ch;
			while(((ch=fgetc(stdin)) != '\n') && (ch!=EOF)){
				;
			}
		} 
		system("cls");
		header();
		printf("  Hanya boleh input angka 1-5!\n");
		printf("   Kembali ke main menu dalam\n ");
		for(j=5;j>=0;j--){
			printf("	  	%d",j);
			Sleep(1000);
			printf("\r");
		}
		system("cls");
		mainmenu();
	}
	if(a>0&&a<6){
		printf("Baris 2, Kolom ke : ");
		while((count=scanf("%d", &b)) != 1 || b<1 || b>5 ){
			if(count==EOF){
				;
			} else if (count==0){
				int ch;
				while(((ch=fgetc(stdin)) != '\n') && (ch!=EOF)){
					;
				}
			} 
			system("cls");
			header();
			printf("  Hanya boleh input angka 1-5!\n");
			printf("   Kembali ke main menu dalam\n ");
			for(j=5;j>=0;j--){
				printf("	  	%d",j);
				Sleep(1000);
				printf("\r");
			}
			system("cls");
			mainmenu();
		}
		if(b>0&&b<6){
			*point1 = a;
			*point2 = b;
		}
	}
}

void printcase(int a[m], int b[m], int c[m], int d[m]){
	header();
	int i;
	printf("[ ");
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	printf("]\n");
	printf("[ ");
	for(i=0;i<5;i++){
		printf("%d ", b[i]);
	}
	printf("]\n\n");
    printf("Tekan apa saja apabila anda sudah siap bermain");
    getch();
    system("cls");
    header();
	printf("[ ");
	for(i=0;i<5;i++){
		printf("%d ", c[i]);
	}
	printf("]\n");
	printf("[ ");
	for(i=0;i<5;i++){
		printf("%d ", d[i]);
	}
	printf("]\n");    
}

void printprogress(int c[m], int d[m], int counter){
	system("cls");
	int i;
	header();
	printf("[ ");
	for(i=0;i<5;i++){
		printf("%d ", c[i]);
	}
	if(counter==1){
		printf("]		Mistake : %d\n", counter);
	} else {
		printf("]		Mistakes : %d\n", counter);		
	} 
	printf("[ ");
	for(i=0;i<5;i++){
		printf("%d ", d[i]);
	}
	printf("]		Score : %d\n", score);
}

void generator(int a[m], int b[m]) 
{
    int lower = 1, upper = 5; 
    srand(time(0)); 
    int i, j;
	bool arr[5]={0};
	bool brr[5]={0};
    for (i = 0; i < 5; i++) { 
        int num = (rand() % 5) + 1;
        if(!arr[num]){
 	       a[i]=num;
		} else {
			i--;
		}
		arr[num]=1;
    } 
    for (i = 0; i < 5; i++) { 
        int num = (rand() % 5) + 1;
        if(!brr[num]){
 	       b[i]=num;
		} else {
			i--;
		}
		brr[num]=1;
    }
} 

void *checker(int a[m], int b[m], int c[m], int d[m], int *point3, int *point4, int input1, int input2){
	int tr, fa;
	if(a[input1-1]==b[input2-1]){
		if(c[input1-1]==0&&d[input2-1]==0){
			c[input1-1]=a[input1-1];
			d[input2-1]=b[input2-1];
			tr=1;
			fa=0;
			*point3=tr;
			*point4=fa;
			streak+=1;
			addscore=50;
		} else{
			tr=0;
			fa=1;
			*point3=tr;
			*point4=fa;
			streak=0;
			addscore=-15;
		}
	} else{
		tr=0;
		fa=1;
		*point3=tr;
		*point4=fa;
		streak=0;
		addscore=-15;
	}
}

void startgame(){
	int a[5];
	int b[5];
	int c[5]={0,0,0,0,0};
	int d[5]={0,0,0,0,0};
	int input1, input2, summer1, summer2, counter1=0, counter2=0, i;
	int *point1, *point2, *point3, *point4, *point5;
	point1 = &input1;
	point2 = &input2;
	point3 = &summer1;
	point4 = &summer2; 
    generator(a, b);
	printcase(a, b, c, d);
	for(i=0;i<8;i++){
		input(point1, point2);
		checker(a, b, c, d, point3, point4, input1, input2);
		counter1=counter1+summer1;
		counter2=counter2+summer2;
		scorecount();
		printprogress(c, d, counter2);
		if(counter1==5){
			printf("\nSelamat! Anda telah berhasil menyelesaikan permainan ini!");
			i=8;
		} else if(counter2==3){
			printf("\nAnda gagal karena telah melakukan kesalahan sebanyak 3 kali.");
			i=8;
		}
	}
	score=0;
	streak=0;
	printf("\n\n");
	printf("Tekan apapun untuk kembali ke main menu.");
	getch();
	system("cls");
	mainmenu();
}

int movecursor(int move){
	n=n+move;
	if(n<0){
		n+=3;
		c=n%3;
	} else if(n>=0){
		c=n%3;
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {1, c+5};
	SetConsoleCursorPosition(hConsole, pos);
	checkcursor();
}

int errorweird(){
	int err;
	err = getch();
	if(err==224){
		switch(getch())
		{
			case 72:{
				checkcursor();
				break;
			}
			case 75:{
				checkcursor();
				break;
			}
			case 77:{
				checkcursor();
				break;
			}
			case 80:{
				checkcursor();
				break;
			}
		}
	} else{
		checkcursor();
	}
}

int checkcursor(){
	int ch, move, err;
	ch=getch();
	if(ch==224){
		switch(getch())
		{
			case 72:{
			move=-1;
			movecursor(move);
			break;
			}
			case 80:{
			move=1;
			movecursor(move);
			break;
			}
			case 75:{
				errorweird();
			}	
			case 77:{
				errorweird();
			}
		}
	} else if(ch==13){
		if(c==0){
			system("cls");
			startgame();
		} else if (c==1){
			system("cls");
			help();
		} else if (c==2){
			system("cls");
			close();
		}
	} else {
		errorweird();
	}
}

int setcursor(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {1, 5};
	SetConsoleCursorPosition(hConsole, pos);
	checkcursor();
}

int printmenu(){
	printf("[ ]Start Game\n");
	printf("[ ]Help\n");
	printf("[ ]Exit\n");
	printf("\n");
	printf("Gunakan kursor atas/bawah untuk memilih menu, lalu tekan enter.");	
}

int mainmenu(){
	header();
	printmenu();
	setcursor();
}

int menu(){
	title();
	printmenu();
	setcursor();
}

int main(){
	system("color 71");
	menu();
}
