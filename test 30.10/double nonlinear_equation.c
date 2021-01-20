#include <stdio.h>
#include <math.h>

#define A radioactivity, time, N, a
#define DECAY_TIME radioactivity, time, N, decay_time


double nonlinear_equation(double *radioactivity, double *time, int N, double precision);

double model(double *radioactivity, double *time, int N, double point);

double linear_equation(double *radioactivity, double *time, int N);

int main()
    {
    int N = 10;
    double E = 0.001;
    
    double radioactivity[10] = {1,2,3,4,5,6,7,8,9,10};
    double time[10] = {2,4,6,10,12,14,16,18,20};
    
    printf("decay_time = %lg", nonlinear_equation(radioactivity, time, N, E));
    
    //printf("%lg", model(radioactivity, time, N, decay));
    
    
    }
    
double model(double *radioactivity, double *time, int N, double point)
    {
    
    double sum = 0;
    int      i = 0;
        
    for(i = 0; i < N; i++)
        {
        sum += (  time[i]*exp(-time[i]/point)  *  (radioactivity[i] - exp(-time[i]/point))  ); 
        }
    return sum;
    }
    
double nonlinear_equation(double *radioactivity, double *time, int N, double precision)
    {
    
    double a = 0.2,
           b = 8.2;
    
    double decay_time = 0;

    do
    {
    
    decay_time = (a+b) / 2;
    
    if (model(A) * model(DECAY_TIME) < 0)
        b = decay_time;
    
    else if (model(A) * model(DECAY_TIME) > 0)
            a = decay_time;
    
    else 
        return decay_time;
    
    }while(model(DECAY_TIME) > precision);
    
    
    return decay_time;

    }
    
double linear_equation(double *radioactivity, double *time, int N)
    {
    
    double sum1 = 0,
           sum2 = 0;
    
    int i = 0;
        
    for(i = 0; i < N; i++)
        {
        sum1 += pow(time[i], 2);
        
        sum2 += time[i] * (1 - radioactivity[i]);
        }
        
    double decay_rate = sum1 / sum2;
    return decay_rate;
    }
    
double precision_analysis(double *radioactivity, double *time, int N)
    {
    
    int i = 0;
    
    double diviation1 = 0,
           diviation2 = 0;
    
    do
        {
        i++;
        diviation1 = dev_exp(radioactivity, time, 9+, nonlinear_equation(radioactivity, time, 9+i, precision));
        diviation2 = dev_linear(radioactivity, time, 10, linear_equation(radioactivity, time, 9+i));
         
        }while((diviation2 / diviation1) < 2);
        
    return time[9+i];
    
    
    }

