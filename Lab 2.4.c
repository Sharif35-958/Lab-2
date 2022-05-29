/*4. A five-digit number is entered through the keyboard.
Write a program to obtain the reversed number and to
 determine whether the original and reversed numbers are equal or not.*/

 #include<stdio.h>
 int main()
 {
     int num,rev_num=0,reminder;
     printf("enter the number to reverse:");
     scanf("%d",&num);
     while (num!=0){
        reminder=num%10;
        rev_num=rev_num*10+reminder;
        num=num/10;
     }
     printf("the reverse number is %d\n",rev_num);
     if(rev_num==num){
        printf("numbers are equal");
     }
     else{
        printf("Numbers are not equal");
     }
     return 0;
 }
