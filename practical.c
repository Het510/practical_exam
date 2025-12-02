// QUE = 5

#include <stdio.h>

struct student {
    int id;
    char *name;
    int marks;
};

int main(){
   
    struct student s1;

    s1.id = 110;
    s1.name = "Het";
    s1.marks = 50;


   printf("%d \n",s1.id);
   printf("%s \n",s1.name);
   printf("%d \n",s1.marks);


   return 0;
}


// QUE = 4

#include <stdio.h>

int main(){
   
    char name;

     printf("Enter a character: ");
     scanf("%c", &name);

    if(){
        printf("vowel");
    }
    else{
        printf("consonat");
    }
  
    return 0;
}


//QUE = 3

#include <stdio.h>

int fibbo(int f1,int f2,int count){

    return 1;
}

int main(int n){

int f1=f2;
int f2=f3;
int f3=f1+f2;
 
  printf("%d \n",fibbo(n));

    return f1,f2,f1+f2,count;
}


//QUE = 2

#include <stdio.h>

int main(){
 
 int n1,n2,cal;

 printf("Enter first number: ");
 scanf("%d", &n1);
 printf("Enter second number: ");
 scanf("%d", &n2);


 switch(cal){
    
  case 1: printf("%d \n",n1+n2);
         break;
  case 2: printf("%d \n",n1-n2);
         break;       
  case 3: printf("%d \n",n1*n2);
         break;
  case 4: printf("%d \n",n1/n2);
         break;
  case 5: printf("%d \n",n1%n2);
         break;
  default printf("Error");
 }   
return 0;

}

// QUE = 1;

#include <stdio.h>

int main(){

int mat [3] [3] = {{1,2,3},{4,5,6},{7,8,9}};
int sum2 = 0;

for(int i=0;i<=3;i++){
    sum2 =sum2 + mat[1][i];
}
 printf("%d \n",sum2);

    return 0;
}
