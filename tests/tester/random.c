#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/time.h>
#include <fcntl.h>

unsigned char randf(){
unsigned char q = rand() % 256;
int r = 0;
	while (r == 0){
	if ((int)q >48 && (int)q <57) return q;
	else if ((int)q >=65 && (int)q <=90) return q;
	else if ((int)q >=97 && (int)q <=122) return q;
	else q = rand() % 256;
	}
}


int main( int argc, char *argv[]){
  
  const double a = 238921322517103368112845279054903800379421551978588696258947616096422593232665639012404465455857344126173301756815293805508058786671872447586949990591923360401838188266875203934184848951363652863528203404181504.000000;
  const double b = 241867489754409761784853887148857812831032462097093120489491303089475928849948708392438605634091323832232515650889534696957374796590626318973364710748330437097894710236440771532141525330974248017393816763411283320560482971569325342720.000000;
  const double c = 9975345104314716621530284867022580404861194262478918706983025907125731372474490359824135866947182156383984283376709262910553492457956445834559745798755736093794391443869616411858813358158918456352690153702658885961945272005882326430822754111708179830696860188672.000000;
  
 // int j =4;
 // unsigned char *test = "0004";//(unsigned char*)j;
/*unsigned char buf[8];
unsigned char buf2[8];
int i, j;
FILE *x;
FILE *y;
x=fopen("doublep.txt", "w");
y=fopen("doublepg.txt", "w");
for (j = 0; j<11; j++){
	memset(buf, 0, 8);
	memset(buf2, 0, 8);
	for (i = 0; i < 8; i++) {
	    buf[i] = randf();
	    printf("This is buffer 1, char %d: %c\n", i, buf[i]);
		}
	fprintf(x,"%s",buf);
	fprintf(y,"%s\n",buf);
	printf("This is key: %s\n", buf);
	for (i = 0; i < 8; i++) {
	    buf2[i] = randf();
		}
		fprintf(x, "%s\n", buf2);
}
	fclose(x);
	fclose(y);  */

printf("This is double a:\n%f\nThis is double b:\n%f\nThis is double c:\n%f\n", a,b,c);
if (a ==b) printf("\nA DOES EQUAL B AND WE HAVE FLOATING POINT COMPARISON PROBLEMS!\n");
if (c ==b) printf("\nC DOES EQUAL B AND WE HAVE FLOATING POINT COMPARISON PROBLEMS!\n");
if (a ==c) printf("\nA DOES EQUAL C AND WE HAVE FLOATING POINT COMPARISON PROBLEMS!\n");

//printf("This is #4 in char* %d\n", atoi(test));
//int r = 4;
//printf("This is a number in converted to byte  %c \n", (unsigned char)&r);
}