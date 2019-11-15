//Counting Sundays https://projecteuler.net/problem=19
//Bruteforce solution 
//Can be done using Gauss Algorithm 

#include <iostream>
using namespace std;

int main()
{
    int daysOfM[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int c(1), ans(0);

    for(int y = 1901; y < 2001; y++){
        
        for(int m = 0; m < 12; m++){

            if(y%4 == 0 && m == 1){     // leap Year calculation
                for(int d = 1; d <= daysOfM[m]; d++){
                    c++;
                    if(c == 7){
                        if(d == 1)
                            ans++;
                        c = 0;
                    }
                }

            } 

            else{

                for(int d = 1; d <= daysOfM[m]; d++){       //Rest of sundays...       
                    c++;
                    if(c == 7){
                        if(d == 1)                             //if day = 1 i.e sundays ans++
                            ans++;
                        c=0;    
                    }
                }
            }
        }
    }

    cout<<"Total Sundays from 1901 to 2001: "<<ans<<endl;
return 0;
}