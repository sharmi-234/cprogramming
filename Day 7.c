STRUCTURE
#include<stdio.h>
#include<string.h>
struct structure{
    int rollnumber;
    char name[10];
    float marks;
};
int main(){
    struct structure stru1;
    stru1.rollnumber=20;
   strcpy(stru1.name,"Senthil");
    stru1.marks=79.5;
    printf("The roll number is:%d\n",stru1.rollnumber);
    printf("The name is:%s\n",stru1.name);
    printf("The marks is:%.2f\n",stru1.marks);
    return 0;
}
EMPLOYEE SALARY
#include<stdio.h>
#include<string.h>
struct Employee{
    int employee_id;
     float salary;
};
int main(){
    struct Employee var;
    var.employee_id=2407;
    var.salary=10,000;
    printf("The employee_id is:%d\n",var.employee_id);
    printf("The salary is:%.2f\n",var.salary);
    return 0;
}
USING ARRAY
#include<stdio.h>
struct employee{
    int employee_id;
    float salary;
};
int main(){
    struct employee d[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter the employee details %d\n",i+1);
        printf("Employee ID:");
        scanf("%d",&d[i].employee_id );
        printf("Salary:");
        scanf("%f",&d[i].salary);
    }
    printf("\nEmployee payroll details:\n");
    for(i=0;i<3;i++){
        printf("\nEmployee %d\n",i+1);
        printf("\nId:%d\n",d[i].employee_id);
        printf("\nsalary:%.2f\n",d[i].salary);
    }
    return 0;
    
}
RECHARGE
#include<stdio.h>

struct mobile{
    long long int mobilenumber;
    float rechargeamount;
};
int main(){
    struct mobile stru1;
   stru1.mobilenumber=8015133004;
    stru1.rechargeamount=349.2;
    printf("The mobilenumber is:%lld\n",stru1. mobilenumber);
    printf("The rechargeamount is:%.2f\n",stru1.rechargeamount);
    
    
return 0;
}
NESTED
// Online C compiler to run C program online
#include <stdio.h>
struct student{
    char firstname[20];
    char lastname[20];
    
};
struct details{
    char dept[20];
    int year;
    struct student name; //NESTED
};
int main(){
    struct student stdname={"Eswar","Murugan"};
    struct details std1={"ECE",2028,stdname};
    printf("I am %s %s from department %s,completed in the year of %d",std1.name.firstname,std1.name.lastname,std1.dept,std1.year);
    return 0;
}
STRUCTURE USING POINTER

#include <stdio.h>
struct student{
    char name[20];
    int regno;
};

int main() {
    struct student std1={"Arociyam",204};
    // assign pointer
    struct student *point= &std1;//pointing structure to pointing variable
    printf("My name is %s\n",point->name);
    printf("My name's memory address is %p\n",point->name);
    printf("My regno is %d\n",point->regno);
    printf("My regno's memory address is %p\n",point->regno);
    

    return 0;
}
EXERCISE
#include<stdio.h>
struct mobile{
    char mobileno[20];
    int recamnt;
};
int main(){
    struct mobile rec={"8015133004",349};
    struct mobile*point=&rec;
    printf("mobileno is %s\n",point->mobileno);
    printf("mobileno's memory address is %p\n",point->mobileno);
    printf("recamt is %d\n",point->recamnt);
    printf("recamt's memory address is %p\n",point->recamnt);
    

}
USING POINTER AND NESTED
#include<stdio.h>
struct details{
    char city[20];
    int pc;
};
struct student{
    
    char name[20];
    int id;
    struct details details;
};
int main(){
    struct details d1={"Theni",625526};
    struct student add1={"sharlin",101,d1};
    struct student*point=&add1;
    printf("student details :city= %s,pc=%d,name= %s,id= %d,point->detail.city,point->details.pc,point->name,point->id");
}
    
    

    

    

