#include<stdio.h>
#include<iostream>
using namespace std;
    int main(){
        int B[2][3];
        int (*p)[3]=B;
        

        B[0][0] =2;
        B[0][1] =1; 
        // B[0][2] =6;
        B[1][0] =4;
        // B[1][1] =5;
        B[1][2] =8;
        std::cout<< &B[0] <<endl;
        std::cout<<B<<endl;
        std::cout<<*B<<endl;
        std::cout<<B[0]<<endl;
        std::cout<< &B[0][0]<<endl;
        std::cout<< **p <<endl;
        std::cout<< *(*(p+1)+1) <<endl;
        std::cout<< B[1][1] <<endl;
    }

// int main()
// {
//     int a;
//     int *p =&a;
//     a=10;
    
//     std::cout<< *p << endl;
//     std::cout<< p<< endl;
// }

//     int b=20;
//     *p=b; 
//     std::cout<< *p <<endl;
//     std::cout<< p <<endl;
// }   
   
// int Increment(int a)
//     {
//         a =a+1;
//         return a;
//     }   
// int main(){
//     int a;
//     int b;
//     a=10;
//     b= Increment(a);
//     std::cout<<b<<endl;
//     }

// int main(){
//     int A[4]={1,2,3,4};

    
    
//     std:: cout<<A[4]<<endl;
// }