#include <stdio.h>
#define 11ENWprobb "input.txt"
int main () {
int i,cases;
long int n,d,temp;
FILE *fin;
if( (fin=fopen(11ENWprobb,"r"))==NULL ) exit(1);
fscanf(fin,"%d",&cases);
for(i=0;i<cases;i++) {
fscanf(fin,"%ld %*c %ld",&n,&d);
while(n!=1 || d!=1) {
if( (n-d)>0 ) {
temp=n-d;
n=d;
d=temp;
printf("R");
}
else {
temp=d-n;
d=n;
n=temp;
printf("L");
}
}
printf("\n");
}
fclose(fin);
exit(0);
}
