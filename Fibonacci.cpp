//program to generate fibonacci sequence for n numbers

#include <iostream>

int main() {
    int i=0,n,t1=0,t2=1,t3;

    std::cout<<"Enter the number of terms in the Fibonacci sequence: ";
    std::cin>>n;

    std::cout<<"Fibonacci sequence up to "<<n<<" terms:\n";
    if(n==1)
    std::cout<<t1<<" "<<std::endl;
    else if (n==2)
        std::cout<<t1<<" "<<t2<<" ";
    else
        {
        std::cout<<t1<<" "<<t2<<" ";
            while(i<n-2)
            {
                t3=t1+t2;
                std::cout<<t3<<" ";
                t1=t2;
                t2=t3;
                i++;
            }
        return 0;
}
}
