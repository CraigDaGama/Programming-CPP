//program to accept a number and print factorial
#include<iostream>
int main()
{
int n, fact=1;
std::cout<<"Enter a number: "<<std::endl;
std::cin>>n;
while(n>0)
    {
     fact=fact*n;
     n--;
    }
std::cout<<"Factorial is "<<fact<<std::endl;
return 0;
}
