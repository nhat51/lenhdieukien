#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float diem;
	printf ("nhap diem: ");
	scanf ("%f",&diem);
	
	if (diem>=75)
	printf ("hoc sinh loai A");
	else if (diem>=60 && diem<75)
	printf ("hoc sinh loai B");
	else if (diem>=45 && diem<60)
	printf ("hoc sinh loai C");
	else if (diem>=35 && diem<45)
	printf ("hoc sinh loai D");
	else if (diem<35)
	printf ("hoc sinh loai E");
	return 0;
}
