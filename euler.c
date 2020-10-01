#include<math.h>
#include<stdlib.h> 

//Find the sum of all the multiples of 3 or 5 exclusive, below 1000. --> 233168
int problem_1(){ 
    int ans = 0;
    int i;
    for(i = 0; i < 1000; i++){
        if(i%3 == 0 || i%5 == 0 && i%15 != 0){
            ans = ans + i;
        }
    }
    return ans;
}

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

//euclidian algorithm to find gcd
int gcd(int p, int q){
    if (p==0) return q;
    return gcd(q%p, p);
}

//lcm(a,b) x gcd(a,b) = a x b
int lcm(int p, int q){
    return (p*q)/gcd(p,q);
}

int problem_5(){
    int ans = 1;
    int i;
    for (int i = 1; i < 20; i++){
        ans = lcm(ans,i);
    }
    return ans;
}

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

//sum of squares --> formula is (n)(n+1)(2n+1)/6
int sum_of_squares(int n){
    return n * (n+1) * (2 * n + 1) / 6;
}

//square of the sum --> [(n)(n+1)]^2
int square_of_sum(int n){
    return pow(n * (n+1) / 2,2);
}
//Find difference
int problem_6(){
    int ans = abs(sum_of_squares(100) - square_of_sum(100));
    return ans;
}