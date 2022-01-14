/*#include <stdio.h>
#include <math.h>

//関数の定義
double func1(double x);
double func2(double x);

//台形公式
double trapezoidal(double a, double b, int n, double(*f)());


//---------------------------------------------------------------------------

//関数の定義
double func1(double x)
{
	return(x*x*x*x - 2.0*x*x*x + x*x - 3.0*x + 1.0);
}

double func2(double x)
{
	return(1.0/x);
}

//---------------------------------------------------------------------------

//台形公式
double trapezoidal(double a, double b, int n, double (*f)())
{
	double T, h;
	int i;
	
	h = (b-a)/n;		
	
	
	T = ((*f)(a)+(*f)(b))/2.0;
	for(i=1; i<n; i++) {
	 T += (*f)(a+i*h);
	 }
	 
	   T *= h;
	
	return T;
}


//---------------------------------------------------------------------------

//メイン文
int main(void)
{
	int n;
	
	FILE *fp;
	
	fp = fopen("daikeihou.txt", "w");

	
	for (n = 2; n <= 50.0; n=n+4) {
	 fprintf(fp, "x^4-2x^3+x^2-3x+1を[0,3]で積分  分割数n = %d\n",n);
	 fprintf(fp,"結果　　　 %20.15f\n",trapezoidal(0.0,3.0,n,func1));
	 fprintf(fp,"真値との差 %20.15f\n\n",fabs(6.6-trapezoidal(0.0,3.0,n,func1)));
 }
   fprintf(fp, "\n\n\n");

	for (n = 2; n <= 50.0; n=n+4) {
	 fprintf(fp, "1/xを[1,2]で積分  分割数n = %d\n",n);
	 fprintf(fp, "結果　　　 %20.15f\n",trapezoidal(1.0,2.0,n,func2));
	 fprintf(fp, "真値との差 %20.15f\n\n",fabs(0.6931471805599454-trapezoidal(1.0,2.0,n,func2)));
}
	fclose(fp);
    
	return 0;
}
*/

#include <stdio.h>
#include <math.h>

//関数の定義
double func1(double x);
double func2(double x);

//台形公式
double trapezoidal(double a, double b, int n, double(*f)());


//---------------------------------------------------------------------------

//関数の定義
double func1(double x)
{
	return(x*x*x*x - 2.0*x*x*x + x*x - 3.0*x + 1.0);
}

double func2(double x)
{
	return(1.0/x);
}

//---------------------------------------------------------------------------

//台形公式
double trapezoidal(double a, double b, int n, double (*f)())
{
	double T, h;
	int i;
	
	h = (b-a)/n;		
	
	
	T = ((*f)(a)+(*f)(b))/2.0;
	for(i=1; i<n; i++) {
	 T += (*f)(a+i*h);
	 }
	 
	   T *= h;
	
	return T;
}


//---------------------------------------------------------------------------

//メイン文
int main(void)
{
	int n;
	
	FILE *fp;
	
	fp = fopen("daikeihou.txt", "w");

	
	for (n = 2; n <= 50.0; n=n+4) {
	 fprintf(fp, "x^4-2x^3+x^2-3x+1を[0,3]で積分  分割数n = %d\n",n);
	 fprintf(fp,"結果　　　 %20.15f\n",trapezoidal(0.0,3.0,n,func1));
	 fprintf(fp,"真値との差 %20.15f\n\n",fabs(6.6-trapezoidal(0.0,3.0,n,func1)));
 }
   fprintf(fp, "\n\n\n");

	for (n = 2; n <= 50.0; n=n+4) {
	 fprintf(fp, "1/xを[1,2]で積分  分割数n = %d\n",n);
	 fprintf(fp, "結果　　　 %20.15f\n",trapezoidal(1.0,2.0,n,func2));
	 fprintf(fp, "真値との差 %20.15f\n\n",fabs(0.6931471805599454-trapezoidal(1.0,2.0,n,func2)));
}
	fclose(fp);
    
	return 0;
}



