#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "head.h"
double rozwiazanie(double a,double b,double epsilon)
{
    double beg = a;
    double end = b;
    double temp = (end + beg)/2;
    bool ready = false;
    if(funkcja(a)>funkcja(b))
    {
    	while(!(funkcja(temp)>(-epsilon) && funkcja(temp)<epsilon))
    	{
    		if(funkcja(temp)<(-epsilon))
    		{end = temp;temp = (end+beg)/2;}
    		else if (funkcja(temp)>epsilon)
    		{beg=temp;temp = (end+beg)/2;}
    	}
    }else
    {
    	while(!(funkcja(temp)>(-epsilon) && funkcja(temp)<epsilon))
    	{
    		if(funkcja(temp)<(-epsilon))
    		{beg = temp;temp = (end+beg)/2;}
    		else if (funkcja(temp)>epsilon)
    		{end=temp;temp = (end+beg)/2;}
    	}
    }
    return temp;
}
