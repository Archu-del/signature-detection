
//#include <stdio.h>

int main() {
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0){
    printf("number is positive ");
    }
    else{
        printf("number is negative ");
    }
    return 0;
}





// num divisible by 7
// #include <stdio.h>
int main(){
    int num ;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%7==0){
        printf("divisible by 7");
    }else{
        printf(" not divisible by 7");
    }
    return 0;
}






// #include <stdio.h>
int main(){
char i;
printf("enter a letter:");
scanf("%c",&i);
if(i>65 && i<90){
    printf("uppercase");
}else{
    printf("lower case");
}

    return 0;
}




// #include <stdio.h>

int main(){
int age;
printf("enter a age:");
scanf("%d",&age);
if(age >= 18){
    printf("eligible for vote");
}else
{
    printf("not eligible for vote");
}
return 0;
}





// #include <stdio.h>

int main(){
int num;
printf("enter a num:");
scanf("%d",&num);
if(num%10 == 0){
    printf("mutiply by 10");
}else
{
    printf("not mutiply by 10");
}
return 0;
}



// #include <stdio.h>

int main(){
int num;
printf("enter the number:");
scanf("%d",&num);
if(num%2==0){
    printf("even number\n");
}else{
    printf("odd number\n");
}
    return 0;
}



// #include <stdio.h>

int main(){
int yr;
printf("enter a year:");
scanf("%d",&yr);
if(yr%400==0 || (yr%4==0 && yr%100!=0))  {
    printf("leap year\n");
}else{
    printf("not leap year\n");
}
    return 0;
}




// #include <stdio.h>

int main(){
int i,j;
int n=5;
printf("pattern is\n");
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf(" * ");
    }
    printf("\n");
}
    return 0;
}






// #include <stdio.h>

int main(){
    char pwd[20];
    
    printf("enter a password:");
    scanf("%s",pwd);
    if(strcmp(pwd, "admin123") == 0)
    {
    printf("access granted");
    }else{
        printf("access denied");
    }
    return 0;
}



// #include <stdio.h>

int main(){
    char ch;
    printf("enter a character:\n");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("vowel\n");
    }
    else{
        printf("constant\n");
    }
    return 0;
}



// #include <stdio.h>

int main(){
    char ch;
    printf("enter a character:\n");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("vowel\n");
    }
    else{
        printf("constant\n");
    }
    return 0;
}





// #include <stdio.h>

int main(){
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if(marks>=90){
        printf("grade A");
    }
    else if(marks>=75){
        printf("grade B");
    }
    else if(marks>=60){
        printf("grade C");
    }
    else if(marks>=40){
        printf("grade D");
    }
    else{
        printf("fail");
    }
    return 0;
}





// #include <stdio.h>

int main(){
    int num ;
    printf("enter a number:");
    scanf("%d",&num);
    if(num>0){
        printf("positive");
    }
    else if(num<0){
        printf("negative");
    }else{
        printf("zero");
    }
    
    return 0;
}




// #include <stdio.h>

int main(){
    int day ;
    printf("enter a day number:");
    scanf("%d",&day);
    if(day==1){
        printf("monday");
    }
    else if(day==2){
        printf("tuesday");
    }
    else if(day==3){
        printf("wednesday");
    }
    else if(day==4){
        printf("thursday");
    }
    else if(day==5){
        printf("friday");
    }
    else if(day==6){
        printf("saturday");
    }else{
        printf("invalid day");
    }
    
    return 0;
}




// #include <stdio.h>

int main(){
    int age ;
    printf("enter age :");
    scanf("%d",&age);
    if(age<5){
        printf("ticket is free");
    }
    else if(age<=12){
        printf("ticket is 100");
    }
    else if(age<=60){
        printf("ticket is 200");
    }
    else {
        printf("ticket is 150");
    }
    
    return 0;
}



// #include <stdio.h>

int main(){
    int month;
    printf("enter a month :");
    scanf("%d",&month);
    if(month ==1 || month ==3 || month ==5 || month ==7||month ==8 || month ==10 || month ==12){
        printf("31 days");
    }
    else if(month ==4 || month ==6 || month ==9 || month ==11){
        printf("30 days");
    }
    else if(month == 2){
        printf("28 0r feb month");
    }
    else{
        printf("invalid");
    }
    return 0;
}



// #include <stdio.h>

int main(){
    int a;
    int b;
    char op;
    printf("enter a 2 numbers :");
    scanf("%d %d ",&a,&b);
    printf("enter an operator :");
    scanf("%c",&op);
    
    if(op =='+'){
        printf(" addition = %d\n",a+b);
    }
    else if(op == '-'){
        printf("subtraction =%d\n",a-b);
    }
    else if(op =='*'){
        printf("mutliplication=%d\n",a*b);
    }
    else if(op == '/'){
        printf("division=%d\n",a/b);
    }
    else{
        printf("none");
    }
    return 0;
}




// #include <stdio.h>


int square();
int main(){
    square();
}
int square(){
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    
    printf("square=%d\n",n*n);
    return n*n;
}




// #include <stdio.h>

void checkevenodd();
    int main(){
        checkevenodd();
        return 0;
    }
    void checkevenodd(){
        int num;
        printf("enter a number\n");
        scanf("%d",&num);
        
        if(num % 2 == 0){
            printf("even");
        }
        else
        {
        printf("odd");
    }
    }
    


    // #include <stdio.h>

void factorial();

int main(){
    factorial();
    return 0;
}
void factorial(){
    int n,fact=1;
    double result;

    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    fact*=i;
    
}
        result=1.0/fact;
        printf("factorial of %d number = %lf\n",n,result);
        printf("fact %d = %lld\n",n,fact);

    }
    
    

// #include <stdio.h>

// #include <stdio.h>


void power();

int main(){
    power();
    return 0;
}
void power(){
    int x,n,fact=1;
    double result;
    printf("enter a base number:\n");
    scanf("%d",&x);

    printf("enter a power number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }

        result = pow(x,n)/fact;
        printf("power of  number is  = %lf\n",result);
    }


    
//#include<stdio.h>


void sumdigit();

int main(){
    sumdigit();
    return 0;
}
void sumdigit(){
    int n,digit,sum=0;

    printf("enter a interger number:\n");
    scanf("%d",&n);
    while(n>0){
    digit = n%10;
    sum = sum + digit;
    n = n/10;
}
    
        printf(" sum of digits:%d\n",sum);
    }
    

//#include<stdio.h>


void hcf();

int main(){
    hcf();
    return 0;
}
void hcf(){
    int n,m,temp;

    printf("enter a two numbers:\n\n");
    scanf("%d%d",&n,&m);
    
    while(n!=0){
    temp = n;
    n=m%n;
    m=temp;
}
    
        printf(" HCF(GCD):%d\n",m);
    }
    

        
    


    

