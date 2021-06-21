#include <stdio.h>
int main(){
int a,b,c,d,e;
int a1,b1,c1,d1,e1,cont=0;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
scanf("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1);
if(a==a1){
    cont+=1;}
if(a==a1){
    cont+=1;}
if(b==b1){
    cont+=1;}
if(c==c1){
    cont+=1;}
if(d==d1){
    cont+=1;}
if(e==e1){
    cont+=1;}
if(cont>=1){
    printf("N\n");}
else{
    printf("Y\n");}
    return 0;
}
