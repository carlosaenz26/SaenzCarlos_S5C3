# include <iostream>
using namespace std;

int multi(int num1,int num2);
int potencia (int num1);
int main()
{
int a =17;
int b=31;
int mul;
int po;
mul = multi(a,b);
cout <<" la multiplicacion da "<< mul;

po =potencia(a);
cout <<"la potencia es"<< po;

return 0;

}


int multi(int num1,int num2){
	int result;
	result= num1*num2;
	return result;
}

int potencia (int num1){
	int result;
	
	result= num1*num1;

}
