#include <stdio.h>
/*int main (){
   printf("hello world \n");
   return 0 ;
}
*/
/*int main() {
   printf("%1u",sizeof(double));
   return 0 ;
}*/


/*int main(){
   int a;
   scanf("%d",&a);
   int b;
   scanf("%d",&b);
   printf("%d",a+b);
   return 0;
}*/


/*int main(){
   printf("give a\n");
   int a,b;
   scanf("%d",&a);
   printf("give b\n");
   scanf("%d",&b);
   printf("sumis\n");
   printf("%d", a+b);
   return 0;

}*/

//operators in c
/*int main(){
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   printf("a+b = %d\n",a+b);
   printf("a-b = %d\n",a-b);
   printf("a*b = %d\n",a*b);
   printf("a/b = %d\n",a/b);
   printf("a%b = %d\n",a%b);


}*/

//logical operators
/*int main(){
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   printf("%d\n",a==b);
   printf("%d\n",a>b);
   printf("%d\n",a<b);
   printf("%d\n",a>=b);
   printf("%d\n",a!=b);
}
*/
//logical operators 0 has value of false and integer  has value true 
/*int main(){
   int a =0;
   int b =78;
   printf("a and b is = %d\n",a&&b);
   printf("not a is =%d\n",!a);
   printf("not b is = %d\n",!b);
   printf("a or b is =\n%d",a||b);

}*/
//bit wise operators
/*int main (){
   int a = 2;
   int b = 3;
   printf("%d",a&b);
   printf("%d",a|b);
   printf("%d",a^b);


}*/
//format specifier
/*int main(){
   int a = 8;
   float b = 7.33;
   printf("value of a %d and value of b is %f", a,b);

}*/
// format specifier %x.yformatspecifier
/*int main (){
   float a = 10.45;
   float b = 11.33;
   printf("%8.4f\n",a);
   printf("%-8.4f\n",b);


}*/
//badd mein space chorega
/*int main(){
   float a;
   scanf("%f",&a);
   printf("%-18.4f the ans is",a);
   
}*/
// constants
// 1. by writing const
/*int main(){
   const int a = 35;
   a = 36;   //not possible bcz defined as a constant
   printf("%f",a);
}*/

// 2. by using #define
/*#define m=34
int main(){
   m = 45 //not possible kyunki yeh value defined hai
   printf("%d",m);
}*/


//escape sequences \n , \b ,\t(horizontal space) 
// \v(vertical tab(space)),\a(windows sound), 
// \\(toprint backalash);\'(single quote);\""(double quote)
/*int main(){
   int a;
   scanf("%d",&a);
   printf("iam a robot \" %5.6d",a);
}*/


//if else statement
/*int main (){
   int a,b;
   printf("enter number a\n");
   scanf("%d",&a);
   printf("enter number b\n");
   scanf("%d",&b);
    if(a>b){
      printf("true");
    }
    else if(a==b){
      printf("they are equal");
    }
    else{
      printf("it is smaller");
    }
   
}*/


// switch statement
/*int main(){
   printf("enter your age - \n");
   int age;
   scanf("%d",&age);
   switch(age){
      case 1 : printf("your age is 1\n");
      break;
      case 2 : printf("your age is 2\n");
      break;
      case 3 : printf("the age is 3\n");
      break;
      default : printf("you are above 3\n");

   }
   


}*/
// if no break
/*int main(){
   printf("enter your age - \n");
   int age;
   scanf("%d",&age);
   switch(age){
      case 1 : printf("your age is 1\n");
      case 2 : printf("your age is 2\n");
      case 3 : printf("the age is 3\n");
      default : printf("you are above 3\n");

   }   
}
*/

// nested switch ( switch ke andar switch) maine khud se likha
/*int main (){
   int class;
   int section;
   printf("enter class 1or 2\n");
   scanf("%d",&class);
   printf("enter your section you want to to go 1 or 2\n");
   scanf("%d",&section);
   switch(class){
      case 1:printf("welcome to class 1 \n");
      switch (section){
         case 1 : printf(" 1 sec is available for class 1\n");
         break;
         case 2 : printf("2 sec is full but 3 seats are available for class 1\n");
         default : printf("bye have fun\n");

      }
      break;
      case 2 : printf("welcome to class 2 \n");
      switch(section){
         
         case 1 : printf(" a sec is not available for class 2\n");
         break;
         case 2 : printf("b sec sec is available for class 2\n");
         default : printf("class 2 mein enjoy karo\n");
         

      }
      break;
      default : printf("you are in class above 2");


   }



}*/

// loops

//do while loops
/*int main (){
int number;
scanf("%d",&number);
int i = 0;
do{
   
   printf("%d\n",i);
   i++;

}
while(i<=number);
}*/

//while
/*int main () {
   printf("enter the number \n");
   int n;
   scanf("%d",&n);
   int i;
   while (i<=n){
      printf("%d\n",i);
      i++;
   }

}*/

//for loops
/*int main (){
   printf("enter first number \n");
   int n;
   scanf("%d",&n);
   int i;
   for (i=0;i<=n;i++){
      printf("%d\n",i);
   }
   

}
*/

// 2 variable in for loop
/*int main(){
   int n;
   scanf("%d",&n);
   int i,j;
   for(i=0,j=0;i<n,j<=n;i++,j++)
   {
      printf("%d %d\n",i,j);
   }
}*/

// more than 2 variable in expression-2 last wali conditio ko hi lega
/*int main(){
   int i,j;
   for(i=0,j=0;j<3,i<5;i++,j++){
      printf("%d %d\n",i,j);
      

   }

}
*/

//break statements
 /*int main(){
   int n;
   scanf("%d",&n);
   int i;
   for(i=0;i<n;i++){
      printf("%d",i);
      if(n%2==0){
         break;
      }
      
      
     
   }
 }*/

///break 

/*int main(){
   int i;
   int age;
   for ( i = 0; i <10; i++)
   {
      printf("%d\n enter your age\n",i);
      scanf("%d",&age);
      if (age==10){
         break;
      }

   }
   
}*/

//continue statements - skip a code 
/*int main(){
   int i,age;
   for ( i = 0; i < 15; i++)
   {
      printf("%d\n",i);
      printf("enter your age\n");
      scanf("%d",&age);
      if (age%2==0)
      {
         continue;
      }
      printf(" hi");
      
   }
   
}*/


// got to ststements
/*yeh program mein inf loop hain 
baar baar hello world and in label print hoga*/
/*int main(){
   label:
   printf("in label");
   printf("hello world");
   goto label;
}*/
//end the go to , yahan hello world print nahi hoga
/*int main(){
   label:
   printf("in label\n");
   goto end;
   printf("hello world\n");
   goto label;
   end:
   printf("we are ended\n");

}*/

//when to use goto
/*int main(){
   int i,j,num;
  
   for ( i = 0; i < 8; i++)
   {
    printf("%d\n",i);
    for ( j = 0; j <8; j++)
    {
      printf("enter the number\n enter 2 for exit\n");
      scanf("%d",&num);
      if(num==2){
         goto end;
      }
    }
    
   }
   end:
    printf("exit loop");
    
   

}*/
// type casting in c
/*int main(){
   float b = 54.778;
   printf("%d\n",(int)b);
   }*/
   
/*functions in c*/
//with arguments and with return value
/*int sum(int a, int b){  //define function//
   return a+b;
}

int main(){
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   c=sum(a,b);        // call function 
   printf("%d",c);


}*/

//with arguments without return value\
//(jab no return value then no arguments)
/*void printstar(int n){
   int i;
   char a ='*';
   while(i<n){
      printf("%c",a);
      i++;
   }
}
int main(){
   int n;
   scanf("%d",&n);
   printstar(n);

}*/


// without argument with return value
//user se input lene wala fxn jaise
/*int takenumber(){
   int a;
   scanf("%d",&a);
   return a;
}
int main(){
   int c;
   c = takenumber();
   printf("the number took  is %d\n",c);
}

*/

/*without argument and without return value*/
/*void coursename(){
   printf("this course is c tutorial welcome");
}
int main(){
   coursename();
}
*/

// recurssions in c 
// factorial 
/*int fac (int n){
   if(n==0||n==1){
      return 1;
   }
   else{
      return  (n)*(fac(n-1));
   }
}
int main(){
   int number,c;
   printf("enter number\n");
   scanf("%d",&number);
   c = fac(number);
   printf("%d",c);

}*/

//arrays in c

/*int main(){
   int marks [4];
   marks [0]=34;
   printf("the vaue of first element in marks  is %d",marks[0]);

}*/
// array input from user
/*int main(){
   int i = 0;
   int marks[4];  //array defined
   while (i<4)
   {
      printf("enter the marks at the position %d\n",i);
      scanf("%d",&marks[i]);\
      i++;
   }
   i = 0;
   while(i<4)
   {
      printf("the marks at position %d is %d\n",i,marks[i]);
      i++;
   }
   
   
   
}*/
//2d array
/*int main(){
   int marks [3][3] = {{1,2,3},
                       {7,8,9},
                       {4,5,6}};
   int i = 0;
   int j = 0;
  for ( i = 0; i < 3; i++)
  {
   for ( j = 0; j < 3; j++)
   {
      printf("%d",marks[i][j]);
   }
   printf("\n");
  }
  
    
   
   }*/


//pointers in c
/*int main(){
   int a = 76 ;
   int*ptr=&a;
   printf("%d",*ptr);
}
*/
//null pointer also
//agar  %x karange to memory adress hexa decimal mein mil jayegi
/*int main(){
   int a;
   printf("enter the number\n");
   scanf("%d",&a);
   int*ptrn=NULL; 
   int *ptr=&a;
   printf("the adress of a is %x\n",ptr);
   printf("the adress of pointer is %x\n",&ptr);//&ptr is adreess of ptr
   printf("the value of stored pointer is %d\n",*ptr);
   printf("the value  pointer is %d\n",ptrn);

}*/
//pointer arthemetic
/*int main(){
   int a = 2;
   int*ptr = &a;
   printf("adress of a in integer is %d\n",ptr);
   ptr++;
   printf("the adress + 1 size od int is%d",ptr);

}
*/
/*int main(){
   char a = '3';
   char*ptr =&a;
   printf("%d\n",ptr);
   ptr++;
   printf("%d",ptr);


}
*/
//link of arrays and pointer
/*int main(){
   int arr[] = {1,2,3,55};
   int *ptr = &arr[4];
   printf("%d\n",&arr[4]);
   printf("adress of arr[4] = %d\n",ptr);
   ptr--;
   printf("by doing -- to ptr = %d\n",ptr);
   printf("%d\n",arr[3]);
   printf("the adress of arr+1%d\n",arr+3);
   printf("the value arr[2]+1 %d\n",*(&arr[2]+1));




   return 0;
}
*/
//call by refrence
 /*int swap(int*x,int*y){
   int z;
   z=*x;
   *x=*y;
   *y=z;
   
   return (*x,*y);
 }
 int main(){
int a,b;
printf("enter a\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
swap(&a,&b);
printf("a is %d\nb is%d\n",a,b);

 }*/


//change value of variable by call by refrence
/*int change(int*c){
   *c=655;
   return(*c);

}
int main(){
   int a;
   scanf("%d",&a);
   printf("before change %d\n",a);
   change(&a);
   printf("after change %d",a);



}*/
//passing arrays in fxn

/*int func(int *ptr){
   for (int i = 0; i < 5; i++)
   {
      printf("the value of element%d is \n%d\n",i ,ptr[i]);
   }
   
}
int main(){
   int arr[]={1,3,5,7,9};
   func(arr);
}*/
//next avg
/*int sum(int *ptr){
   int add=0;

   for (int i = 0; i < 5; i++)
   {
     *ptr=*(ptr+i);
     add = add + *ptr;
   }
   printf("%d",add);
   
}
int main(){
   int arr[] = {6,2,3,56,5};
   sum(arr);
}
*/
// strings in c
/*int main(){
   char str[7];
   gets(str);
   printf("%s",str);
   
}*/
// next way
/*int main(){
   char ch[5]={'a','m','j','c','\0'};
   for (int i = 0; i < 5; i++)
   {
      printf("%c",ch[i]);
   }
}
*/
// string fxn in c
#include<string.h>
int main(){
   char s1[]="garv";
   char s2[]="arora";
   //puts(strcat(s1,s2));
   //printf("%d",strlen(s1));
  //puts(strrev(s1));
 /* strcpy(s1,s2);   \\s2 is copied to s1;
  puts(s1);*/
int t = strcmp(s1,s2);
printf("%d",&t);

}