// C++ program to develop a basic calculator
#include <iostream>
#include <math.h>
#include<windows.h>
using namespace std;
int ASCII=254;
char DRAW=ASCII; 
// Class calculator 
class Calculator
{
private:
   float a, b;
public:
    // Function to take input from user
	 void result1()
	 {
        cout << "\n\t\tEnter First Number: ";    
        cin >> a;
        cout << "\t\tEnter Second Number: ";   
        cin >> b;
     }
     void result2()
     {
     	cout << "\n\t\tEnter Number: ";    
        cin >> a;
	 }
	 void result3()
	 {
	 	cout<<"\n\t\tEnter any number :";
	 	cin>>a;
	 	cout<<"\t\tWhich power yo want  :";
	 	cin>>b;
	 }
    // Function to add two numbers
    float add() 
    {
        return a + b;
    }
    // Function to subtract two numbers
    float sub() 
    {
        return a - b;
    }
    // Function to multiply two numbers
    float mul() 
    {
        return a * b;
    }
    // Function to divide two numbers
    float div() 
    {
        if (b == 0) 
        {
            cout << "\t\tDivision By Zero" << endl;
            return INFINITY;
        }
        else
        {
           return a / b;
        }
    }
    // Function to to find square of any number
    float sqr()
    {
       return	a * a;
	}
    // Function to to find square root of any number
   float srt() 
    {
        return sqrt(a);
    }
    // Function to to find cube of any number
	float cube() 
    {
        return a*a*a;
    }
    // Function to to find cube root of any number
    float cubt() 
    {
        return cbrt(a);
    }
    // Function to to find power of any number
    float power()
    {
    	return pow(a,b);
	}
};
// Driver code

int main() 
{
    int ch, t,i,S;
	int var=240;
    Calculator c; 
    
    HANDLE p= GetStdHandle(STD_OUTPUT_HANDLE);  
    SetConsoleTextAttribute(p,5);
    
    cout<<"\t\t";
            for(i=0;i<70;i++)
            {
                cout<<DRAW;
            }
   
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,14);
    
    cout<<"\n\n\t\t                            CALCULATOR                       ";
    
    HANDLE s= GetStdHandle(STD_OUTPUT_HANDLE);  
    SetConsoleTextAttribute(s,5);
    
    cout<<"\n\n\t\t";
            for(i=0;i<70;i++)
            {
                cout<<DRAW;
            }
    main:
    	
    HANDLE m= GetStdHandle(STD_OUTPUT_HANDLE);  
    SetConsoleTextAttribute(m,15);
    
    cout <<"\n\n\t\t"<<(char)var<<" Enter 1 to perform Addition"<< 
            "\n\t\t"<<(char)var<<" Enter 2 to perform Subtraction "<< 
            "\n\t\t"<<(char)var<<" Enter 3 to perform Multiplication " << 
            "\n\t\t"<<(char)var<<" Enter 4 to to perform Division " << 
            "\n\t\t"<<(char)var<<" Enter 5 to find square of number "<<
            "\n\t\t"<<(char)var<<" Enter 6 to find square root of number "<<
            "\n\t\t"<<(char)var<<" Enter 7 to find cube of number "<<
            "\n\t\t"<<(char)var<<" Enter 8 to find cube root of number "<<
            "\n\t\t"<<(char)var<<" Enter 9 to find power of number ";
            
    HANDLE o= GetStdHandle(STD_OUTPUT_HANDLE);  
    SetConsoleTextAttribute(o,14);
            
			cout<<"\n\n\t\t-----------------------------------------------------";
                
    do
    {
        cout << "\n\t\tEnter your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            // result function invoked
            c.result1();     
            // add function to calculate sum
            cout << "\t\tAddition of given numbers: " <<c.add() << endl;
			cout<<"\n\t\t------------------------------------------------------";   
			cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
			else
			{
            	goto exit;
			}
        case 2:
            // sub function to calculate difference
            c.result1();
            cout << "\t\tSubtraction of given numbers: " << c.sub() << endl; 
            cout<<"\n\t\t------------------------------------------------------";   
             cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
		else
			{
            	goto exit;
			}
        case 3:
            c.result1();
            // mul function to calculate product
            cout << "\t\tMultiplication of given numbers: " <<c.mul() << endl; 
            cout<<"\n\t\t------------------------------------------------------";   
             cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
		else
			{
            	goto exit;
			}
        case 4:
            c.result1();
             // div function to calculate division
            cout << "\t\tDivision of given numbers: " <<c.div() << endl; 
            cout<<"\n\t\t------------------------------------------------------";   
            cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
		else
			{
            	goto exit;
			}
        case 5:
        	c.result2();
        	 // sqr function to calculate square of number
        	cout<<"\t\tSquare of given number: "<<c.sqr()<<endl;
        	cout<<"\n\t\t------------------------------------------------------";   
        	 cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
		else
			{
            	goto exit;
			}
        case 6:
        	c.result2();
        	// srt function to calculate square root of number
        	cout<<"\t\tSquare root of given number: "<<c.srt()<<endl;
			cout<<"\n\t\t------------------------------------------------------";   	
        	 cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
			else
			{
            	goto exit;
			}
        case 7:
        	c.result2();
        	// cube function to calculate Cube of any number
        	cout<<"\t\tCube of given number: "<<c.cube()<<endl;
        	cout<<"\n\t\t------------------------------------------------------";   
        	 cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
			else
			{
            	goto exit;
			}
        case 8:
        	c.result2();
        	// cubt function to calculate cube root of number
        	cout<<"\t\tCube root of given number: "<<c.cubt()<<endl;
        	cout<<"\n\t\t------------------------------------------------------";   
        	cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
		else
			{
            	goto exit;
			}
		case 9:
			c.result3();
			// power function to calculate Nth power of any number
			cout<<"\t\tPower of the given number :"<<c.power()<<endl;
			cout<<"\n\t\t------------------------------------------------------";   
			cout<<"\n\t\tEnter :";   
			cin>>t;
			if(t==0)
            {
            	goto main;
			}
		else
			{
            	goto exit;
			}
        }
    } while (ch >= 1 && ch <= 9);
    exit:
    return 0;
}