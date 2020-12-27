#include <iostream> 
using namespace std;
int CalcCommonFactorOf(int x, int y);
int NextCommonFactor(int a,int b);

int i;
int main(void)
{
    int sub;
    CalcCommonFactorOf(100,50);
    while ((sub= CalcCommonFactorOf(100,50))>0){
        static int counter = 1;
        
        printf("Common factor %d is %d\n", counter++, sub);
        continue;
    }
    return 0;
}

int CalcCommonFactorOf(int x, int y ){
    for (i=std::min(x,y);i>=1;i--){
        if((x%i ==0)&&(y%i ==0)){
        }
        
    return i;    
    }
    
}