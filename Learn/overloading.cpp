#include <iostream>
#include <string>

class A{
    public :
        std::string name;
        int a;
        int b;
        int c;
    public:
        A()
        {
            std::cout<< "enter a :  \n";
            std::cin>>a;
            std::cout<< "enter b :  \n";
            std::cin>>b;
            std::cout<< "enter c :  \n";
            std::cin>>c;
        }
        int add(int a,int b,int c)
        {
            int sum = a + b + c;
            return(sum);
        }
        int add(int a,int b)
        {
            int sum = a + b;
            return(sum);
        }
        ~A()
        {
            std::cout << "finish\n";
        }
        
};
int main()
{
    A c1;
    int a = c1.add(c1.a,c1.b,c1.c);
    int b = c1.add(c1.a,c1.b);
    std::cout << "a is :" << a << std::endl;
    std::cout << "b is :" << b << std::endl;
}