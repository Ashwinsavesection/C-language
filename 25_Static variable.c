 #include<stdio.h>

 void display();

 int main()
 {
     display();
     display();

 }

 void display()
 {
     static int a=1;
     a++;
     printf("\na : %d",a);
 }
