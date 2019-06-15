#include <stdio.h>
#include <math.h>
#define PI 3.14159265
#define MAXSIZE 10
float sine(float  x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);
float logten(float x);
float squareroot(float x);
float exponent(float x);
float power(float x,float y);
void poly();
void matrix();
void mul();
void add();
void sub();
void trans();
void det();
void complexalgebra();
void algebra();
void complex();

int main()
{
    float x,y;
    int n;
	float answer=0;
    printf("What do you want to do?\n");
    printf("0.matrix operations \n 22 complex and algebra \n 1.sin 2.cos 3. tan 4. sinh 5.cosh 6.tanh 7.1og10 8. square root. 9.exponent 10.power. 11.poly \n ");
    scanf ("%d",&n);
    if(n!=10)
    {
	
        switch (n)
        {
        	case 0: matrix(); break;
        	case 22: complexalgebra();break;
            case 11: poly(); break;
			case 1: answer = sine(x);    
			           printf("%d",answer);  break;
            case 2: answer = cosine(x);    printf("%d",answer); break;
            case 3: answer = tangent(x); printf("%d",answer);    break;
            case 4: answer = sineh(x);  printf("%d",answer);    break;
            case 5: answer = cosineh(x); printf("%d",answer);    break;
            case6: answer = tangenth(x); printf("%d",answer);  break;
            case 7: answer = logten(x);  printf("%d",answer);   break;
            case 8: answer = squareroot(x); printf("%d",answer); break;
            case 9: answer = exponent(x);  printf("%d",answer); break;
            
        }
    }
    if (n==10)
    {
        printf("What is x and y?\n");
        scanf("%f %f",&x,&y);
        //printf("%f %f",x,y);
        answer = power(x,y);
    }
    if (n>0 && n<11)
        printf("%f",answer);
    else
        printf("Wrong input.\n");
    return 0;
}
void matrix()
{
 int x,y,n,answer;
    printf("What do you want to do?\n");
    printf("001.multiply 111.addition 222.subtraction 333.transpose 444.dets ");
    scanf ("%d",&n);
    if (n<=4 && n>=0)
    {
        switch (n)
        {
            case 001: mul(); break;
		  case 111: add(); break;
		    case 222: sub(); break;
		    case 333: trans(); break;
		    case 444: det(); break;
           
            
        }
    }
    else printf("wrong option");
}
void mul()
{
	int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
}
void sub()
{

#define SIZE 3 

    int A[SIZE][SIZE];   int B[SIZE][SIZE];      int C[SIZE][SIZE];  

    int row, col;

    
    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("\nEnter elements in matrix B of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
        
            C[row][col] = A[row][col] - B[row][col];
        }
    }

    
    printf("\nDifference of two matrices A-B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    

}
void add()
{

#define SIZE 3


    int A[SIZE][SIZE];     int B[SIZE][SIZE]; 
    int C[SIZE][SIZE];  

    int row, col;

    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    
    printf("\nEnter elements in matrix B of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    
     
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            
            C[row][col] = A[row][col] + B[row][col];
        }
    }

    printf("\nsum of two matrices A-B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    

}
void trans()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEntered Matrix: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        } }
        void det()
        {
        	  int a[3][3], i, j;

 

  long determinant;

  printf("Enter the  elements of matrix: ");

  for(i = 0 ;i < 3;i++)

      for(j = 0;j < 3;j++)

           scanf("%d", &a[i][j]);

 

  printf("\nThe matrix is\n");

  for(i = 0;i < 3; i++){

      printf("\n");

      for(j = 0;j < 3; j++)

           printf("%d\t", a[i][j]);

  }

 

  determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]

   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

 

  printf("\nDeterminant of matrix: %ld", determinant);
	
}
void complexalgebra()
{
int x,y,n,answer;
    printf("What do you want to do?\n");
    printf("11.algebra 12.complex  ");
    scanf ("%d",&n);
    if (n<=4 && n>=0)
    {
        switch (n)
        {
            case 11: algebra(); break;
		  case 12: complex(); break;
		         
        }
    }
    else printf("wrong option");
}
void algebra()
{
  float a,b,c;
  float d,root1,root2;  
 
 
  printf("Enter a, b and c of quadratic equation: ");
  scanf("%f%f%f",&a,&b,&c);
   
  d = b * b - 4 * a * c;
  
  if(d < 0){
    printf("Roots are complex number.\n");
 
    printf("Roots of quadratic equation are: ");
    printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
  

  }
  else if(d==0){
   printf("Both roots are equal.\n");
 
   root1 = -b /(2* a);
   printf("Root of quadratic equation is: %.3f ",root1);
 

  }
  else{
   printf("Roots are real numbers.\n");
  
   root1 = ( -b + sqrt(d)) / (2* a);
   root2 = ( -b - sqrt(d)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f",root1,root2);
  }	
}
void complex()
{
struct complex
{
  int real, img;
};
 
  int choice, x, y, z;
  struct complex a, b, c;
 
  
    printf("Press 1 to add two complex numbers.\n");
    printf("Press 2 to subtract two complex numbers.\n");
    printf("Press 3 to multiply two complex numbers.\n");
    printf("Press 4 to divide two complex numbers.\n");

    printf("Enter your choice\n");
    scanf("%d", &choice);
 
 
    if (choice >= 1 && choice <= 4)
    {
      printf("Enter a and b where a + ib is the first complex number.");
      printf("\na = ");
      scanf("%d", &a.real);
      printf("b = ");
      scanf("%d", &a.img);
      printf("Enter c and d where c + id is the second complex number.");
      printf("\nc = ");
      scanf("%d", &b.real);
      printf("d = ");
      scanf("%d", &b.img);
    }
    if (choice == 1)
    {
      c.real = a.real + b.real;
      c.img = a.img + b.img;
 
      if (c.img >= 0)
        printf("Sum of the complex numbers = %d + %di", c.real, c.img);
      else
        printf("Sum of the complex numbers = %d %di", c.real, c.img);
    }
    else if (choice == 2)
    {
      c.real = a.real - b.real;
      c.img = a.img - b.img;
 
      if (c.img >= 0)
        printf("Difference of the complex numbers = %d + %di", c.real, c.img);
      else
        printf("Difference of the complex numbers = %d %di", c.real, c.img);
    }
    else if (choice == 3)
    {
      c.real = a.real*b.real - a.img*b.img;
      c.img = a.img*b.real + a.real*b.img;
 
      if (c.img >= 0)
        printf("Multiplication of the complex numbers = %d + %di", c.real, c.img);
      else
        printf("Multiplication of the complex numbers = %d %di", c.real, c.img);
    }
    else if (choice == 4)
    {
      if (b.real == 0 && b.img == 0)
        printf("Division by 0 + 0i isn't allowed.");
      else
      {
        x = a.real*b.real + a.img*b.img;
        y = a.img*b.real - a.real*b.img;
        z = b.real*b.real + b.img*b.img;
 
        if (x%z == 0 && y%z == 0)
        {
          if (y/z >= 0)
            printf("Division of the complex numbers = %d + %di", x/z, y/z);
          else
            printf("Division of the complex numbers = %d %di", x/z, y/z);
        }
        else if (x%z == 0 && y%z != 0)
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d + %d/%di", x/z, y, z);
          else
            printf("Division of two complex numbers = %d %d/%di", x/z, y, z);
        }
        else if (x%z != 0 && y%z == 0)
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d/%d + %di", x, z, y/z);
          else
            printf("Division of two complex numbers = %d %d/%di", x, z, y/z);
        }
        else
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d/%d + %d/%di",x, z, y, z);
          else
            printf("Division of two complex numbers = %d/%d %d/%di", x, z, y, z);
        }
      }
    }
    else
      printf("Invalid choice.");
 
    printf("\nPress any key to enter choice again...\n");
  	
}
float sine(float x)
{
    return (sin (x*PI/180));
}
float cosine(float x)
{
    return (cos (x*PI/180));
}
float tangent(float x)
{
    return (tan(x*PI/180));
}
float sineh(float x)
{
    return (sinh(x));
}
float cosineh(float x)
{
    return (sinh(x));
}
float tangenth(float x)
{
    return (sinh(x));
}
float logten(float x)
{
    return (log10(x));
}
float squareroot(float x)
{
    return (sqrt(x));
}
float exponent(float x)
{
    return(exp(x));
}
float power(float x, float y)
{
    return (pow(x,y));
}
void poly()
{
	    int array[MAXSIZE];

    int i, num, power;

    float x, polySum;

 

    printf("Enter the order of the polynomial \n");

    scanf("%d", &num);

    printf("Enter the value of x \n");

    scanf("%f", &x);

    /*  Read the coefficients into an array */

    printf("Enter %d coefficients \n", num + 1);

    for (i = 0; i <= num; i++)

    {

        scanf("%d", &array[i]);

    }

    polySum = array[0];

    for (i = 1; i <= num; i++)

    {

        polySum = polySum * x + array[i];

    }

    power = num;

 

    printf("Given polynomial is: \n");

    for (i = 0; i <= num; i++)

    {

        if (power < 0)

        {

            break;

        }

        /*  printing proper polynomial function */

        if (array[i] > 0)

            printf(" + ");

        else if (array[i] < 0)

            printf(" - ");

        else

            printf(" ");

        printf("%dx^%d  ", abs(array[i]), power--);

    }

    printf("\n Sum of the polynomial = %6.2f \n", polySum);

}

