#include<stdio.h>
#include<math.h>
int main(){
int age;
printf("enter age=");
scanf("%d", &age);

if(age > 24){
    printf("adult \n");
    printf("can vote \n");
}
else {
    printf("not adult \n");
}
   
    return 0;

}
 