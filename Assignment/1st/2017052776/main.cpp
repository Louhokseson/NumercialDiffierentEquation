//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  main.cpp, seminar sheet 1 
// ID£º2017052776 
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#include <iostream>
#include<string>
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  declarations
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


std::string Getstring(const std::string & caption);

int GetN(const std::string & caption);

void Output1(const std::string & caption, std::string a);

void Output2(const std::string & caption, std::string a,int N);

int PauseAndReturn();
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  main()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


int main()
{
    std::string caption1 = "Please enter some characters :";
    
    
    std::string a = Getstring(caption1);
    
    std::string caption2 = "Please enter a integer : ";
    
    int N = GetN(caption2);
    
    std::string caption3 = "The output of it is : ";
    
    std::string caption4 = "Nth of this string is : ";
    
    std::string caption5 = "2Nth of this string is : ";
    
    std::string caption6 = "3Nth of this string is : ";
    
    if (N < a.length())
    {
        Output2(caption4,a,N-1);
    }
     
     else
     {
         std::cout << N << " is larger than the length of the input string" << std::endl;
     }
     

    if (2*N < a.length())
    {
         Output2(caption5,a,2*N-1);
    }
     else
     {
         std::cout << 2*N <<" is larger than the length of the input string" << std::endl;
     }
    
    if (3*N < a.length())
    {
        Output2(caption6,a,3*N-1);
    }
     else
     {
         std::cout << 3*N << " is larger than the length of the input string" << std::endl;
     }
    
    
    Output1(caption3,a);


	return PauseAndReturn();
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  GetN()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
int GetN(const std::string & caption)
{
    std::cout << caption << "";
    int a;
    std::cin >> a;
    return a;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  Getstring()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
std::string Getstring(const std::string & caption)
{
    std::cout << caption << "";
    std::string a;
    std::cin >> a;
    return a;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  Output1()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void Output1(const std::string & caption, std::string a)
{
    std::cout << caption << a << std::endl;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  Output2()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
void Output2(const std::string & caption, std::string a , int N)
{
    std::cout << caption << a[N] << std::endl;
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  PauseAndReturn()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

int PauseAndReturn()
{
    char quit = '\0';
    while (quit != 'q')
    {
        std::cout <<"Enter q to quit: ";
        std::cin >> quit;
    }
	return 0;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  end of file
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
