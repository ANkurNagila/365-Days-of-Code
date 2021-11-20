#include <iostream>
using namespace std;

class ComplexNumbers {
    // Complete this class

    private:
    
    	int real;
    	int imaginary;
    
    public:


        ComplexNumbers(int x,int y)
        {
            real=x;
            imaginary=y;
        }

    	void plus(ComplexNumbers s)
        {
            real=real+(s.real);
            imaginary=imaginary+(s.imaginary);
        }

    	void multiply(ComplexNumbers s)
        {
            int x=real*s.real -( imaginary*s.imaginary );
            int y=real*s.imaginary +( imaginary*s.real );
            
            real=x;
            imaginary=y;
       
        }

    	void print()
        {
            cout<<real<<" + i"<<imaginary<<endl;
        }


};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}
