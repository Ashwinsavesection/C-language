 #include<stdio.h>

 void display();

 int a=5;

 int main()
 {
     printf("\nValue of A : %d",a);
     display();
     return 0;
 }

 void display()
 {
     a++;
     printf("\nValue of global variable : %d",a);
 }
