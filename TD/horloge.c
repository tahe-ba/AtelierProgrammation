#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main(){

int h, m, s;
printf("Time reset\n");
do {
printf("Hours :");
scanf("%d", &h);
}while ((h > 12)||(h<0));

do {
printf("Minutes :");
scanf("%d", &m);
}while ((m > 60)||(m<0));

do {
printf("Seconds :");
scanf("%d", &s);
}while ((s > 60)||(s<0));

while (1) {

  s += 1;

  if (s > 59) {
    m += 1;
    s = 0;
  }

  if (m > 59) {
    h += 1;
    m = 0;
  }

  if (h > 12) {
    h = 1;
    m = 0;
    s = 0;
  }

printf("\n%02d:%02d:%02d", h, m, s);
sleep(1);
system("clear");
}
getchar();
}
